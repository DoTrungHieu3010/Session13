#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	printf("Nhap chuoi bat ky: ");
	fgets(string,50,stdin);
	printf("CHuoi la: %s", string);
	printf("Do dai chuoi la: %d", strlen(string));
	return 0;
}
