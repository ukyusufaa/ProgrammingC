#include <stdio.h>

int main()
{
    int i, count = 0;
    char names[5][50];
    char addresses[5][50];
    int marks[5];
    int min, max;
    int select;

    while (1)
    {
        printf("---Trinity Upper School---");
        printf("\n1.Insert Student Name\n");
        printf("2.View Student Data\n");
        printf("3.Search Student Name\n");
        printf("4.View Lowest Marks Student\n");
        printf("5.View Highest Marks student\n");
        printf("6.View Marks in Ascending Order\n");
        printf("7.View Marks in Descending Order\n");
        printf("8.Exit\n");

        printf("Please select from menu an operation: ");
        scanf("%d", &select);
        while (getchar() != '\n')
            ;

        switch (select)
        {
        case 1:
            if (count < 5)
            {
                printf("Enter Name: ");
                fgets(names[count], 50, stdin);
                printf("Enter Marks: ");
                scanf("%d", &marks[count]);
                getchar();
                printf("Address: ");
                fgets(addresses[count], 50, stdin);

                count++;
            }
            else
            {
                printf("Can't add more student data-we are full");
            }
            break;

        case 2:
        {
            if (count == 0)
            {
                printf("No Student Data Available");
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    printf("Name: %s", names[i]);
                    printf("Marks: %d", marks[i]);
                    printf("Addresses: %s", addresses[i]);
                }
            }
        }
        break;

        case 3:
        {
            char search[50];
            int found = 0;

            printf("Enter Student Name to Search: ");
            fgets(search, 50, stdin);

            for (i = 0; i < count; i++)
            {
                int match = 1;
                int k = 0;
                while (search[k] != '\0' && names[i][k] != '\0')
                {

                    if (search[k] != names[i][k])
                    {
                        match = 0;
                        break;
                    }
                    k++;
                }
                if (search[k] != names[i][k])
                {
                    match = 0;
                }
                if (match == 1)
                {
                    printf("Name: %s", names[i]);
                    printf("Marks: %d", marks[i]);
                    printf("Address: %s", addresses[i]);

                    found = 1;
                    break;
                }
                if (found == 0)
                {
                    printf("Student Name Not Found");
                }
            }
            break;
        }

        case 4:
            if (count == 0)
            {
                printf("No records found\n");
            }
            else
            {
                min = marks[0];
                int minIndex = 0;
                for (i = 1; i < count; i++)
                {
                    if (marks[i] < min)
                    {
                        min = marks[i];
                        minIndex = i;
                    }
                }
                printf("Minimum marks: %d Name: %s\n", min, names[minIndex]);
            }
            break;
        case 5:
            if (count == 0)
            {
                printf("No records found\n");
            }
            else
            {
                max = marks[0];
                for (i = 1; i < count; i++)
                {
                    if (marks[i] > max)
                    {
                        max = marks[i];
                    }
                }
                printf("Maximum marks: %d", max);
            }
            break;

        case 6:
        {
            int i, j;
            int sortedMarks[5];
            int temp;

            for (i = 0; i < count; i++)
            {
                sortedMarks[i] = marks[i];
            }

            for (i = 0; i < count - 1; i++)
            {
                for (j = i + 1; j < count; j++)
                {
                    if (sortedMarks[i] > sortedMarks[j])
                    {
                        temp = sortedMarks[i];
                        sortedMarks[i] = sortedMarks[j];
                        sortedMarks[j] = temp;
                    }
                }
            }
            for (i = 0; i < count; i++)
            {
                printf("%d ", sortedMarks[i]);
            }
            printf("\n");
            break;
        }

        case 7:
        {
            int i, j;
            int sortedMarks[5];
            int temp;

            for (i = 0; i < count; i++)
            {
                sortedMarks[i] = marks[i];
            }

            for (i = 0; i < count - 1; i++)
            {
                for (j = i + 1; j < count; j++)
                {
                    if (sortedMarks[i] < sortedMarks[j])
                    {
                        temp = sortedMarks[i];
                        sortedMarks[i] = sortedMarks[j];
                        sortedMarks[j] = temp;
                    }
                }
            }
            for (i = 0; i < count; i++)
            {
                for (j = 0; j < count; j++)
                {
                    if (sortedMarks[i] == marks[j])
                    {
                        printf("Name: %s Marks: %d\n", names[j], marks[j]);
                    }
                }
            }
            break;
        }

        case 8:
        {
            printf("Exiting program...");
            return 0;
        }
        default:
        {
            printf("Invalid choice. Please try again.\n");
        }
        }
    }

    return 0;
}