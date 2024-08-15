#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    if((fptr =fopen("C\\program.txt","r"))=='\0')
    {
        printf("Error!Opening file");
        exit(1);
    }
    fscanf(fptr,"%d",&num);
    printf("value of n=%d",num);
    fclose(fptr);
    return 0;
}
