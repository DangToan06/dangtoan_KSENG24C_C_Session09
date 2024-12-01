#include <stdio.h>

int main(){
    int swapNumber, position;
    int num, n, arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri muon thay: ");
    scanf("%d", &swapNumber);
    printf("Nhap vi tri ban muon thay: ");
    scanf("%d", &position);

    while(position > n || position <= 0){
		printf("Vi tri ban nhap khong co trong mang hay nhap lai: ");
		scanf("%d", &position);
	}

    for(int i = 0; i < n; i++){
        if(i == position - 1){
            arr[i] = swapNumber;
        }
        printf("%d ", arr[i]);
    }
}