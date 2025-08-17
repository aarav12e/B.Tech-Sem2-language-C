// 31. WAP to compare contents of two files
#include <stdio.h>
int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    char c1, c2;
    int same = 1;
    if(!f1 || !f2) {
        printf("Error opening files\n");
        return 1;
    }
    while((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if(c1 != c2) {
            same = 0;
            break;
        }
    }
    if(same && fgetc(f1) == EOF && fgetc(f2) == EOF)
        printf("Files are same\n");
    else
        printf("Files are different\n");
    fclose(f1);
    fclose(f2);
    return 0;
}