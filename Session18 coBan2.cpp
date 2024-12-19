#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien1;
    printf("Nhap vao ten sinh vien: ");
    fgets(sinhVien1.name, sizeof(sinhVien1.name), stdin);
    printf("Nhap vao tuoi: ");
    scanf("%d", &sinhVien1.age);
    getchar();
    printf("Nhap vao so dien thoai: ");
    fgets(sinhVien1.phoneNumber, sizeof(sinhVien1.phoneNumber), stdin);
    printf("Ten: %s", sinhVien1.name);
    printf("Tuoi: %d\n", sinhVien1.age);
    printf("SDT Number: %s", sinhVien1.phoneNumber);
}
