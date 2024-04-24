#include <stdio.h>
void main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int a[size], *p[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number of element a[%d]: ", i + 1);
        scanf("%d", &a[i]);
        p[i] = &a[i];
    }
    printf("Square of array elements: ");
     for (int i = 0; i < size; i++)
    {
        printf( "%d, ",*p[i] * *p[i]);
    }
}