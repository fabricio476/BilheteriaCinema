#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#define N 50 

struct bilhete{ // todos os daodos digitados na opção (bilheteria ) são armazenados aqui
	
	char name[40],sessao[20],preco[40],pagamento[10];
	int bilhetes;
};


struct cadastro { //todos os dados da função cadastrar cliente não guardados aqui, e as função de printar os clientes usam esses dados

 char nome[40],data[40],rua[40],numero[40],bairro[40],cep[30],telefone[15];
 
};


int buscar_cliente(int v[],int n){ // essa função retorna a ""posição"" do "vetor" que o 'codigo do cliente' digotado esta amazenado
	
	int i,cod,x;
	
	printf("informe o codigo do cliente: ");
	scanf("%d",&cod); // recebe o codigo do cliente
	for(i=0;i<=n;i++){
		
		if(cod==v[i]){ // se o codigo digitado encontar o mesmo valor no vetor então
			
			
			x= i; // x recebe a posição do vetor
		}
	}
		
	return x; // a função retorna o valor de x que é a posição do vetor onde o codigo esta guardado, 
	};


int pausar_tela(void){ // onde essa função estiver ela vai printar para a tela até que voce aperte a opção 1
	
	    int ok;
      	printf("....Tecle ( 1 )  para continuar....\n\n");
        scanf("%d",&ok);
        
return ok; //retorna a opçpão 1       
}

void excluir ( struct cadastro *c, int n,int *cliente,int *va){ /// função esclui tudo o que estiver na struct do cliente
  	                                                           //essa função recebe o valor de {função buscar client} que foi armazenada na variavel cliente
  	int i;
  	
  	for(i=1; i <n; i++) {
  	
  	if(*cliente == i){
  		
  	c[i] = c[i-i]; // esclui a struct que esta na "posição" do codigo do cliente digitados
  	
	va[i] = 000; //zera o codigo do cliente que foi digitado	
	  			
}
  
 }
  	
  };


void listar_clientes(int v[],int n,struct cadastro *c){ // está na opção 2 / lista todos os cliente que foram cadastrados e não foram excluidos
	
	int i;
	
for(i=1;i<=n;i++){
	
	if (v[i] !=0  && v[i] < 200) { // se o codigo digitado for fiferente de zero ele printa na tela
	    
	
	    
	    printf("codigo: %d\n",v[i]);
	    printf("Nome: %s \n", c[i].nome);
		printf("Idade: %s \n", c[i].data);
		printf("Rua: %s \n", c[i].rua);
		printf("Numero(rua): %s \n", c[i].numero);
		printf("Bairro: %s \n", c[i].bairro);
		printf("Cep: %s \n", c[i].cep);
		printf("Telefone: %s \n", c[i].telefone);
		printf("----------------------------------\n\n");
     }	
	
}
}


void dados_cliente(int *v, int n,struct cadastro *c,int *cli,struct bilhete *b){ //função que printa apenas o codigo do cliente que foi digitado na opçao 4
	             //essa função recebe o valor de {função buscar client} que foi armazenada no ponteiro *cli
	
      	int cliente; // variavel que vai receber o valor do ponteiro
      	
      	cliente = *cli; // ( cli ) é um 'ponteiro' que armazena o valor da variavel "cliente" que esta fora da função 
	                                                //  o ponteiro "*cli" esta recbendo o valor da {função buscar_cliente } e atribuindo ao cliente que esta dentro da função
		
	
	
         if(v[cliente] != 0 ) // v[cliente} é um vetor com a posição [cliente] que é a posição do codigo do cliente que foi digitado/ se o codigo digitado for diferente que zero ele preinta na tela os dados
         
     	{    	
        printf("----------------------------------\n");
        printf("codigo: %d\n",v[cliente]);
	    printf("Nome: %s \n", c[cliente].nome);
		printf("Idade: %s \n", c[cliente].data);
		printf("Rua: %s \n", c[cliente].rua);
		printf("Numero (rua): %s\n ", c[cliente].numero);
		printf("Bairro: %s \n", c[cliente].bairro);
		printf("Cep: %s \n", c[cliente].cep);
		printf("Telefone: %s \n", c[cliente].telefone);
		printf("----------------------------------\n");	
		printf("Nome do filme: %s \n", b[cliente].name);
		printf("Horario: %s \n", b[cliente].sessao);
		printf("Quantidade de bilhetes: %i \n", b[cliente].bilhetes);
		printf("inteira/meia: %s \n", b[cliente].pagamento);
		
        		
		}
		else
		{
			
		printf("...codigo não existe ...\n");	// de codigo for inalido ou tiver sido excluido
		}	

		
};


void cadastro_novo(int *t,int n,struct cadastro *c,int *a){ //função que cadastra novo cliente esta localizada na opção 1,  
	
	int i,G; // variavel G so recebe os valores e guarda para que a função "for" não reinicie depois que voce cadastrar o primeiro cliente 
	

	i = *a; // i esta recebendo o valor de *a que esta apontado para a variavel i que esta fora da função

	
	
	for(G=t[G];i<=n;G++){ //  t vetor para guardar a posição do cadastro, para que quando retorne ele continua da posição onde parou
	 
   

 fflush(stdin); 
 printf("nome: ");
 gets(c[i].nome); 


 printf("data de nacimento: ");
 gets(c[i].data);
 fflush(stdin);
 
 printf("nome da rua: ");
 gets(c[i].rua);
 fflush(stdin);

 printf("numero da rua: ");
 gets(c[i].numero);
 fflush(stdin);

 printf("bairro: ");
 gets(c[i].bairro);
 fflush(stdin);

 printf("cep: ");
 gets(c[i].cep);
 fflush(stdin);

 printf("telefone: ");
 gets(c[i].telefone);
 fflush(stdin);
 
 printf("_________________________________________________________________________________________________\n\n");


  break; // quando o primeiro cliente for cadstrado o break interrompe o laço, mas a variavel G guarda acrecenta +1 e guarda a posição que o laço parou.
  
   
}	
	
	
}

void bilheteria (int x,struct bilhete *b,int n,int cliente){ //função fara o cliente escolher o filme, a struct bilhete esta como argumento para poder passar os dados para ela



int ig,Op, Ops=0, FP;
char b2;


printf("\t===============================================\n");

printf("\t========== BILHETERIA ==========\n");

printf("\t===============================================\n\n");

printf("\t - ESCOLHA UMA DAS OPCOES: - \n");

printf("\t-----------------------------------------------\n");

printf("\t| FILMES EM CARTAZ |\n\n");

printf("\t| [1] Ano Novo, Vida Nova! |\n");

printf("\t| [2] Sem Tempo |\n");

printf("\t| [3] Melancolia |\n");

printf("\t----------------------------------------------\n");

printf("Somente 20 lugares disponives \n");

printf("Zero para sair:\n\n ");

printf("digite a ( OPÇÃO ) do filme: "); 
scanf("%i",&Op); // recebe a opção do filme


//estrutura para escolher a opção do filme e quardar na struct do bilhete do codigo do cliente



switch (Op){ // selecionar a opção do filme



default:

printf("Opcao invalida.\n");

 x = 1;
break;




//CASE 1 ===========================================================

case 1:

printf("\t--------------------------------------\n");

strcpy (b[cliente].name,"Ano Novo, Vida Nova!");  // se opção for 1 o nome do filme vai para a struct nome/ "stcpy " - serve para atribuir um valor char a outra variavel

printf("\t Cine 1: A Ano Novo, Vida Nova!\n");

printf("\t Sessao [1]: 13:30 \n");

printf("\t Sessao [2]: 15:30 \n");

printf("\t Sessao [3]: 17:30 \n");

printf("\tComprar bilhete para qual sessao ? \n\n");

printf("\t--------------------------------------\n");


printf("digite a ( OPÇÃO ) da seção: ");

scanf("%i",&Ops);

if(Ops == 1){
	
strcpy (b[cliente].sessao,"13:30");	// atribuir o orario a struct sessão 
		

printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig; // atibir um valor da variavel "ig" do tipo "inteiro" para a variavel struct bilhtes

if (ig<=20) {

printf("\t----------------%s-----------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");
scanf("%i",&FP);


printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");  /// atribuir um valor "char" para a variavel inteira da struct pagamento

}

else if (FP==2){

printf("\tForma de Pagamento :: MEIA ");
strcpy (b[cliente].pagamento,"MEIA");   /// atribuir um valor "char" para a variavel inteira da struct pagamento

}

printf("\tSessao escolhida 1: 13:30\n\n");

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tDivirta-se. Um bom filme pra voce.\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if(Ops==2){

strcpy (b[cliente].sessao,"15:30");	
printf("DIGITE A QUANTIDADE DE BILHETES:  ");

scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");
scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tSessao escolhida 2: 15:30\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if (Ops==3) {
strcpy (b[cliente].sessao,"17:30");	

printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");

printf("Digite a ( A FORMA DE PAGAMENTO ) : ");
scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP == 1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

if (FP == 2) {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tSessao escolhida 3: 17:30\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

}

break;


//----------------------------------------------------------------------------case 2===============================================================================================



case 2:

printf("\t--------------------------------------\n");
strcpy (b[cliente].name,"Sem Tempo");

printf("\t Sem Tempo \n");

printf("\t Sessao 1: 13:45 \n");

printf("\t Sessao 2: 16:15 \n");

printf("\t Sessao 3: 18:45 \n");

printf("\tComprar bilhete para qual sessao ? \n\n");

printf("\t--------------------------------------\n");



printf("digite a ( OPÇÃO ) da seção:");
scanf("%i",&Ops);


if (Ops==1) {

strcpy (b[cliente].sessao,"13:30");	
printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");


printf("Digite a ( A FORMA DE PAGAMENTO ) : ");
scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso.\n");

printf("\tSessao escolhida 1: 13:45\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if (Ops==2){

strcpy (b[cliente].sessao,"15:30");	
printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");

printf("Digite a ( A FORMA DE PAGAMENTO ) : ");
scanf("%i",&FP);

if(FP == 1){
	
strcpy (b[cliente].pagamento,"INTEIRA");	
		
}
else if(FP == 2){
	
strcpy (b[cliente].pagamento,"MEIA");	
		
}

printf("\t---------------------------------------\n");

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tSessao escolhida 2: 16:15\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if (Ops==3){

strcpy (b[cliente].sessao,"17:30");
printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");

scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");


printf("Digite a ( A FORMA DE PAGAMENTO ) : ");


scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tSessao escolhida 3: 18:45\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

break;



//----------------------------------------------------------------case 3------------------------------------------------------------------------------------

case 3:

printf("\t-----------------------------------------------\n");
strcpy (b[cliente].name,"Melancolia");	

printf("\t Cine 3: Melancolia \n");

printf("\t Sessao 1: 13:30 \n");

printf("\t Sessao 2: 15:30 \n");

printf("\t Sessao 3: 17:30 \n");

printf("\tComprar bilhete para qual sessao ? \n\n");

printf("\t-----------------------------------------------\n");


printf("digite a ( OPÇÃO ) da seção: ");

scanf("%i",&Ops);

if (Ops==1) {

strcpy (b[cliente].sessao,"13:30");
printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");

printf("Tecle a ( OPÇÃO ) do pagamneto: ");

scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso.\n");

printf("\tSessao escolhida 1: 13:30\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if (Ops==2){

strcpy (b[cliente].sessao,"15:30");
printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");

printf("Tecle a ( OPÇÃO ) do pagamneto: ");

scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso. \n");

printf("\tSessao escolhida 2: 15:30\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

if (Ops==3){
strcpy (b[cliente].sessao,"17:30");	

printf("Digite a ( 	QUANTIDADE ) de bilhetes: ");
scanf("%i",&ig);

b[cliente].bilhetes = ig;

if (ig<=20) {

printf("\t---------------------------------------\n");

printf("\t FORMAS DE PAGAMENTO : : : \n\n");

printf("\t [1]Inteira: 8,00 R$ \n");

printf("\t [2]Meia: 4,00 R$ \n");


printf("Digite a ( A FORMA DE PAGAMENTO ) : ");

scanf("%i",&FP);

printf("\t---------------------------------------\n");

if (FP==1) {

printf("\tForma de Pagamento :: INTEIRA \n\n");
strcpy (b[cliente].pagamento,"INTEIRA");

}

else {

printf("\tForma de Pagamento :: MEIA \n\n");
strcpy (b[cliente].pagamento,"MEIA");

}

printf("\tSeu bilhete foi adiquirido com sucesso.\n");

printf("\tSessao escolhida 3: 17:30\n");

printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

}

else {

printf("\tNao há mais bilhetes\n ");

}

}

break;

case 0:
	
	x = 0;
	break;

}

}





void ordenar_cod(int *v, int n) //função de ordenação bubblesort para ordenar vetores
{
int i, continua, aux, fim=n;
do
{
continua=0;
for(i=0; i<fim-1; i++)
	{
		if(v[i]>v[i+1])
	{
	aux = v[i];
	v[i]=v[i + 1];
	v[i +1 ] = aux;
	continua = i;
     }
}
fim --;
}
while(continua!=0);

}
    




// toda variavel atribuida nas função a cima, em forma de ponteiro ou não/ equivale a uma das variaveis que estão em baixo, 


int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
static	struct bilhete b[N];
struct cadastro c[N];
//struct cadastro c[1] = "FABRICIO","03/11/1992","NOSSA SENHORA DA CONCEIÇÃO","672","SANTA TEREZINHA","8001010","41-999011937";

static	int i=1,opcao,op,sair,ok,x,cliente,ops,VA[N],T[N]; //VA[N] = armazena os codigos dos clientes/T[N] = serve para quardar travar o comando for
	                                                       // "cliente" = guarda o endereço da memoria dos clientes cadastrados
	
	
	do{
		
		system("cls");
		
printf("           tela  inicial -              \n");
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");                               
printf("            1) - Cadastrar um Novo      x\n");
printf("            2) - listar clientes        x\n");
printf("            3) - excluir cliente        x\n");
printf("            4) - Dados do cliente       x\n");
printf("            5) - bilheteria             x\n");
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

printf("( 6 ) - para sair \n");


scanf("%d",&opcao);
		
		
switch(opcao){


case 1: // cadastar cliente

  
            printf("voce escolheu a opção: %d\n\n",opcao);


            cadastro_novo(T,N,c,&i);  //função que  cadastra os clientes// T= T[], N = 50, c = struct cadastro, &i = i

             VA[i] = i + 100; // gera o codigo do cliente
             
             printf("....condastro concluido....\n\n");
             printf("....cliente: %d....\n\n",VA[i]); 
 
             pausar_tela(); //pausa a tela

             i = i+1;  // guarda os locais dos clientes no cadastro



break;




case 2: // listar clientes

       printf("voce escolheu a opção: %d\n\n",opcao);

         
        
        	
        listar_clientes(VA,N,c); //função que  lista todos os clientes = VA = VA[],N=50,c = satruct cadastro

		
		pausar_tela(); // função que pede para teclar ( 1 )
        
        
       

break;




case 3:	//excluir clientes
		
       printf("voce escolheu a opção: %d\n\n",opcao);

                                                                                                                   //VA[] = codigos
        cliente = buscar_cliente(VA,N); //função que  buscar a posição do codigo do cliente e passa para variavel "cliente" = 1 posição


        printf("----------------------------------\n");
        printf("cliente codigo: %d excluido \n",VA[cliente]); // variavel com a posição do [clientes]
        
        
        excluir(c,N,&cliente,VA);   // função que esclui o codigo , &cliente esta ligado a um ponteiro na função
        
		
		printf("----------------%s------------------\n",c[cliente].nome);


        pausar_tela(); // função pede para teclar 1 para poder parar a tela ,antes de ir para a opção break;


 
		
break;







         case 4:	// dados do cliente
		
         printf("voce escolheu a opção: %d\n\n",opcao);


         cliente = buscar_cliente(VA,N);  //função de busca o cliente .retorna a posição da codigo digitado e passa para a variavel cliente
         
         

         dados_cliente(VA,N,c,&cliente,b); // função que printa os dados de apenas um cliente na tela do cliente na tela
                                           // essa função recebe o valor esnviado da função buscar_cliente / variavel "cliente" como argumento
                                        
         pausar_tela();  //pausa a tela
		
break;




case 5:	 //  bolheteria
		
printf("voce escolheu a opção: %d\n\n",opcao);

cliente = buscar_cliente(VA,N); // sempre que queser buscar um cliente use essa função ela retorna o local do vetor (VA[]) onde codigo digitado esta alocado

bilheteria(x,b,N,cliente); // função bilheteria  = recebe o valor da função buscar cliente 



pausar_tela();	//pausa
	
	
	
	



		
break;




case 6:	// sair
		
printf("voce escolheu a opção: %d\n\n",opcao);

sair = 9; 
		
break;		
		




}


		
		
	}while(sair != 9);
	
return 0;	
}




//-------------------------------------------------oooooooooooooooooooooooooooooo------------------------------------------------------------




