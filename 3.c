//sum of odd number till n
#include <stdio.h>
int main()
{
int i,sum=0,n;
printf("SUM OF ODD NUMBER TILL 'n'\n");
printf("please enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(i%2==1){
    sum=sum+i;}
}
printf("The sum of %d odd numbers are:%d",n,sum);
return 0;
}

