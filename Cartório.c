#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //bliblioteca respons�vel por cuidar das string

int registro() //fun��o respons�vel por cadastrar os usu�rios no sistema
  {
  	//inicio da cria��o de vari�veis/string
  	char arquivo [40];
	char cpf[40];     // colchetes significa string
	char nome [40];
	char sobrenome[40];
	char cargo[40];
	//Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: ");  //Coletando informa��es do usu�rio
	scanf("%s", cpf);  //%s refere-se a string para salvar
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	
	FILE *file;     //Criando arquivos
	file = fopen(arquivo, "w");   //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);      //manda salvar
	fclose(file);    //fecha o arquivo
	
	file = fopen(arquivo, "a");   //Acessa o arquivo existente e atualiza
	fprintf(file,",");   
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");   //Acessa o arquivo existente e atualiza
	fprintf(file,",");   
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");   //Acessa o arquivo existente e atualiza
	fprintf(file,",");   
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
  }

int consulta()
  {
  	setlocale(LC_ALL, "Portuguese");
  	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");   //ler o arquivo
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)     
	{
		printf("\nEssas s�o as informa��es fo usu�rio: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
	
	
  }

int deletar()
  {
   char cpf[40];
   
   printf("Digite o CPF do usu�rio a ser deletado: ");
   scanf("%s", cpf);
   
   remove(cpf);       //apaga o cpf
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
    printf("Usu�rio deletado com sucesso!.\n");
   	printf("O usu�rio n�o se encontra no sistema!.\n");
   	system("pause");
   }
   
  }



int main ()       //int = fun��o
{
    int opcao=0;    //Definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)     //O for � "enquanto"
  {
	
	system("cls");
	
	
	
	setlocale(LC_ALL, "Portuguese");     //Definindo a linguagem
	
	printf ("### Cart�rio da EBAC ### \n\n"); //as # s�o cosm�ticas    //Inicio do menu
	printf ("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n"); // \t deixa um espa�o antes de come�ar o texto escrito
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");        
    printf("Op��o:");      //Fim do menu
    
	scanf("%d", &opcao);            //Armazenando a escolha do usu�rio
    
    system("cls");    //Limpa a tela
    
    switch(opcao)     //igual ao if
    {
    case 1:         //se for o caso 1
	registro();    // chama a vari�vel registro
	break;         //acaba a linha 
	
	case 2:
	consulta();
    break;
    
    case 3:
    deletar();
	break;
	
	default:
    printf("Essa op��o n�o est� disponivel\n");      //Fim da sele��o
	system("pause");
	break;
	}    //fim da sele��o
   

  }

}












	
    		
	












