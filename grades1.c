#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char name[5][50];
    int marks[5];
    char address[5][50];
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
        {
            if (count < 5)
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
        }
        break;

        case 2:
        {
            if (count == 0)
            {
                printf("No Pupils To display--Insert Pupils");
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    printf("Name: %s\n", name[i]);
                    printf("Marks: %d\n", marks[i]);
                    printf("Address: %s\n", address[i]);
                }
            }
        }
        break;

        case 3:
        {
            char search[50];
            int found=0;

            printf("Enter Name to search");
            fgets(search,50,stdin);

            if(count==0)
            {
                printf("Nothing to search");
            }
            else
            {

                for(i=0;i<count;i++)
                {
                int match=1;
                int k=0;
                    while(search[k]!='\0' && name[i][k]!='\0')
                    {
                        if(search[k]!=name[i][k])
                        {
                            match=0;
                            break;
                        }
                        k++;
                    }
                    if(search[k]!=name[i][k])
                    {
                        match=0;
                    }
                    if(match==1)
                    {
                        printf("Name: %s\n",name[i]);
                        printf("Marks: %d\n",marks[i]);
                        printf("Address: %s\n",address[i]);

                        found=1;
                        break;
                    }
                }
                if(found==0)
                    {
                        printf("No match found");
                    }
                }
        break;
    }

        case 4:
        {
                int min;
                int minIndex;

                if(count==0)
                {
                    printf("No records");
                }
                else
                {
                    min=marks[0];
                    for(i=0;i<count;i++)
                    {
                        if(marks[i]<min)
                        {
                            min=marks[i];
                            minIndex=i;
                        }
                    }
                    printf("Name: %s Minimum Marks: %d\n", name[minIndex],min);
                }
                break;
            }
            case 5:
            {
                int max;
                int maxIndex;

                if(count==0)
                {
                    printf("Nothing found\n");
                }
                else
                {
                    max=marks[0];
                    for(i=0;i<count;i++)
                    {
                        if(marks[i]> max)
                        {
                            max=marks[i];
                            maxIndex=i;
                        }
                    }
                    printf("Name: %s Maximum Mark: %d\n",name[maxIndex],max);
                }
                break;
            }
            case 6:
            {
                int i,j;
                int temp;
                char tempName[50];


                if(count==0)
                {
                    printf("Nothing to show");
                }
                else
                {
                    for(i=0;i<count-1;i++)
                    {
                        for(j=i+1;j<count;j++)
                        {
                            if(marks[i] <marks[j])
                            {
                                temp=marks[i];
                                marks[i]=marks[j];
                                marks[j]=temp;

                                strcpy(tempName, name[i]);
                                strcpy(name[i], name[j]);
                                strcpy(name[j], tempName);
                            }
                        }
                    }
                    printf("\nSorted Result:\n");
                    for(i=0;i<count;i++)
                    {
                        printf("%s - %d\n",name[i],marks[i]);
                    }
                }
                break;
            }
            case 7:
            {
                int i,j;
                int temp;
                char tempName[50];
                if(count==0)
                {
                    printf("Nothing");
                }
                else
                {
                    for(i=0;i<count-1;i++)
                    {
                        for(j=i+1;j<count;j++)
                        {
                            if(marks[i] > marks[j]){
                                temp=marks[i];
                                marks[i]=marks[j];
                                marks[j]=temp;

                                strcpy(tempName, name[i]);
                                strcpy(name[i], name[j]);
                                strcpy(name[j], tempName);
                            }
                        }
                    }
                    printf("\nAscending order\n");
                    printf("%s--%d",name[i],marks[i]);
                }
                break;
            }
            case 8:
            {
                printf("Exit\n");
            }
            break;

            default:
            {
                printf("Invalid Command");
            }
        }
    }
    return 0;
}