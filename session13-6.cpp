#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	int number= 0;
	int all;
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(string, 50, stdin);
	for(int i = 0 ; i < strlen(string) ; i++){
		for(int j=0 ; j <= 9 ; j++){
			if(string[i] == j){
				number++;
			}
		}
	}
	all = strlen(string) - 2 - number ;
	printf("So luong la chu cai trong chuoi la %d", all);
	return 0;
}
