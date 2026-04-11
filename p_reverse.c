#include <stdio.h>

// function to reverse string
void reverse(char *p);

int main()
{
    char name[50] = "Yusuf"; // Original string
    int len;

    while (name[len] != '\0')
    {
        len++;
    }
    printf("Original name:%s\n", name);
    printf("Length of name:%d\n", len);
    printf("Last index:%d\n", len - 1);
    printf("Last charcater in name:%c\n", name[len - 1]);
    // call function and pass string
    reverse(name);
    // print result
    printf("Reversed name:%s\n", name);
    return 0;
}

// function to reverse string
void reverse(char *p)
{
    int len = 0; // stores length of string
    int i;       // loop variable
    char temp;   // used for swapping

    // STEP 1:Calculate length of string
    // Loop until we reach '\0'(end of string)
    // while loop calculates length of string
    while (p[len] != '\0')
    {
        len++; // increase count for each character
    }
    // STEP 2:Reverse the string
    // Only go till half(len/2)
    for (i = 0; i < len / 2; i++)
    {
        // store first character in temp
        temp = p[i];
        // move last charcater to front
        p[i] = p[len - 1 - i];
        // put temp(original front) at the back
        p[len - 1 - i] = temp;
    }
}