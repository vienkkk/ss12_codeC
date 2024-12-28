#include<stdio.h>

int sln(int a[]) {
	int number=a[0];
	for(int i=0; i<5; i++) {
		if(number<a[i]){
			number=a[i]; 
		} 

	}
	return number; 
}

int main() {
	int a[5]={1,2,3,4,5};
	printf("so lon nhat %d",sln(a)); 
	return 0;
}
