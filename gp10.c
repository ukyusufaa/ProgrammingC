#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 7

int insertName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count);
void displayName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count);
void searchName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count);
int main()
{
    char pswd[] = "PeterLeadbetter";
    char password[30];
    int attempts = 5;
    int correct;
    int i;

    while (attempts > 0)
    {
        correct = 1;
        i = 0;

        printf("PASSWORD: ");
        scanf("%s", password);

        while (pswd[i] != '\0' && password[i] != '\0')
        {
            if (pswd[i] != password[i])
            {
                correct = 0;
                break;
            }
            i++;
        }
        if (pswd[i] != '\0' || password[i] != '\0')
        {
            correct = 0;
        }
        if (correct == 1)
        {
            char name[MAX][30];
            char address[MAX][100];
            int phone[MAX];
            char email[MAX][40];
            char gpNotes[MAX][1000];
            int count = 0;
            int choice;

            do
            {
                printf("1.Add\n");
                printf("2.Show\n");
                printf("3.Search\n");
                printf("4.Exit\n");

                printf("Enter a number from above:\n");
                scanf("%d", &choice);
                while (getchar() != '\n')
                    ;

                switch (choice)
                {
                case 1:
                    if (count < MAX)
                    {
                        count = insertName(name, address, phone, email, gpNotes, count);
                    }
                    else
                    {
                        printf("List Full\n");
                    }
                    break;

                case 2:
                    if (count == 0)
                    {
                        printf("List Empty");
                    }
                    else
                    {
                        displayName(name, address, phone, email, gpNotes, count);
                    }
                    break;

                case 3:
                    if (count == 0)
                    {
                        printf("List Empty--Insert Entries\n");
                    }
                    else
                    {
                        searchName(name, address, phone, email, gpNotes, count);
                    }
                    break;

                case 4:
                    return (0);
                    break;

                default:
                    printf("Invalid choice made");
                    break;
                }
            } while (choice != 4);
        }
        else
        {
            attempts--;
            printf("Incorrect Password, %d Attempts remaining\n", attempts);
        }
        if (attempts == 0)
        {
            printf("Blocked");
        }
    }

    return 0;
}
int insertName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count)
{

    printf("Name: ");
    fgets(name[count], 30, stdin);
    printf("Address: ");
    fgets(address[count], 100, stdin);
    printf("Phone/Mobile Number: ");
    scanf("%d", &phone[count]);
    while (getchar() != '\n')
        ;
    printf("Email: ");
    fgets(email[count], 40, stdin);
    printf("GP Notes: ");
    fgets(gpNotes[count], 1000, stdin);

    count++;

    return count;
}
void displayName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\n ", name[i]);
        printf("Address: %s\n", address[i]);
        printf("Phone/Mobile Number: %d\n", phone[i]);
        printf("Email: %s\n", email[i]);
        printf("GP Notes: %s\n", gpNotes[i]);
    }
}
void searchName(char name[MAX][30], char address[MAX][100], int phone[MAX], char email[MAX][40], char gpNotes[MAX][1000], int count)
{
    char search[50];
    int found = 0;

    printf("Name: ");
    fgets(search, 50, stdin);

    for (int i = 0; i < count; i++)
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
        if (search[k] != '\0' || name[i][k] != '\0')
        {
            match = 0;
        }
        if (match == 1)
        {
            printf("Name: %s\n", name[i]);
            printf("Address: %s\n", address[i]);
            printf("Phone/Mobile Number: %d\n", phone[i]);
            printf("Email: %s\n", email[i]);
            printf("GP Notes: %s\n", gpNotes[i]);

            found = 1;
        }
    }
    if (found == 0)
    {
        printf("No Match found");
    }
}
