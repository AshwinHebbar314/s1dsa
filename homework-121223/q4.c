// 4.	Write a C program that takes input from the user to convert from Fahrenheit to Celsius or from Celsius to Fahrenheit. Based on the input, call the relevant function to do the conversion and print the result.

#include <stdio.h>
double fahrenheit_to_celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double celsius_to_fahrenheit(double celsius)
{
    return celsius * 9 / 5 + 32;
}

int main()
{
    int choice;
    double temp;
    printf("Enter 1 to convert from Fahrenheit to Celsius or 2 to convert from Celsius to Fahrenheit: ");
    scanf("%d", &choice);
    printf("Enter the temperature: ");
    scanf("%lf", &temp);

    if (choice == 1)
    {
        printf("%.2lf Fahrenheit is %.2lf Celsius\n", temp, fahrenheit_to_celsius(temp));
    }
    else if (choice == 2)
    {
        printf("%.2lf Celsius is %.2lf Fahrenheit\n", temp, celsius_to_fahrenheit(temp));
    }
    else
    {
        printf("Invalid choice\n");
    }
}