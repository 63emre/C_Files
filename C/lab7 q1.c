#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    long ID;
    char name[31];
    char courseCode[21];
    float grade;
};

void addStudent(FILE* file);
void display(FILE* file);

int main() {
    FILE* file;
    file = fopen("students.dat", "wb"); // Create binary file

    int choice;
    do {
        printf("MENU:\n");
        printf("0 - Add new student\n");
        printf("1 - Display all\n");
        printf("2 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                addStudent(file);
                break;
            case 1:
                display(file);
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 2);

    fclose(file);
    return 0;
}

void addStudent(FILE* file) {
    struct Student student;
    printf("Enter student information (ID, Name, Course Code, Grade):\n");
    scanf("%ld", &student.ID);
    while (student.ID != -1) {
        scanf("%s %s %f", student.name, student.courseCode, &student.grade);
        fwrite(&student, sizeof(struct Student), 1, file);
        scanf("%ld", &student.ID);
    }
}

void display(FILE* file) {
    struct Student student;
    printf("ID\tName\t\tCourse Code\tGrade\n");
    printf("--\t----\t\t-----------\t-----\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%ld\t%s\t\t%s\t\t%.1f\n", student.ID, student.name, student.courseCode, student.grade);
    }
}
