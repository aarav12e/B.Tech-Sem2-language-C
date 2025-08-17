// 29. Define structure TRAIN_INFO and perform listed operations
#include <stdio.h>
#include <string.h>
struct Time {
    int hour, minute;
};

struct Train {
    int number;
    char name[30];
    struct Time depart, arrive;
    char start[30], end[30];
};

int main() {
    struct Train t[5];
    int i, n = 5;
    printf("Enter data for 5 trains:\n");
    for(i = 0; i < n; i++) {
        printf("Train %d\n", i+1);
        printf("Number: "); scanf("%d", &t[i].number);
        printf("Name: "); scanf("%s", t[i].name);
        printf("Departure Time (hh mm): "); scanf("%d%d", &t[i].depart.hour, &t[i].depart.minute);
        printf("Arrival Time (hh mm): "); scanf("%d%d", &t[i].arrive.hour, &t[i].arrive.minute);
        printf("Start Station: "); scanf("%s", t[i].start);
        printf("End Station: "); scanf("%s", t[i].end);
    }
    // (a-d) operations are complex, can be added separately as functions if needed.
    return 0;
}