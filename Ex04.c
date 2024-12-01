#include <stdio.h>

int main(){
	int number;
	int n = 0;
	int arr[100];
	int addNumber , swapNumber , delNumber, position;
	
	do{
		printf("\n	MENU	\n");
		printf("\n1.Nhap vao mang\n");
		printf("2.Hien thi mang\n");
		printf("3.Them phan tu\n");
		printf("4.Sua phan tu\n");
		printf("5.Xoa phan tu\n");
		printf("6.Thoat\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &number);
		switch(number){
			case 1:
				printf("\nMoi ban nhap do dai mang: ");
				scanf("%d", &n);
				while(n <= 0){
					printf("\nMang khong the la so am hay nhap lai: ");
					scanf("%d", &n);
				}
				for(int i = 0; i < n; i++){
					printf("\nNhap phan tu thu %d : ", i+1);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				if(n == 0){
					printf("Ban chua gan gia tri nao cho mang");
				}else{
					printf("Mang ban vua nhap vao la:\n");
					for(int i = 0; i < n; i++){
						printf("%d ", arr[i]);
					}
				}
				break;
			case 3:
				printf("Nhap gia tri ban muon them: ");
				scanf("%d", &addNumber);
				printf("Nhap vi tri ban muon them: ");
				scanf("%d", &position);
				while(position <= 0 || position > n){
					printf("Gia tri ban nhap nho hon 0 hoac lon hon chieu dai mang hay nhap lai: ");
					scanf("%d", &position);
				}
				n = n + 1;
				for(int i = n; i >= position; i--){
					arr[i]= arr[i - 1];
				}
				printf("Mang sau khi duoc them la:\n");
				for(int i = 0; i < n; i++){
					if(i == position - 1){
						arr[i] = addNumber;
					}
					printf("%d ", arr[i]);
				}
				break;
			case 4:
				printf("Nhap gia tri ban muon sua: ");
				scanf("%d", &swapNumber);
				printf("Nhap vi tri ban muon sua: ");
				scanf("%d", &position);
				while(position <= 0 || position > n){
					printf("Gia tri ban nhap nho hon 0 hoac lon hon chieu dai mang hay nhap lai: ");
					scanf("%d", &position);
				}
				printf("Mang sau khi duoc sua la:\n");
				for(int i = 0; i < n; i++){
					if(i == position - 1){
						arr[i] = swapNumber;
					}
					printf("%d ", arr[i]);
				}
				break;
			case 5:
				printf("Moi ban nhap vi tri muon xoa: ");
				scanf("%d", &position);
				while(position <= 0 || position > n){
					printf("Gia tri ban nhap nho hon 0 hoac lon hon chieu dai mang hay nhap lai: ");
					scanf("%d", &position);
				}
				n = n - 1;
				for(int i = position - 1; i < n; i++){
					arr[i] = arr[i + 1];
				}
				printf("Mang sau khi duoc xoa la: ");
				for(int i = 0; i < n; i++){
					printf("%d ", arr[i]);
				}
				break;
			case 6:
				break;
			default:
				printf("Gia tri ban nhap khong ton tai trong MENU");
		}
	}while(number != 6);

	return 0;
}
