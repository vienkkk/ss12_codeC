#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int  random() {
	return rand()/10;
}
int main() {
	int sum=1;
	int number=random();
	for (int i = 1; i <= number; i++) {
		sum *= i;
	}
	printf("Gia thua cua %d la %d",number,sum);
	return 0;
}
