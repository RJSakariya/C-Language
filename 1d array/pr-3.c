#include <stdio.h>
main()
{
    int size,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < size; k++){
        sum += arr[k];
    }
    printf("size of arr: %d\n",size);
    printf("sum of arr : %d\n",sum);
    printf("average of arr : %d\n",sum/size);
    main();
}