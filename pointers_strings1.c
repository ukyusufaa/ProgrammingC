#include <stdio.h>
#include <string.h>

void change(char *p);

int main()
{
    char name[50] = "Sheraz";

    change(name);
    printf("The name Sheraz has been modified to %s\n", name);

    return 0;
}
void change(char *p)
{

    while (*p != '\0')
    {
        if (*p == 'e')
        {
            *p = 'i';
        }
    }
}