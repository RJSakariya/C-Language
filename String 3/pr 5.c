#include<stdio.h>
#include<string.h>
main(){
    char name_1[100],name_2[100]="@gmail.com";
    printf("Enter your name: ");
    gets(name_1);
    printf("Your email Id is: ");
    puts(strcat(strlwr(name_1),name_2));
    main();
}