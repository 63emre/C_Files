#include <stdio.h>

typedef struct Employee {
    char name[50];
    char surname[50];
    char job_title[50];
    int salary;
    int years_worked;
} Employee;

int main() {
    Employee employees[3];
    // Input employee information
    for (int i = 0; i < 3; i++) {
        printf("Enter employee %d's name: ", i+1);
        scanf("%s", employees[i].name);
        
        printf("Enter employee %d's surname: ", i+1);
        scanf("%s", employees[i].surname);
        
        printf("Enter employee %d's job title: ", i+1);
        scanf("%s", employees[i].job_title);
        
        printf("Enter employee %d's salary: ", i+1);
        scanf("%d", &employees[i].salary);
        
        printf("Enter employee %d's years worked: ", i+1);
        scanf("%d", &employees[i].years_worked);
    }
    
    // Increase salary based on years worked
    for (int i = 0; i < 3; i++) {
        if (employees[i].years_worked >= 5) {
            employees[i].salary *= 1.1;
        }
        else if (employees[i].years_worked >= 3) {
            employees[i].salary *= 1.05;
        }
    }
    
    // Output employee information
    printf("\nEmployee information:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s %s (Job Title: %s) - Final Salary: %d\n",
               employees[i].name, employees[i].surname,
               employees[i].job_title, employees[i].salary);
    }
    
    return 0;
}
