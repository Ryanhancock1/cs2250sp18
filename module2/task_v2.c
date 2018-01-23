#include<stdio.h>

int main()
{
int x;
int y;
 printf("Enter Integers\n");
 scanf("%d %d", &x, &y);
//Sum
 printf("Sum %d + %d = %d\n", x, y, x + y);
//Difference
 printf("Diferrence %d - %d = %d\n", x, y, x - y);
//Product
 printf("Product %d * %d = %d\n", x, y, x * y);
//division- will only give quotient 
 printf("Divion %d / %d = %d\n", x, y, x / y);
//Get Remainder with modulus %
 printf("Modulus  %d and  %d = %d\n", x, y, x % y);
return 0;

}
