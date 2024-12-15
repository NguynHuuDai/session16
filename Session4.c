#include<stdio.h>

int main(){
	int n;
	int arr[100];
	int *arrPrt;
	
	
	printf("Vui long nhap kich thuoc mang :");
	scanf("%d", &n );
	
	if(n <= 0 || n > 100 ){
		printf("Kich thuoc mang khong hop le vui long thu lai!");
	}else{
		for(int i = 0; i < n; i++){
			printf("Vui long nhap phan tu thu %d : ", i + 1);
			scanf("%d", &arr[i]);
		}
		arrPrt = arr;
		
		printf("\n\nDanh sach phan tu trong mang la :\n\n");
		
		for(int i = 0; i < n; i++){
			printf("Gia tri cua arr[%d] la : %d\n", i + 1, *(arrPrt + i));
		}
	}
		
	return 0;
}
