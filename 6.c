#include<stdio.h>

int main()
{
int n, fd, ld, digits, rem;

printf("Enter any number:");
scanf("%d",&n);

ld=n%10;
while(n>=10)
{
    rem=n%10;
    n=n/10;
}
fd=n;
printf("First digit=%d\\n",fd);
printf("Last digit=%d\\n",ld);

return 0;
}