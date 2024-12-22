#include <stdio.h>
#include <string.h>
typedef  struct {
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
}SinhVien;
void del( SinhVien sv[], int n );
int main(){
	SinhVien sv[50] = {
        {1, "Pham Tien Hung", 18, "0876109917"},
        {2, "Tran Minh Tu", 21, "0987654321"},
        {3, "Le Thi Lan", 22, "0145833445"},
        {4, "Dang Thi Hong Hue", 18, "0437765432"},
        {5, "Pham Van Ly", 24, "092249155"}
    };
	del(sv, 5);
	return 0;
}
void del( SinhVien sv[], int  n ){
	for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(sv[j].name, sv[j+1].name) > 0) {
                SinhVien temp = sv[j+1];
                sv[j+1] = sv[j];
                sv[j] = temp;
            }
        }
    }
    
    printf("\nKet qua: \n");
	for ( int i = 0; i< n ; i++){
		printf("\n\nID: %d", sv[i].id);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].age);
		printf("\nSdt: %s ", sv[i].phoneNumber);
	}
}
