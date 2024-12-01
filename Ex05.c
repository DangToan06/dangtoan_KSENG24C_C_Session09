#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int a[100], n = 0, number, check = 1, user, addNumber, position;
    int max = INT_MIN, min = INT_MAX;

    do{
        printf("\n\nMENU\n");
        printf("1.Nhap so phan tu can nhap va cac gia tri cua phan tu\n");
        printf("2.In ra gia tri cac phan tu\n");
        printf("3.In ra cac gia tri chan va tinh tong\n");
        printf("4.In gia tri lon nhat va nho nhat trong mang\n");
        printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7.Them mot phan tu vao vi tri chi dinh\n");
        printf("8.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &number);
        int sum = 0, count = 0;
        switch(number){
            case 1:
                printf("Nhap so dai cua mang: ");
                scanf("%d", &n);
                while(n <= 0){
					printf("Mang khong the la so am hoac 0 hay nhap lai: ");
					scanf("%d", &n);
				}
                printf("Nhap cac gia tri cho mang:\n");
                for(int i = 0; i < n; i++){
                    scanf("%d", &a[i]);
                }
                break;
            case 2:
                if(n == 0){
                    printf("Ban chua gan gia tri nao cho mang");
                }else{
                    printf("Gia tri ban vua nhap vao cho mang la:\n");
                    for(int i = 0; i < n; i++){
                        printf("%d ", a[i]);
                    }
                }
                break;
            case 3:
                printf("Cac gia tri chan trong mang la:\n");
                for(int i = 0; i < n; i++){
                    if(a[i] % 2 == 0){
                        sum += a[i];
                        printf("%d ", a[i]);
                    }
                }
                if(sum == 0){
                    printf("Trong mang khong co so nao la so chan");
                }else{
                    printf("\nTong ca so chan trong mang la: %d", sum);
                }
                break;
            case 4:
                for(int i = 0; i < n; i++){
                    if(a[i] > max){
                        max = a[i];
                    }
                    if(a[i] < min){
                        min = a[i];
                    }
                }
                printf("Gia tri nho nhat la: %d\nGia tri lon nhat la: %d", min, max);
                break;
            case 5:
                printf("Cac so nguyen to trong mang la:\n");
                for(int i = 0; i < n; i++){
                    check = 1;
                    if(a[i] <= 1){
                        check = 0;
                    }
                    for(int j = 2; j <= sqrt(a[i]); j++){
                        if(a[i] % j == 0){
                            check = 0;
                        }
                    }
                    if(check == 1){
                        printf("%d ", a[i]);
                        count++;
                    }
                }
                if(count == 0){
                    printf("Trong mang khong co so nguyen to");

                }
                break;
            case 6:
                printf("Nhap vao gia tri cua ban: ");
                scanf("%d", &user);
                for(int i = 0; i < n; i++){
                    if(a[i] == user){
                        count++;
                    }
                }
                printf("Trong mang co %d phan tu %d", count, user);
                break;
            case 7:
                printf("Nhap gia tri ban muon them: ");
                scanf("%d", &addNumber);
                printf("Nhap vi tri ba muon them: ");
                scanf("%d", &position);
                while(position > n || position <= 0){
                    printf("Nhap lai: ");
                    scanf("%d", &position);
                }
                n = n + 1;
                for(int i = n; i >= position; i--){
                    a[i] = a[i - 1];
                }
                printf("Mang sau khi duoc ban them vao la:\n");
                for(int i = 0; i < n; i++){
                    if(i == position - 1){
                        a[i] = addNumber;
                    }
                    printf("%d ", a[i]);
                }
                break;
            case 8:
                break;
            default :
                printf("Gia tri ban nhap khong ton tai trong MENU");
        }
    }while(number != 8);
    return 0;
}