#include <stdio.h>
#include <string.h>
struct House {
    int room;
    int year;
    char city[50];
};
void main() {
    int n;
    printf("Enter the detailes number: ");
    scanf("%d", &n);
    struct House house[n];
    for (int i = 0; i < n; i++) {
        printf("Enter house %d details:\n", i + 1);
        printf("Enter Room Quantity:");
        scanf("%d", &house[i].room);
        printf("Enter Established Year:");
        scanf("%d", &house[i].year);
        printf("Enter city Name: ");
        scanf("%s", &house[i].city);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("house %d details:\n", i + 1);
        printf("Room Quantity: %d\n", house[i].room);
        printf("Established Year: %d\n", house[i].year);
        printf("city: %s\n", house[i].city);
    }
}