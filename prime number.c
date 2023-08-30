#include<stdio.h>
void main()
{
int number,i,p;
printf("enter the number:\n");
scanf("%d",&number);
for(i=2;i<=number/2;i++)
    if(number%i==0)
    p=1;
if(p==1)
    printf("the number %d is not prime\n",number);
    else
    printf("the number %d is prime\n",number);


}
