#include<stdio.h>
int main()
{
    int num;
    FILE *ptr;
    ptr=fopen("C:\\program.txt","W");
    if(ptr=='\0')
    {
        printf("error!");
    }
    printf("enter num:)");
    scanf("%d",&num);
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}


