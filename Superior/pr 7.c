#include <stdio.h>

void main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array should have at least two elements.\n");
    }

    int a[size],large = a[0],secondlarge=a[0];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(large < a[i]){
            secondlarge = large;
            large = a[i];
        }else if (secondlarge < a[i] && large > a[i])
        {
            secondlarge = a[i];
        }
    }
    printf("Second largest element in the array is: %d\n", secondlarge);
}