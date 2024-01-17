/*Ramesh basic salary is input through the keyboard, 
His dearness allowance is 40% of basic salary,
and house rent allowance is 20% of basic salary. Write a program to calculate 
his gross salary*/

// the references of these question are from either Ansi C or let us C book //
#include <stdio.h>

int main() {
    float basicSalary, grossSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    grossSalary = basicSalary * 1.6; // Gross salary = basic salary + 40% + 20%
    printf("Gross salary: %.2f\n", grossSalary);
    return 0;
}

