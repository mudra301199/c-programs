Program to Multiply Two Numbers

#include <stdio.h>
#include <conio.h>
int main() 
{
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
    product = a * b;
    printf("Product = %.2lf", product);    
    return 0;
}
