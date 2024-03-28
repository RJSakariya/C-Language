#include <stdio.h>
main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++){
            printf(" ");
        }
        if (i == 1 || i == 5)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1||j == i)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}