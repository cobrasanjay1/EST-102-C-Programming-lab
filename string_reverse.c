#include<stdio.h>
#include<string.h>
void rev_string(char *str)
{
    int length= strlen(str);
    for(int i=0;i<length/2;i++)
    {
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}
int main()
{
    char str[]= "hello";
    printf("Original=%s\n",str);
    rev_string(str);
    printf("Reversed=%s\n",str);
    return 0;
}
