//Write a C program to read two integers from the user and check whether the numbers are equal or not equal. Display the appropriate message.
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a == b)
        printf("Numbers are equal\n");
    else
        printf("Numbers are not equal\n");
    return 0;
}
