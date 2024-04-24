#include <stdio.h>
void main()
{
    int number, result;
    printf("Enter any number : ");
    scanf("%d", &number);
    if (number >= 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    switch (result)
    {
    case 1:
        printf("This is Positive Number\n\n");
        break;
    default:
        printf("This is Negative Number\n\n");
        break;
    }
    main();
}