#include <stdio.h>
main()
{
    int size,product=1;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < size; k++){
        if(arr[k]%2==0){
            product *= arr[k];
        }
    }
    printf("product of even arr : %d\n",product);
    main();
}