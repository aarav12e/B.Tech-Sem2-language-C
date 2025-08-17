// 32. WAP to check if word exists in file and count occurrences
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    char word[50], temp[50];
    int count = 0;
    printf("Enter word to search: ");
    scanf("%s", word);
    if(!fp) {
        printf("File not found\n");
        return 1;
    }
    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(word, temp) == 0)
            count++;
    }
    if(count > 0)
        printf("Word found %d times\n", count);
    else
        printf("Word not found\n");
    fclose(fp);
    return 0;
}
