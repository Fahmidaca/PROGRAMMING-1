//WRITE A PROGRAMM THAT READ TEMPERATURE IN FAHRENHEIT AND DISPLAY IN CENTIGRADE
#include<stdio.h>
int main()
{
float f,c;
printf("ENTER FAHRENHEIT SCALE TEMPERATURE :");
scanf("%f",& f);
c=(5*(f-32))/9;
printf("\n  CENTIGRADE SCALE TEMPERATURE=%f",c);
return 0;
}
