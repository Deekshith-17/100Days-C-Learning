#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter student age: ");
    scanf("%d", &s.age);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
