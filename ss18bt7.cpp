#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} Student;

int removeStudentByName(Student students[], int numStudents, char *nameToRemove) {
    int indexToRemove = -1;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, nameToRemove) == 0) {
            indexToRemove = i;
            break;
        }
    }
    if (indexToRemove == -1) {
        printf("\nSinh vien co ten '%s' khong ton tai.\n", nameToRemove);
        return numStudents;
    }
    for (int i = indexToRemove; i < numStudents - 1; i++) {
        students[i] = students[i + 1];
    }
    printf("\nDa xoa sinh vien co ten '%s'.\n", nameToRemove);
    return numStudents - 1;
}

int main() {
    Student students[50] = {
        {1, "A", 18, "0123456789"},
        {2, "B", 18, "0987654321"},
        {3, "C", 18, "0122333344"},
        {4, "D", 18, "0777888999"},
        {5, "E", 18, "0333445566"}
    };
    int numStudents = 5;
    printf("Danh sach sinh vien hien tai:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("------------------------------------\n");
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone: %s\n", students[i].phoneNumber);
    }
    char nameToRemove[100];
    printf("\nNhap ten sinh vien can xoa: ");
    scanf(" %s", nameToRemove);
    numStudents = removeStudentByName(students, numStudents, nameToRemove);
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("------------------------------------\n");
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone: %s\n", students[i].phoneNumber);
    }
    return 0;
}

