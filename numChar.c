#include<stdio.h>
int main(){
		int numeroCaracteres = 0;
       	char caractere = getchar();
       	while (caractere != '\n'){
           numeroCaracteres = numeroCaracteres + 1;
           caractere = getchar();
       }
       printf("Quantidade de caracteres: %d\n", numeroCaracteres);
       
	   return 0;
  }
