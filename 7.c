#include<stdio.h>
#include<math.h>
int main()
{
int num,swappednum;
int firstdigit,lastdigit,digits;

printf("Enter any number:");
scanf("%d",&num);

lastdigit=num%10;
digits=(int)log10(num);
firstdigit=(int)(num/pow(10,digits));

swappednum=lastdigit;
swappednum*=(int)pow(10,digits);
swappednum+=num%((int)pow(10,digits));
swappednum-=lastdigit;
swappednum+=firstdigit;

printf("Originalnumber=%d",num);
printf("Number after swapping first and last digit:%d",swappednum);
return0;
}