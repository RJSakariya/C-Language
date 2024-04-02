#include <stdio.h>
main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("elements from an Array:"); 
    for (int i = 0; i < size; i++){
        printf("%d,",arr[i]);
    }
    printf("\nNegative elements from an Array:");
    for (int i = 0; i < size; i++){
        if (arr[i] < 0)
        {
            printf("%d\n",arr[i]);
        }
    }
    main();
} 