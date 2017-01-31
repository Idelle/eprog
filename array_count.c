#include<stdio.h>
int main(){
	int i, number[5], count=0;
	for(i=0; i<5; i++){
		printf("Number %d:", i+1);
		scanf("%d", &number[i]);
		}
			for(i=0; i<5; i++){
			if(number[i] == 1)
			count++;
			}
				printf("Zeroes: %d\n", 5-count);
				printf("Ones: %d", count);
	
}
