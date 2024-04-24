#include <stdio.h>
void main()
{
    int number, result, reverse;
    printf("Enter any three digit number : ");
    scanf("%d", &number);
    if (number / 1000 == 0)
    {
        while (number != NULL)
        {
            result = number % 10;
            reverse = reverse * 10 + result;
            number = number / 10;
        }
        printf("Reverse of the number is : %d\n\n", reverse);
    }
    else
    {
        printf("Enter only three digit number\n\n");
    }
    main();
}