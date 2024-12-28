#include<stdio.h>

int xuatmang(int n,int a[]) {
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}

int main() {
	int n;
	printf("Nhap so phan tu \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++) {
		printf("vi tri %d \n",i);
		scanf("%d",&a[i]);
	}
	xuatmang(n,a);
	return 0;
}
