#include <stdio.h>
main()
{
    int size, min;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    for (int k = 0; k < size; k++)
    {
        if (k == 0)
        {
            min = arr[k];
        }
        else{
            if (min > arr[k])
            {
                min = arr[k];
            }
        }
    }
    printf("Minimum number of array: %d\n", min);
    main();
}