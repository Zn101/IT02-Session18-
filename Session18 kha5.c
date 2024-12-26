#include<stdio.h>

struct SinhVien{
	char id[20];
	char fullName[50];
	int age;
	char phoneNumber[20];
};

void updateSinhVien(struct SinhVien *sinhVien[], int n, char[]);

int main(){
	char findById[100];
	struct SinhVien sinhVien[50]={
		{"1", "abc1", 18, "12345678"},
		{"2", "abc2", 18, "87654321"},
		{"3", "abc3", 18, "11111111"},
		{"4", "abc4", 18, "22222222"},
		{"5", "abc5", 18, "00000000"}
	};
	printf("Moi ban nhap id cua sinh vien can update: ");
	fgets(findById, sizeof(findById), stdin);
	updateSinhVien(&sinhVien, 5, findById);
	printf("Ten sinh vien vua update: %s", sinhVien[2].fullName);
}

	updateSinhVien(struct SinhVien *sinhVien[], int n, char findById[]){
		for(int i=0; i<n; i++){
			if(strcmp(findById, sinhVien[i]->id)){
				strcpy(sinhVien[i]->fullName, "Bang De Ngu");
				return 0;
			}	
		}		
	}
