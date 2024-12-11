#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	printf("Mhap chuoi bat ky : ");
	scanf("%s", &string);
	printf("Dao chuoi ky tu : ");
	for(int i = strlen(string) ; i >= 0 ; i--){
		printf("%c", string[i]);
	}
	return 0;
}
