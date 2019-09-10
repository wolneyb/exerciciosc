#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int x=1,numPI,B,Ano,mat;
	float A,C,n1,n2,n3,med,nota1,nota2,media;
	char nome[50];
	
	while(x!=0){
		printf("Digite um numero de 1 a 9: \n 1 - Primeira opcao \n 2 - Segunda opcao  \n 3 - Terceira opcao \n 4 - Quarta opcao \n 5 - Quinta opcao \n 6 - Sexta opcao \n 7 - Setima opcao \n 8 - Oitava opcao \n 9 - Nona opcao \n 0 - Sair \n");
		scanf("%d",&x);
		if(x>0&&x<=9){
		switch(x){
			case 1: 
				printf("Opcao 1 selecionada. Insira um numero: ");
				scanf("%d",&numPI);
				if(numPI%2==0){
					printf("O numero e par. \n");
				}
				else printf("O numero e impar. \n");	
				break;
			case 2:
				printf("Opcao 2 selecionada. Insira um numero: ");
				scanf("%f",&A);
				printf("Insira outro numero: ");
				scanf("%d",&B);
				C=pow(A,1.0/B);
				printf("Valor: %f. \n",C);				
				break;
			case 3:
				printf("Opcao 3 selecionada. Insira um numero: ");
				scanf("%f",&A);
				printf("Insira outro numero: ");
				scanf("%d",&B);
				C=sqrt(A)/B;
				printf("Valor: %f. \n",C);
				break;
			case 4: 
				printf("Opcao 4 selecionada. Insira um ano valido: ");
				scanf("%d",&Ano);
				if(Ano%4==0){
					printf("Ano bissexto. \n");
				}
				else printf("Ano nao bissexto. \n");
				break;
			case 5:
				printf("Opcao 5 selecionada. Insira uma a primeira nota: \n");
				scanf("%f",&n1);
				printf("Insira a segunda nota: \n");
				scanf("%f",&n2);
				printf("Insira a terceira nota: \n");
				scanf("%f",&n3);
				med=(n1+n2+(n3*2))/4;
				printf("Media final: %f \n ",med);
				break;
			case 6:
				printf("Opcao 6 selecionada. Insira a primeira nota: \n");
				scanf("%f",&nota1);
				printf("Insira a segunda nota: \n");
				scanf("%f",&nota2);
				if(nota1>=0&&nota1<=10){
					if(nota2>=0&&nota2<=10){					
					media=(nota1+nota2)/2;
					printf("Media da nota: %f \n",media);
					}
				}
				else printf("Nota invalida. \n");
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				printf("Opcao 9 selecionada. Insira sem nome: \n");
				scanf("%s \n",nome);
				
				printf("Agora digite sua matricula: \n");
				scanf("%d",&mat);
				printf("Seu nome: %s. Sua matricula: %x.\n",nome,mat);
				break;						
		}
		}
		else  printf("Numero: %d (invalido) \n",x);
	}
	printf(" Tchau! ");
	getchar();
	
}
