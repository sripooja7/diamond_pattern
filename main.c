/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n,c=1;
    printf("Enter a value\n");
    scanf("%d",&n);
    c=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=c;j++)
        printf(" ");
        c--;
        for(k=1;k<=2*i-1;k++)
        printf("*");
        printf("\n");
        
    }
    c=1;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=c;j++)
        printf(" ");
        c++;
        for(k=1;k<=2*(n-i)-1;k++)
        printf("*");
        printf("\n");
    }
    return 0;
}
