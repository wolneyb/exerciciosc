#include<stdio.h>
int main(){
	char x[10];
	int z,y=0;
	scanf("%[^\n]s", x);
	for(;x[z]!='\0';z++){
		if(x[z]=='a'||x[z]=='e'||x[z]=='i'||x[z]=='o'||x[z]=='u'||x[z]=='A'||x[z]=='E'||x[z]=='I'||x[z]=='O'||x[z]=='U')
		y++;
		}
	printf("Numero de vogais: %d",y);	
	}

