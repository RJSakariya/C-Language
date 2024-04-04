#include<stdio.h>
main(){
    char name[100];
    printf("Enter any string without space : ");
    scanf("%s",&name);
    for (int i = 0; name[i] !='\0'; i++)
    {
        if (name[i] >='A'&& name[i] <='Z')
        {
            name[i]+=32;
        }
    }
    printf("Lower case string : %s",name);
    main();
}