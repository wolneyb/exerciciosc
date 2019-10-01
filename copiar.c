#include <stdio.h>

int main(){
	char text[256], text2[256];
	int x=0;	
	scanf("%[^\n]s",text);
	while(text[x] != '\0'){
		text2[x] = text[x];
		x++;
	}
	text2[x] = '\0';
	printf("%s", text2);
	return 0;
}
