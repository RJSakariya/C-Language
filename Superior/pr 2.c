#include <stdio.h>
main()
{
    int size,max=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < size; k++){
        if (k == 0)
        {
            max = arr[k];
        }
        else{
            if (max > arr[k])
            {
                max = arr[k];
            }
        }
    }
    printf("Maximum number of array: %d\n",max);
    main();
}