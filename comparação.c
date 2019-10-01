#include <stdio.h>

int main(){
	char texto[256], texto2[256];
	int x=0, y=0;
	scanf("%[^\n]s",texto);
	getchar();
	scanf("%[^\n]s",texto2);
	while(texto[x] != '\0' && texto2[x] != '\0'){
		if(texto[x] != texto2[x]){
			y = 1;
			break;
		}
		x++;
	}	
	if(y == 0 && texto[x] == '\0' && texto2[x] == '\0')
		printf("\n Iguais");
	else 
		printf("\n Diferentes");	
	return 0;
}
