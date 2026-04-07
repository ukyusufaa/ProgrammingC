#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define MAX 5

int insertPupils(char name[MAX][50], int marks[MAX], char address[MAX][50], int count);
void displayPupils(char name[MAX][50], int marks[MAX], char address[MAX][50], int count);
void searchPupils(char name[MAX][50], int marks[MAX], char address[MAX][50], int count);
void findMin(char name[MAX][50], int marks[MAX], int count);
void findMax(char name[MAX][50], int marks[MAX], int count);
void sortDescending(char name[MAX][50], int marks[MAX], int count);
void sortAscending(char name[MAX][50], int marks[MAX], int count);

int main()
{
    int i;
    char name[MAX][50];
    int marks[MAX];
    char address[MAX][50];
    int choice;
    int count = 0;

    while (1)
    {
        printf("---Trinity Upper School 1995---");
        printf("\n1.Insert Pupils\n");
        printf("2.Display Pupils\n");
        printf("3.Search Pupils\n");
        printf("4.Lowest Marks Pupil\n");
        printf("5.Highest Marks Pupil\n");
        printf("6.Descending Marks Of All Pupils\n");
        printf("7.Ascending Marks Of All Pupils\n");
        printf("8.Exit\n");

        printf("Please select an operation: ");
        scanf("%d", &choice);
        while (getchar() != '\n')
            ;

        switch (choice)
        {
        case 1:
            if (count < 5)
            {
                count = insertPupils(name, marks, address, count);
            }
            else
            {
                printf("List is full\n");
            }

            break;

        case 2:
            displayPupils(name, marks, address, count);
            break;

        case 3:
            searchPupils(name, marks, address, count);
            break;

        case 4:
            findMin(name, marks, count);
            break;

        case 5:
            findMax(name, marks, count);

        case 6:
            sortDescending(name, marks, count);

        case 7:
            sortAscending(name, marks, count);

        case 8:
            break;

        default:
            printf("Invalid Command");
            break;
        }
    }
    return 0;
}
int insertPupils(char name[MAX][50], int marks[MAX], char address[MAX][50], int count)
{
    if (count >= 0)
    {
        printf("Name: ");
        fgets(name[count], 50, stdin);
        printf("Marks: ");
        scanf("%d", &marks[count]);
        getchar();
        printf("Address: ");
        fgets(address[count], 50, stdin);

        count++;
    }
    else
    {
        printf("Full Space--Can't Insert More Pupils");
    }
    return count;
}
void displayPupils(char name[5][50], int marks[5], char address[5][50], int count)
{

    int i;
    for (i = 0; i < count; i++)
    {
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n", marks[i]);
        printf("Address: %s\n", address[i]);
    }
}
void searchPupils(char name[MAX][50], int marks[MAX], char address[MAX][50], int count)
{
    char search[50];
    int found = 0;
    int i;
    printf("Enter Name to search");
    fgets(search, 50, stdin);

    for (i = 0; i < count; i++)
    {
        int match = 1;
        int k = 0;
        while (search[k] != '\0' && name[i][k] != '\0')
        {
            if (search[k] != name[i][k])
            {
                match = 0;
                break;
            }
            k++;
        }
        if (search[k] != name[i][k])
        {
            match = 0;
        }
        if (match == 1)
        {
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            printf("Address: %s\n", address[i]);

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("No match found");
    }
}

void findMin(char name[MAX][50], int marks[MAX], int count)
{
    int i;
    int min;
    int minIndex = 0;

    min = marks[0];
    for (i = 0; i < count; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
            minIndex = i;
        }
    }
    printf("Name: %s Minimum Marks: %d\n", name[minIndex], min);
}
void findMax(char name[MAX][50], int marks[MAX], int count)
{
    int i;
    int max;
    int maxIndex = 0;

    max = marks[0];
    for (i = 0; i < count; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            maxIndex = i;
        }
    }
    printf("Name: %s Maximum Mark: %d\n", name[maxIndex], max);
}
void sortDescending(char name[MAX][50], int marks[MAX], int count)
{
    int i, j;
    int temp;
    char tempName[50];

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (marks[i] < marks[j])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;

                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
    }
    printf("\nSorted Result:\n");
    for (i = 0; i < count; i++)
    {
        printf("%s - %d\n", name[i], marks[i]);
    }
}
void sortAscending(char name[MAX][50], int marks[MAX], int count)
{
    int i, j;
    int temp;
    char tempName[50];

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (marks[i] > marks[j])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;

                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
    }

    printf("\nAscending order\n");
    for (i = 0; i < count; i++)
    {
        printf("%s--%d", name[i], marks[i]);
    }
}
