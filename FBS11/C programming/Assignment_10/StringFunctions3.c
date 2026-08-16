#include<stdio.h>
int main(){
	
char str[] = "C,Java,Python,.Net,C#,C++";

char *token = strtok(str, ",");

while(token != NULL)
{
    printf("%s\n", token);
    token = strtok(NULL, ",");
}
char a[]="124sabcdefcdef";
char b[]="12345678";
printf("\n%d",strspn(a,b));
 char D[] = "Hello World";
    char accept[] = "open";

    char *result = strpbrk(D, accept);

    if (result != NULL)
        printf("\nFirst matching character = %c", *result);
    else
        printf("\nNo character found");

}