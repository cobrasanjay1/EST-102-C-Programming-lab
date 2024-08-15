#include<stdio.h>
struct employee
{
int id,salary;
char name[25];
}emp[100];
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as id , name , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&emp[i].id,emp[i].name,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_NAME\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t\t%s\t\t%d\n",emp[i].id,emp[i].name,emp[i].salary);
    }
}
