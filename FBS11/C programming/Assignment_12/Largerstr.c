#include<stdio.h>

int length(char*);

int main()
{
    char str1[50], str2[50];
    int l1, l2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    l1 = length(str1);
    l2 = length(str2);

    if(l1 > l2)
    {
        printf("Larger string = %s", str1);
    }
    else if(l2 > l1)
    {
        printf("Larger string = %s", str2);
    }
    else
    {
        printf("Both strings are equal in length");
    }

    return 0;
}

int length(char* str)
{
    int i = 0;

    while(str[i++] != '\0');
    

    return i;
}