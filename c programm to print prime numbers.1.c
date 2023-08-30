#include<stdio.h>
int main()
{
int num,count=0,i;
printf("ENTER ANY POSITIVE NUMBER:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
        count++;
        break;
    }
}
if(count==0)
printf("PRIME NUMBER\n");
else
    printf("NOT PRIME NUMBER\n");
return 0;

}
