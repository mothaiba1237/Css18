#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("\nSinh vien %d:\n", students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Phone Number: ");
        scanf(" %[^\n]", students[i].phoneNumber);
    }
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
    	printf("---------------------------------------------\n");
        printf("\Sinh vien %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
    }
    return 0;
}

