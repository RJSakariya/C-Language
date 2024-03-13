#include <stdio.h>
main()
{
    int first, second, third;
    printf("Enter a first number :");
    scanf("%d", &first);
    printf("Enter a second number :");
    scanf("%d", &second);
    printf("Enter a third number :");
    scanf("%d", &third);
    (first < second && first < third) ? printf("minimum number is : %d", first) : (second < third) ? printf("minimum number is : %d", second)
                                                                                                   : printf("minimum number is : %d", third);
}