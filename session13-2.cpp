#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	printf("Moi ban nhap bat ki ki tu nao : ");
	scanf("%s", &string);
	for(int i=0;i < strlen(string); i++){
		printf("%c ",string[i]);
	}
	return 0;
}
