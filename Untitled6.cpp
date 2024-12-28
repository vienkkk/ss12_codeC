#include<stdio.h>
#include<math.h>

int sohoanhao(int n){
	int sum=0; 
	for(int i=1;i<n;i++){
		if(n%i==0){
		sum+=i;			
		} 
	} 
	return sum; 
} 

int main(){
	int n;
	printf("Nhap so hoan hao ");
	scanf("%d",&n); 
	if(sohoanhao(n)==n){
		printf("la so hoan hao") ;
	} else{
		printf("Khong phai la so hoan hao"); 
	} 
	return 0; 
} 
