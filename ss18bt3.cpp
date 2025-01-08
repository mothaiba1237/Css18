#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("Name: "); 
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Phone Number: ");
        scanf("%s", students[i].phoneNumber);
    }
    printf("Danh sach sinh vien:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
    }

    return 0;
}

