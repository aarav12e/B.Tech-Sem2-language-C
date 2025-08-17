// 28. WAP to implement strlen, strcat, strcpy using functions
#include <stdio.h>
int my_strlen(char s[]) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while((dest[i] = src[i]) != '\0') i++;
}

void my_strcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while(dest[i] != '\0') i++;
    while((dest[i++] = src[j++]) != '\0');
}

int main() {
    char str1[100], str2[100], str3[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Length of str1 = %d\n", my_strlen(str1));
    my_strcpy(str3, str1);
    printf("Copy of str1 = %s\n", str3);
    my_strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);
    return 0;
}
