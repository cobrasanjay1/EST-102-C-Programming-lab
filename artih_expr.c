#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g,value;
    printf("Enter the value of a:\t");
    scanf("%f",&a);
    printf("Enter the value of b:\t");
    scanf("%f",&b);
    printf("Enter the value of c:\t");
    scanf("%f",&c);
    printf("Enter the value of d:\t");
    scanf("%f",&d);
    printf("Enter the value of e:\t");
    scanf("%f",&e);
    printf("Enter the value of f:\t");
    scanf("%f",&f);
    printf("Enter the value of g:\t");
    scanf("%f",&g);
    value=((a-b/c*d+e)*(f+g));
    printf("Answer is %f",value);
    return 0;
}