#include <stdio.h>
#include <string.h>

void change(char *p);

int main()
{
    char name[40] = "Sheraz";

    change(name);
    printf("The name Sheraz has been corrected to %s", name);

    return 0;
}
void change(char *p)
{
    int i = 0;

    while (p[i] != '\0')
    {
        if (p[2] == 'e')
        {
            p[2] = 'i';
        }
        p++;
    }
}