Program to Add Two Integers

#include <stdio.h>
#include <conio.h>
int main() 
{    
    int number1, number2, sum;  
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;          
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}