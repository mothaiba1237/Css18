#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} Student;
int findStudentById(Student students[], int numStudents, int id) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
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
    int idToSearch, index;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &idToSearch);
    index = findStudentById(students, numStudents, idToSearch);
    if (index == -1) {
        printf("Sinh vien voi ID %d khong ton tai.\n", idToSearch);
    } else {
        printf("Sinh vien tim thay:\n");
        printf("ID: %d\n", students[index].id);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
        printf("Phone Number: %s\n", students[index].phoneNumber);
        printf("Nhap ten moi: ");
        getchar();  
        scanf("%[^\n]", students[index].name);
        printf("Nhap tuoi moi: ");
        scanf("%d", &students[index].age);
        printf("---------------------------------------\n"); 
        printf("Thong tin sinh vien sau khi sua:\n");
        printf("ID: %d\n", students[index].id);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
        printf("Phone Number: %s\n", students[index].phoneNumber);
    }
    printf("\nDanh sach sinh vien sau khi sua:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("--------------------------------------\n"); 
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

