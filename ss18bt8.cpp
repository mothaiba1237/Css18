#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} Student;

int insertStudentAtPosition(Student students[], int numStudents, Student newStudent, int position) {
    if (position < 0 || position > numStudents || numStudents >= 50) {
        printf("\nVi tri khong hop le hoac mang da day.\n");
        return numStudents;
    }
    for (int i = numStudents; i > position; i--) {
        students[i] = students[i - 1];
    }
    students[position] = newStudent;
    return numStudents + 1;
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
    Student newStudent;
    int position;
    printf("\nNhap vi tri can chen (0 - %d): ", numStudents);
    scanf("%d", &position);
    printf("Nhap ID sinh vien: ");
    scanf("%d", &newStudent.id);
    printf("Nhap ten sinh vien: ");
    scanf("%s", newStudent.name);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai: ");
    scanf("%s", newStudent.phoneNumber);
    numStudents = insertStudentAtPosition(students, numStudents, newStudent, position);
    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("------------------------------------\n");
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone: %s\n", students[i].phoneNumber);
    }

    return 0;
}

