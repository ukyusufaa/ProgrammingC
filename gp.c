#include <stdio.h>

int main(){
    char names[5][50];
    int ages[5];
    char conditions[5][50];

    int count=0;
    int choice;
    int i;

    while(1){
        printf("\n---Patient System---\n");
        printf("1.Add Patient\n");
        printf("2.Display Patients\n");
        printf("3.Search Patient\n");
        printf("4.Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);h

        switch(choice)
        {
            //ADD
                case 1:
                if(count < 5)
                {
                    printf("Enter name");
                    while (getchar()!='\n');
                    fgets(names[count],50,stdin);

                    printf("Enter age: ");

                    scanf("%d",&ages[count]);
                    getchar();

                    printf("Enter condition: ");
                    fgets(conditions[count],50,stdin);

                    count++;
                }
                else
                {
                    printf("Database full\n");
                }
                break;

            //DISPLAY
            case 2:
                if(count ==0)
                {
                    printf("No patients\n");
                }
                else
                {
                        for(i=0;i<count;i++)
                        {
                            printf("\nPatient %d\n",i+1);
                            printf("Name: %s",names[i]);
                            printf("Age: %d\n", ages[i]);
                            printf("Condition: %s",conditions[i]);
                        }
                }
                break;

            //SEARCH
            case 3:
            {
                char search[50];
                int found=0;

                printf("Enter name to search: ");
                fgets(search,50,stdin);

                for(i=0;i<count;i++)
                {
                    int k=0;
                    int match=1;

                    while(search[k] !='\0' && names[i][k]!='\0')
                    {
                        if(search[k]!=names[i][k])
                        {
                            match=0;
                            break;
                        }
                        k++;
                    }
                    if(search[k] != names[i][k])
                    {
                        match=0;
                    }
                    if(match==1)
                    {
                        printf("\nPatient Found:\n");
                        printf("Name: %s", names[i]);
                        printf("Age: %d\n",ages[i]);
                        printf("Conditions:%s",conditions[i]);

                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Patient not found\n");
                }
                break;
            }

                //EXIT
                case 4:
                printf("Exiting...\n");
                return 0;

                default:
                    printf("Invalid chioice\n");
            }
        }
    return 0;
}
        