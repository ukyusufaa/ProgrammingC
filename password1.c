#include <stdio.h>
#include <string.h>
#include <string.h>

#define NUM 7

int inputNames(char names[NUM][30], int marks[NUM], int count);
void showNames(char names[NUM][30], int marks[NUM], int count);
void findNames(char names[NUM][30], int marks[NUM], int count);
void minMarks(char names[NUM][30], int marks[NUM], int count);
void maxMarks(char names[NUM][30], int marks[NUM], int count);
void ascendMarks(char names[NUM][30], int marks[NUM], int count);
void descendMarks(char names[NUM][30], int marks[NUM], int count);

int main()
{
    char psswd[] = "PeterMothersole";
    char password[30];
    int i;
    int attempts = 3;
    int correct;
    int choice;
    int count = 0;
    char names[NUM][30];
    int marks[NUM];

    while (attempts > 0)
    {
        i = 0;
        correct = 1;
        printf("+--------------------+\n");
        printf("|TRINITY UPPER SCHOOL|\n");
        printf("+--------------------+\n");
        printf("Password: ");

        scanf("%s", password);

        while (psswd[i] != '\0' && password[i] != '\0')
        {
            if (psswd[i] != password[i])
            {
                correct = 0;
                break;
            }
            i++;
        }
        if (psswd[i] != password[i])
        {
            correct = 0;
        }
        if (correct == 1)
        {
            do
            {
                printf("+----------------------------+\n");
                printf("|TRINITY UPPER SCHOOL 1993   |\n");
                printf("+----------------------------+\n");
                printf("|1.Add                       |\n");
                printf("|2.Display                   |\n");
                printf("|3.Search                    |\n");
                printf("|4.Minimum                   |\n");
                printf("|5.Maximum                   |\n");
                printf("|6.Descending                |\n");
                printf("|7.Ascending                 |\n");
                printf("|8.EXIT                      |\n");
                printf("+----------------------------+\n");
                printf("Enter a number: ");

                scanf("%d", &choice);
                while (getchar() != '\n')
                    ;

                switch (choice)
                {
                case 1:
                    if (count < NUM)
                    {
                        count = inputNames(names, marks, count);
                    }
                    else
                    {
                        printf("List Full\n");
                    }
                    break;

                case 2:
                    if (count == 0)
                    {
                        printf("List Empty---Add Entries\n");
                    }
                    else
                    {
                        showNames(names, marks, count);
                    }
                    break;

                case 3:
                    if (count == 0)
                    {
                        printf("List Empty");
                    }
                    else
                    {
                        findNames(names, marks, count);
                    }
                    break;

                case 4:
                    minMarks(names, marks, count);
                    break;

                case 5:
                    maxMarks(names, marks, count);
                    break;

                case 6:
                    descendMarks(names, marks, count);
                    break;

                case 7:
                    ascendMarks(names, marks, count);
                    break;

                case 8:
                    return (0);
                    break;

                default:
                    printf("Invalid Number Entered\n");
                }
            } while (choice != 8);
        }
        else
        {
            attempts--;
            printf("Incorrect Password, %d attempts remaining\n", attempts);
        }
        if (attempts == 0)
        {
            printf("Blocked\n");
        }
    }
    return 0;
}

int inputNames(char names[NUM][30], int marks[NUM], int count)
{

    printf("Name: ");
    fgets(names[count], 30, stdin);
    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;

    return count;
}
void showNames(char names[NUM][30], int marks[NUM], int count)
{

    for (int i = 0; i < count; i++)
    {
        printf("Name:%s\n", names[i]);
        printf("Marks:%d\n", marks[i]);
    }
}
void findNames(char names[NUM][30], int marks[NUM], int count)
{
    char search[50];
    int found = 0;

    printf("Name: ");
    fgets(search, 50, stdin);

    for (int i = 0; i < count; i++)
    {
        int k = 0;
        int match = 1;

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
            printf("Name:%s\n", names[i]);
            printf("Marks:%d\n", marks[i]);

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("No Match Found\n");
    }
}
void minMarks(char names[NUM][30], int marks[NUM], int count)
{
    int min;
    int minIndex = 0;

    min = marks[0];
    for (int i = 0; i < count; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
            minIndex = i;
        }
    }
    printf("Name:%s --- Marks:%d\n", names[minIndex], marks[minIndex]);
}
void maxMarks(char names[NUM][30], int marks[NUM], int count)
{
    int max;
    int maxIndex = 0;

    max = marks[0];
    for (int i = 0; i < count; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            maxIndex = i;
        }
    }
    printf("Name:%s --- Marks:%d\n", names[maxIndex], marks[maxIndex]);
}
void descendMarks(char names[NUM][30], int marks[NUM], int count)
{
    int i, j;
    int tempMarks;
    char tempNames[50];

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (marks[i] < marks[j])
            {
                tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                strcpy(tempNames, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempNames);
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("Names:%s -- Marks:%d\n ", names[i], marks[i]);
    }
}
void ascendMarks(char names[NUM][30], int marks[NUM], int count)
{

    int i, j;
    int tempMarks;
    char tempNames[50];

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (marks[i] > marks[j])
            {
                tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                strcpy(tempNames, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempNames);
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("Names:%s -- Marks:%d\n ", names[i], marks[i]);
    }
}
