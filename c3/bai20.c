#include<stdio.h>
void nhap(int a[50][50], int *m ,int *n){
    *n=0, *m=0;
    while(*n<=0 && *m <=0){
        printf("nhap m , n duong");
        scanf("%d%d", m ,n);
    }
    int i, j;
    for(i=0; i< *m ;i++){
        for(j=0; j < *n; j++){
            printf("\na[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void chuyenVi(int a[50][50], int b[50][50], int m , int n){
    int i , j;
    for(i=0; i< m;i++){
        for(j=0; j< n ;j++){
            b[i][j]= a[j][i];
        }
    }
}
void hienThi(int a[50][50], int m ,int n){
    int i, j;
    for(i=0; i< m;i++){
        for(j=0; j<n ;j++){
           printf("%5d", a[i][j]); 
        }
    printf("\n");

    }
}
int main(){
    int a[50][50], b[50][50], m ,n;
    nhap(a, &m, &n);
    chuyenVi(a, b, m, n);
    printf("\nhien thi mang a\n");
    hienThi(a, m, n);
    printf("\nvhuyen vi cua a\n");
    hienThi(b, n ,m);

    return 0;
}