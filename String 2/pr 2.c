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
        else if (name[i] >='a'&& name[i] <='z')
        {
            name[i]-=32;
        }
    }
    printf("Toggle case string : %s",name);
    main();
}