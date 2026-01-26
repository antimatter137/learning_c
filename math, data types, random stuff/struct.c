#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main() {

    Student student1 = {"Jake", 30, 3.5, true};
    Student student2 = {"Jamar", 36, 1.0, false};
    Student student3 = {"Jackson", 48, 3.1, false};
    Student student4 = {0};

    strcpy(student4.name, "Sussy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    // struct = A custom container that
    //holds multiple pieces of related information

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("%s\n\n", (student.isFullTime) ? "Is full time" : "Is not full time");
}