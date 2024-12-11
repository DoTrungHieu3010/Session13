#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	char check, found;
	printf("Moi ban nhap chuoi: ");
	fgets(string ,50 ,stdin);
	printf("Ky tu ban muon tim: ");
	scanf("%c", &check);
	for(int i = 0 ; i < strlen(string) ; i++){
		if(string[i] == check){
			found++;
		}
	}
	printf("Ki tu ban tim xuat hien %d lan", found);
	return 0;
}
