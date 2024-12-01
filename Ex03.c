#include<stdio.h>

int main(){
    int n, arr[100], delNumber, position;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri ban muon xoa: ");
    scanf("%d", &position);

    while(position > n || position <= 0){
		printf("Vi tri ban nhap khong co trong mang hay nhap lai: ");
		scanf("%d", &position);
	}

    for(int i = position - 1 ; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
}