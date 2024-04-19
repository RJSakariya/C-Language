#include <stdio.h>
#include <string.h>
void write(char filename[100])
{
    FILE *p;
    p = fopen(strcat(filename, ".txt"), "w");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        while (fgets(strcat(filename, ".txt"), 100, p))
        {
            printf("old text : \n%s\n\n", filename);
        }
        printf("Enter your new writing : ");
        scanf("%s", strcat(filename, ".txt"));
        fprintf(p, "%s", filename);
        fclose(p);
    }
}
void read(char filename[100])
{
    FILE *p;
    p = fopen(strcat(filename, ".txt"), "r");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        while (fgets(strcat(filename, ".txt"), 100, p))
        {
            printf("read file : \n%s", filename);
        }
        fclose(p);
    }
}
void append(char filename[100])
{
    FILE *p;
    p = fopen(strcat(filename, ".txt"), "a");

    if (p == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully\n\n");
        while (fgets(strcat(filename, ".txt"), 100, p))
        {
            printf("%s\n", filename);
        }
        printf("Enter your new writing : ");
        scanf("%s", strcat(filename, ".txt"));
        fprintf(p, "%s", filename);
        fclose(p);
    }
}
void main()
{
    int a;
    char b[100];
    printf("if you will old writing remove to file and new writing write in file enter : 1 ,\nif you will only read file enter : 2 ,\nif you will only add new writing write in file and no remove old writing enter : 3 .\nenter your choice :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter Your file name:");
        scanf("%s", &b);
        write(b);
        break;
    case 2:
        printf("Enter Your file name:");
        scanf("%s", &b);
        read(b);

        break;
    case 3:
        printf("Enter Your file name:");
        scanf("%s", &b);
        append(b);
        break;

    default:
        printf("Invalid choice");
        break;
    }
    main();
}