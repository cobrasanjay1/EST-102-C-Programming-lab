#include<stdio.h>
int main() {
    int n, s, r, dup;
    printf("\nEnter a number please: ");
    scanf("%d", &n);
    dup=n;
    s=0;
    while (n>0) 
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if (dup==s)
        printf("\n%d is an Armstrong number", dup);
    else
        printf("\n%d is not an Armstrong number", dup);

    return 0;
}
