#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	int check;
	printf("Moi ban nhap chuoi: ");
	fgets(string, 50 , stdin);
	printf("Chuoi cua ban: ");
	fputs(string , stdout);
	for(int i = 0; i < strlen(string) ; i++){
		if(string[i] == ' '){
			check++;
		}
		if(check == 1){
			check++;
		}
	}
	printf("Chuoi ki tu cua ban gom %d tu ", check);
}
