#include<stdio.h>
int main(){
	int i, j, num, k;
		printf("Input num:");
		scanf("%d", &num);
			for(j=0; j<num; j++){
				for(i=j; i<num; i++){
					printf("*");
				}
			printf("\n");
		}
	}
