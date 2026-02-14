#include <stdio.h>
int main (){


//DECLARAÇÃO DAS VARIÁVEIS CARTA 1
char Estado1 [30];
char codigocarta1 [15];
char nomeCidade1 [30];
int populacao1 ;
float area1 ;
float pib1;
int pontosTuristicos1 ;
float DensidadePopulacional1 ;
float PibperCapita1;
float superpoderA;

//DECLARAÇÃO DAS VARIÁVEIS CARTA 2
char Estado2 [30];
char codigocarta2 [15];
char nomeCidade2 [30];
int populacao2 ;
float area2 ;
float pib2;
int pontosTuristicos2 ;
float DensidadePopulacional2 ;
float PibperCapita2 ;
float superpoderB;


//INSTRUÇÕES INICIAIS
printf("****CADASTRO DAS CARTAS JOGO SUPER TRUNFO****\n");

//INICIO DA LEITURA DOS DADOS DA CARTA 1
printf("Cadastro Carta 1 :\n");

printf("Estado: " );
scanf("%s", &Estado1);

printf("Código da Carta: " );
scanf("%s", &codigocarta1);

printf("Nome da cidade: " );
scanf("%s", &nomeCidade1); 

printf("População: " );
scanf("%d", &populacao1);

printf("Área em Km²: " );
scanf("%f", &area1);

printf("PiB: " );
scanf("%f", &pib1);

printf("Número de pontos Turísticos: " );
scanf("%d", &pontosTuristicos1);

DensidadePopulacional1 = populacao1 / area1;
PibperCapita1 = pib1 / populacao1;
superpoderA = populacao1+area1+pib1+pontosTuristicos1+PibperCapita1+(1/DensidadePopulacional1);




printf("*************************************************\n");

//INICIO DA LEITURA DOS DADOS DA CARTA 2
printf("Cadastro Carta 2 : \n");

printf("Estado: ", Estado2);
scanf("%s", &Estado2);

printf("Código da Carta: ", codigocarta2);
scanf("%s", &codigocarta2);

printf("Nome da cidade: ", nomeCidade2);
scanf("%s", &nomeCidade2); 

printf("População: " , populacao2);
scanf("%d", &populacao2);

printf("Área em Km²: " , area2);
scanf("%f", &area2);

printf("PIB: ", pib2);
scanf("%f", &pib2);

printf("Número de pontos Turísticos: " ,pontosTuristicos2);
scanf("%d", &pontosTuristicos2);

DensidadePopulacional2 = populacao2 / area2;
PibperCapita2 = pib2 / populacao2;
superpoderB = populacao2+area2+pib2+pontosTuristicos2+PibperCapita2+(1/DensidadePopulacional2);


printf("\n");

printf("*********CARTAS CADASTRADAS**********\n");

//DADOS CARTA 1
printf("Carta 1 : \n");
printf("Estado : %s\n", Estado1);
printf("Código : %s\n", codigocarta1);
printf("Nome da Cidade : %s\n", nomeCidade1);
printf("População : %d\n", populacao1);
printf("ÁREA : %2.f  km²\n", area1);
printf("PIB : %.2f   Reais\n", pib1);
printf("Número de Pontos Turísticos : %d\n", pontosTuristicos1);
printf("Densidade Poupulacioonal: %.3f  habitantes/km²\n", DensidadePopulacional1);
printf("Pib per Capita: %.2f  Reais\n", PibperCapita1);
printf("Super Poder : %.2f  \n" ,superpoderA);

printf("\n");

//DADOS CARTA 2
printf("Carta 2 : \n");
printf("Estado : %s\n", Estado2);
printf("Código : %s\n", codigocarta2);
printf("Nome da Cidade : %s\n", nomeCidade2);
printf("População : %d\n", populacao2);
printf("ÁREA : %2.f  Km²\n", area2);
printf("PIB : %2.f  Reais\n", pib2);
printf("Número de Pontos Turísticos : %d\n", pontosTuristicos2);
printf("Densidade Populacional: %3.f  habitante/Km² \n", DensidadePopulacional2);
printf("Pib per Capita: %2f  Reais\n", PibperCapita2);
printf("Super Poder : %.2f  \n" ,superpoderB);

printf("\n");

//COMPARAÇÃO DE CARTAS
// comparação de dois atributos numericos diferentes 
// Inicio do jogo

//declaração das variaveis para comparação
int resultado1,resultado2 , resultado3 , resultado4 ;
char primeiroAtributocarta1 , segundoAtributocarta1;
char primeiroAtributocarta2 ,segundoAtributocarta2 ;



printf("vamos começar a comparação das cartas!\n");
// lógica da CARTA 1
//SELECIONANDO OS DOIS ATRIBUTOS CARTA 1
printf("Escolha o primeiro atributo da carta 1.\n");
printf("P - População\n");
printf("A - Área\n");
printf("I - PIB\n");
printf("N - Número de Pontos Turísticos\n");
printf("D - Densidade Populacional\n");
printf("C - Pib per Capita\n");
printf("S - Super Poder\n");

printf("Digite a letra do primeiro atributo da CARTA 1: ");
scanf(" %c", &primeiroAtributocarta1);

switch(primeiroAtributocarta1)
{
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n"); 
        resultado1 = populacao1 ; 
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado1 = area1 ;
        break;
    case 'I':
    case 'i':   
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 ;
        break;
    case 'N':
    case 'n':   
        printf("Você escolheu a opção Número de Pontos Turísticos!\n");
        resultado1 = pontosTuristicos1 ;  
        break;
    case 'D':
    case 'd':   
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado1 = DensidadePopulacional1 ;
        break;
    case 'C':
    case'c':
        printf("Você escolheu a opção Pib per Capita!\n");
        resultado1 = PibperCapita1 ;
        break;
    case 'S':
    case 's':
        printf("Você escolheu a opção Super Poder!\n");
        resultado1 = superpoderA  ;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}


printf("Digite a letra do segundo atributo da CARTA 1: ");
scanf(" %c", &segundoAtributocarta1);
if(segundoAtributocarta1 == primeiroAtributocarta1){
    printf("Atributo escolhido igual ao primeiro! Escolha um atributo diferente.\n");
    return 1;
}else
{
switch(segundoAtributocarta1)
{
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n"); 
        resultado2 = populacao1 ; 
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado2 = area1 ;
        break;
    case 'I':
    case 'i':   
        printf("Você escolheu a opção PIB!\n");
        resultado2 = pib1 ;
        break;
    case 'N':
    case 'n':   
        printf("Você escolheu a opção Número de Pontos Turísticos!\n");
        resultado2 = pontosTuristicos1 ;
        break;
    case 'D':
    case 'd':   
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado2 = DensidadePopulacional1 ;
        break;
    case 'C':
    case'c':
        printf("Você escolheu a opção Pib per Capita!\n");
        resultado2 = PibperCapita1 ;
        break;
    case 'S':
    case 's':
        printf("Você escolheu a opção Super Poder!\n");
        resultado2 = superpoderA  ;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}
}


//SELECIONANDO OS DOIS ATRIBUTOS CARTA 2

printf("Escolha o primeiro atributo da CARTA 2.\n");
printf("P - População\n");
printf("A - Área\n");
printf("I - PIB\n");
printf("N - Número de Pontos Turísticos\n");
printf("D - Densidade Populacional\n");
printf("C - Pib per Capita\n");
printf("S - Super Poder\n");

printf("Digite a letra do primeiro atributo da CARTA 2: ");
scanf(" %c", &primeiroAtributocarta2);

switch(primeiroAtributocarta2)
{
    case 'P':
    case 'p':
       printf("Você escolheu a opção População!\n"); 
       resultado3 = populacao2  ;
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado3 = area2  ;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção PIB!\n");
        resultado3 = pib2  ;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Número de Pontos Turísticos!\n");
        resultado3 = pontosTuristicos2  ;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado3 = DensidadePopulacional2 ;
        break;
    case 'C':
    case'c':
        printf("Você escolheu a opção Pib per Capita!\n");
        resultado3 = PibperCapita2  ;
        break;
    case 'S':
    case 's':
        printf("Você escolheu a opção Super Poder!\n");
        resultado3 = superpoderB ;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}


printf("Digite a letra do segundo atributo da CARTA 2: ");
scanf(" %c", &segundoAtributocarta2);
if(segundoAtributocarta2 == primeiroAtributocarta2)
{
    printf("Atributo escolhido igual ao primeiro! Escolha um atributo diferente.\n");
    return 1;
}else{

switch(segundoAtributocarta2)
{
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n"); 
        resultado4 = populacao2 ; 
        break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado4 = area2 ;
        break;
    case 'I':
    case 'i':   
        printf("Você escolheu a opção PIB!\n");
        resultado4 = pib2 ;
        break;
    case 'N':
    case 'n':   
        printf("Você escolheu a opção Número de Pontos Turísticos!\n");
        resultado4 = pontosTuristicos2 ;
        break;
    case 'D':
    case 'd':   
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado4 = DensidadePopulacional2 ;
        break;
    case 'C':
    case'c':
        printf("Você escolheu a opção Pib per Capita!\n");
        resultado4 = PibperCapita2 ;
        break;
    case 'S':
    case 's':
        printf("Você escolheu a opção Super Poder!\n");
        resultado4 = superpoderB  ;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}
}


printf("\n");
printf("*********RESULTADO DA COMPARAÇÃO DAS CARTAS**********\n");
printf("Estado carta 1: %s\n", Estado1);
printf("Valor primeiro atributo carta 1: %d\n" , resultado1);
printf("Valor segundo atributo carta 1: %d\n",  resultado2);
printf("Estado carta 2: %s\n", Estado2);
printf("Valor primeiro atributo carta 2: %d\n" , resultado3);
printf("Valor segundo atributo carta 2: %d\n",  resultado4);
printf("valor soma atributos carta 1: %d\n", resultado1 + resultado2);
printf("valor soma atributos carta 2: %d\n", resultado3 + resultado4);

if((resultado1 + resultado2) > (resultado3 + resultado4))
{
    printf("Carta 1 é a vencedora!\n");
}
else if((resultado1 + resultado2) < (resultado3 + resultado4))
{
    printf("Carta 2 é a vencedora!\n");
}
else
{
    printf("Empate!\n");
}








return 0;
}
