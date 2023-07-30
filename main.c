#include <stdio.h>
#include <stdlib.h>


01)
#include<stdio.h>
int main()
{
  int n,odd,even;


    printf("Enter an integer: ");
    scanf("%d", &n);


    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0;



02)
     int choice;
    float num1, num2, result;

    printf("Menu-Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;



03)
#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, result;

    printf("Menu-Driven Calculator\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    switch (choice) {
        case 1:
            result = 2 * PI * radius;
            printf("Circumference of the circle: %.2f\n", result);
            break;
        case 2:
            result = PI * radius * radius;
            printf("Area of the circle: %.2f\n", result);
            break;
        case 3:
            result = (4.0 / 3.0) * PI * radius * radius * radius;
            printf("Volume of the sphere: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;







04)
#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch (letter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is not a vowel.\n", letter);
            break;
    }

    return 0;
}
05)

#include <stdio.h>
int main(){

 int mont,days;

 printf("Enter the month number (1-12):");
 scanf("%d",&month);

  switch(month){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days");
            break;
        case 4:
        case 6:
        case 9:
            printf("This month has 30 days");
            break;
        case 2:
            printf ("This month has 28 days");
            break;

        default:
            printf("not a month");
            break;

}


}
