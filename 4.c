//program to print any table
#include <stdio.h>
int main()
{
int n,c,i,m;

printf("PROGRAM TO PRINT ANY TABLE\n\n");
printf("enter the number whose table you want to print:");
scanf("%d",&n);
printf("enter the number of multiples you want to print:");
scanf("%d",&m);
for(i=1;i<=m;i++)
{   c=n*i;
    printf("%d X %d = %d\n",n,i,c);
}
printf("thank you");
return 0;
}

