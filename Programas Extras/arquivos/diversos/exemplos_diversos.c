/*A seguir é apresentado um programa onde várias operaçõeses com arquivos são realizadas, usando as funções vistas nesta aula.
Primeiro o arquivo é aberto para a escrita, e imprime-se algo nele.
Em seguida, o arquivo é fechado e novamente aberto para a leitura. Verifique o exemplo.
*/

#include <stdio.h>
#include <string.h>

void main()
{
	FILE *p;
	char c, str[30], frase[80] = "Este e um arquivo chamado: ";
	int i;
	/* Le um nome para o arquivo a ser aberto: */
	printf("\n\n Entre com um nome para o arquivo: ");
	gets(str);

	if (!(p = fopen(str,"w")))  /* Caso ocorra algum erro na abertura do arquivo..*/ 
  	{                           /* o programa aborta automaticamente */
  	  printf("Erro! Impossivel abrir o arquivo!\n");
  	  exit(1);
  	}

	/* Se nao houve erro, imprime no arquivo e o fecha ...*/
	strcat(frase, str);
	for (i=0; frase[i]; i++)
	  putc(frase[i],p);
	fclose(p);

	/* Abre novamente para  leitura  */
	p = fopen(str,"r");
	while (!feof(p))	/* Enquanto não se chegar no final do arquivo */
 	{
  		c = getc(p);	/* Le um caracter no arquivo */
  		printf("%c",c); /*   e o imprime na tela */
  	}
      printf("\n");
	fclose(p);		/* Fecha o arquivo */
}