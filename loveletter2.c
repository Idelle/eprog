#include <stdio.h>
#include<string.h>
int main(){
FILE *myFile

char ch;
FILE *fp;
fp=fopen("input.txt","r");
while(!feof(fp))
{
ch=getc(fp);
printf("%d",ch);
	}
}	
