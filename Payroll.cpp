#include <stdio.h>

int main ()
{
    char name [80];
    int hourlyRate = 281;
    int hoursWorked = 0;
    float grossPay = 0;
    float netPay = 0;
    float withHoldingtax = 0;	
    
    printf("Please enter your name\n");
    scanf("%s", name);
    printf("Enter hours worked\n");
    scanf("%d", &hoursWorked);
    	
    grossPay = hourlyRate * hoursWorked;
    withHoldingtax = grossPay * .32;
    netPay = grossPay - withHoldingtax;
    
    printf ("Hi %s\n", name);
    printf("Your gross pay is:%.2f\n", grossPay);
    printf("Your withHoldingtax is:%.2f\n", withHoldingtax);
    printf("Your netPay is:%.2f\n", netPay);
    
    return 0;     
    
}
