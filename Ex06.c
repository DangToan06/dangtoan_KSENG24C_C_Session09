#include<stdio.h>
#include<limits.h>

int main(){
    int n = 0, m = 0, a[100][100], number;

    do{
        printf("\n\nMENU\n");
        printf("1.Nhap kich co va gia tri phan tu cua mang\n");
        printf("2.In gia tri cac phan tu mang theo ma tran\n");
        printf("3.In ca phan tu gia tri la le va tinh tong\n");
        printf("4.In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5.In ra cac phan tu nam tren duong treo chinh\n");
        printf("6.In ra cac phan tu nam tren duong treo phu\n");
        printf("7.In ra dong co tong gia tri lon nhat\n");
        printf("8.Thoat\n");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &number);
        int sum = 0;
        long long product;
        int max =INT_MIN;
        switch(number){
            case 1:
                printf("Nhap vao HANG va COT cho mang: ");
                scanf("%d %d", &n, &m);
                while(n <= 0 || m <= 0){
                    printf("Nhap lai: ");
                    scanf("%d %d", &n, &m);
                }
                printf("Nhap gia tri cho mang:\n");
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        scanf("%d", &a[i][j]);
                    }
                }
                break;
            case 2:
                if(n == 0){
                    printf("Mang cua ban khong co gia tri nao");
                }else{
                    printf("Gia tri trong mang cua ban la:\n");
                    for(int i = 0; i < n; i++){
                        for(int j = 0; j < m; j++){
                            printf("%d ", a[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 3:
                printf("Cac gia tri le trong mang tren la:\n");
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        if(a[i][j] % 2 != 0){
                            sum += a[i][j];
                            printf("%d ", a[i][j]);
                        }
                    }
                }
                printf("\nTong cac gia tri trong mang tren la: %d", sum);
                break;
            case 4:
                printf("Cac phan tu nam tren duong bien la:\n");
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        if(i == 0 || j == 0 || j == n - 1 || i == n - 1){
                            product *= a[i][j];
                            printf("%d", a[i][j]);
                        }else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            printf("\nTich ca phan tu nay la: %d", product);
            break;
            case 5:
                if(n != m){
                    printf("mang nay khong co duong cheo chinh");
                }else{
                    for(int i = 0; i < n; i++){
                        for(int j = 0; j < m; j++){
                            if(i == j){
                                printf("%d ", a[i][j]);
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            case 6:
                if(n != m){
                    printf("mang nay khong co duong cheo chinh");
                }else{
                    for(int i = 0; i < n; i++){
                        for(int j = 0; j < m; j++){
                            if(i + j == n - 1){
                                printf("%d ", a[i][j]);
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            case 7:
                for(int i = 0; i < n; i++){
                    sum = 0;
                    for(int j = 0; j < n; j++){
                        sum += a[i][j]; 
                    }
                    if(sum > max){
                        max = sum;
                    }
                }
                printf("Dong co tong cac phan tu lon nhat la: %d", max);
                break;
            case 8:
                break;
            default:
				printf("Gia tri ban nhap khong ton tai trong MENU");
        }

    }while(number != 8);

    return 0;
}