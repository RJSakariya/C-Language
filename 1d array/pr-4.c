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
        if(arr[k]%2!=0){
            printf("%d\n",arr[k]);
        }
    }
    main();
}