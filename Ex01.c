#include <stdio.h>

int main(){
	int n, currentLength = 0;
	printf("Nhap kich co cua mang: ");
	scanf("%d", &n);
	
	while(n <= 0){
		printf("Nhap lai: ");
		scanf("%d", &n);
	}
	
	int arr[100];
	for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
	}
	
	currentLength = n;
	printf("do dai mang la: %d\n", currentLength);
	
	int num, position;
	printf("Nhap gia tri ban muon them: ");
	scanf("%d", &num);
	printf("Nhap vi tri ban muon them: ");
	scanf("%d", &position);
	
	while(position > currentLength || position <= 0){
		printf("Vi tri ban nhap khong co trong mang hay nhap lai: ");
		scanf("%d", &position);
	}
	
	
	for(int i = n + 1 ; i >= position; i--){
		arr[i] = arr[i-1];
	}
	
	for(int i = 0; i <= n; i++){
		if(i == position-1){
			arr[i] = num;
		}
		printf("%d ", arr[i]);
	}
	
	return 0;
}

