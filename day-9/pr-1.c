#include <stdio.h>
main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    (num % 2 != 0) ? printf("%d is odd",num) : printf("%d is even",num);
}