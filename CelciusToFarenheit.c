#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main(){

float temp;
char unit;
float c;
float f;

printf("Is the temperature in Celsius or Degrees?:\n");
scanf("%c",&unit);

unit = toupper(unit);

if(unit == 'C'){

printf("What is the temperature:\n");
scanf("%f",&temp);
f = (temp*9/5)+32;
printf("Your Temp in Farenheit is: (%f)F\n", f);


}else if(unit == 'F'){

printf("What is your temperature:\n");
scanf("%f",&temp);
c = (temp - 32)*5/9;
printf("Your temperature is: (%f)\n", c);


}else{


printf("\ninvalid!");

}




return 1;

}