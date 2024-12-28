#include<stdio.h>
#include<math.h>

int sum(int a,int b){
	int tong=a+b;
	return tong; 
} 

int main() {
	int a,b;
	printf("Nhap so a ");
	scanf("%d",&a);
	printf("\nNhap so b ");
	scanf("%d",&b);  
	printf("\nTong bang %d",sum(a,b)); 
	return 0;
}
