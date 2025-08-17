//Write a C program that takes two integers and an operator (+, -, *, /) from the user and performs the corresponding arithmetic operation using a switch statement. If division is selected, handle division by zero by displaying an error message.
#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if(b != 0) printf("Result = %.2f\n", (float)a / b);
            else printf("Division by zero error!\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
