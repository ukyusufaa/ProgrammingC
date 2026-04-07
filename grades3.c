#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 7

int insertStudent(char name[MAX][50], int marks[MAX], int count);
void displayStudent(char name[MAX][50], int marks[MAX], int count);
void searchStudent(char name[MAX][50], int marks[MAX], int count);
void minStudent(char name[MAX][50], int marks[MAX], int count);
void maxStudent(char name[MAX][50], int marks[MAX], int count);
void descendingStudent(char name[MAX][50], int marks[MAX], int count);
void ascendingStudent(char name[MAX][50], int marks[MAX], int count);

int main()
{
    char name[MAX][50];
    int marks[MAX];
    int count = 0;
    int choice;

    printf("---TRINITY UPPER SCHOOL---\n\t1993\n");

    do
    {
        printf("1.Insert - One Student\n");
        printf("2.Display - All Students\n");
        printf("3.Search - One Student\n");
        printf("4.Lowest Marks - Student\n");
        printf("5.Highest Marks - Student\n");
        printf("6.Descending Marks - All Students\n");
        printf("7.Ascending Marks - All Students\n");
        printf("EXIT\n");

        printf("Enter a number from the menu:\n");
        scanf("%d", &choice);
        while (getchar() != '\n')
            ;

        switch (choice)
        {
        case 1:
            if (count < MAX)
            {
                count = insertStudent(name, marks, count);
            }
            else
            {
                printf("List full\n");
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("List Empty\n");
            }
            else
            {
                displayStudent(name, marks, count);
            }
            break;

        case 3:
            if (count == 0)
            {
                printf("List Empty\n");
            }
            else
            {
                searchStudent(name, marks, count);
            }
            break;

        case 4:
            minStudent(name, marks, count);
            break;

        case 5:
            maxStudent(name, marks, count);
            break;

        case 6:
            descendingStudent(name, marks, count);
            break;

        case 7:
            ascendingStudent(name, marks, count);
            break;

        case 8:
            exit(0);
            break;

        default:
        {
            printf("Invalid selection made");
            break;
        }
        }

    } while (choice != 8);

    return 0;
}
int insertStudent(char name[MAX][50], int marks[MAX], int count)
{

    printf("Name: \n");
    fgets(name[count], 50, stdin);
    printf("Marks: \n");
    scanf("%d", &marks[count]);
    while (getchar() != '\n')
        ;

    count++;

    return count;
}
void displayStudent(char name[MAX][50], int marks[MAX], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n", marks[i]);
    }
}
void searchStudent(char name[MAX][50], int marks[MAX], int count)
{
    char search[50];
    int found = 0;

    printf("Name: ");
    fgets(search, 50, stdin);

    for (int i = 0; i < count; i++)
    {
        int k = 0;
        int match = 1;

        while(getchar() != '\n');
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

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("No match found");
    }
}
void minStudent(char name[MAX][50], int marks[MAX], int count)
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
    printf("Name:%s Marks: %d\n", name[minIndex], marks[minIndex]);
}
void maxStudent(char name[MAX][50], int marks[MAX], int count)
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

    printf("Name:%s Marks: %d\n", name[maxIndex], marks[maxIndex]);
}

void descendingStudent(char name[MAX][50], int marks[MAX], int count)
{
    int tempMarks;
    char tempName[50];

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (marks[i] < marks[j])
            {
                tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
        for (int i = 0; i < count; i++)
        {
            printf("Name: %s Marks %d\n", name[i], marks[i]);
        }
    }
}
void ascendingStudent(char name[MAX][50], int marks[MAX], int count)
{
    int tempMarks;
    char tempName[50];

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (marks[i] > marks[j])
            {
                tempMarks = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMarks;

                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
        for (int i = 0; i < count; i++)
        {
            printf("Name: %s Marks %d\n", name[i], marks[i]);
        }
    }
}
