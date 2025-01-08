#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[50] = {
        {1, "A", 18, "0123456789"},
        {2, "B", 18, "0987654321"},
        {3, "C", 18, "0122333344"},
        {4, "D", 18, "0777888999"},
        {5, "E", 18, "0333445566"}
    };
    int numStudents = 5;
    Student newStudent;
    printf("Nhap ID sinh vien: ");
    scanf("%d", &newStudent.id);
    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]%*c", newStudent.name);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai: ");
    scanf(" %[^\n]%*c", newStudent.phoneNumber);
    students[numStudents++] = newStudent;
    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("------------------------------------\n");
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone: %s\n\n", students[i].phoneNumber);
    }
    return 0;
}

