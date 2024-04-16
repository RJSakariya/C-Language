#include <stdio.h>
#include <string.h>
struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};
void main() {
    int N;
    printf("Enter the number of employees: ");
    scanf("%d", &N);
    struct Employee employees[N];
    for (int i = 0; i < N; i++) {
        printf("Enter employee %d details:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Employee Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Employee Age: ");
        scanf("%d", &employees[i].emp_age);
        printf("Employee Role: ");
        scanf("%s", employees[i].emp_role);
        printf("Employee City: ");
        scanf("%s", employees[i].emp_city);
        printf("Employee Experience: ");
        scanf("%d", &employees[i].emp_experience);
        printf("Employee Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("\n");
        printf("Employee %d details:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Employee Name: %s\n", employees[i].emp_name);
        printf("Employee Age: %d\n", employees[i].emp_age);
        printf("Employee Role: %s\n", employees[i].emp_role);
        printf("Employee City: %s\n", employees[i].emp_city);
        printf("Employee Experience: %d\n", employees[i].emp_experience);
        printf("Employee Company Name: %s\n", employees[i].emp_company_name);
    }
}