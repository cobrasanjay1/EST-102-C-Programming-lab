#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers A,B and C:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c)
        printf("%d is largest",a);
    if (b>=c&&b>=a)
        printf("%d is the largest",b);
    if (c>=a&&c>=b)
        printf("%d is the largest",c);
    return 0;


}

