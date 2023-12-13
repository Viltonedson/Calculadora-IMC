#include <stdio.h>
/*===========================================================================
Nome do Programa: Calculadora de IMC -Índice de Massa Corporal
Data de Criação: [Não lembro]
Autor: [Vilton Edson]Curso: [Análise e Desenvolvimento de Sistemas]
Disciplina: [Coding: Algoritmo e Estrutura de Dados]
Descrição: Este programa calcula o Índice de Massa Corporal (IMC) de um paciente,classifica o resultado e exibe as informações em um 
formato fácil de entender. O IMC é uma medida comum utilizada para avaliar se uma pessoa está acima do peso,com peso saudável ou abaixo do peso.
===========================================================================*/

int calcularIMC(double p, double a){
   double imc = p/(a * a);
   
    printf("Seu IMC é de %.2lf\n", imc);
    
    if(imc < 16){
        printf("Vocé esta com magreza grave");
    }else if(imc >= 16 && imc <= 17 ){
        printf("Vocé esta com magreza moderada");
    }else if(imc >=17 && imc <= 18.5){
        printf("Vocé esta com magreza leve");
    }else if(imc >=18.5 && imc <= 25){
        printf("Vocé esta com o peso ideal e saudavel");
    }else if(imc >= 25 && imc<= 30){
         printf("Vocé esta com sobrepeso");
    }else if(imc >= 30 && imc<= 35){
         printf("Vocé esta com Obesidade Grau I");
    }else if(imc >= 35 && imc<= 40){
         printf("Vocé esta com Obesidade Grau II");
    }else {
        printf("Vocé esta com Obesidade Grau III, VAI PRA ACADEMIA MALHAR MANO," 
                "TA PENSANDO QUE O SHAPE SE CONSTROI SOZINHO EM EM ?????????? VAI MALHAAAAAAAAAR MANOOOOOOO"
                "GORDAAAAAAAAAAAAAAAAAO, PARA DE JOGAR LOL");
    }
    
    printf("\033[31m\n\nClassificação IMC:"
            "\nMagreza Grave: Menos de 16"
            "\nMagreza moderada: 16 - 17"
            "\nMagreza leve: 17 - 18.5"
            "\nPeso ideal: 18.5 - 25"
            "\nSobrepeso: 25 - 30"
            "\nObesidade Grau I: 30 - 35"
            "\nObesidade Grau II: 35 - 40"
            "\nObesidade Grau III: Mais de 40\033[0m");
}

int main(){
    while (1){
    char nome[50];
    double p, a;
    
    printf("\033[32m\033[47m\n\nCALCULADORA DE IMC - INDICE DE MASSA CORPORAL\033[0m");
    do{
        printf("\n\nInforme seu peso em kg: ");
        scanf("%lf",&p);
        if(p <= 0){
            printf("\033[31mPeso inválido, digite um numero maior que 0\033[37m");
        }
    }while(p <= 0);
   do{
        printf("Informe sua altura em metros: ");
        scanf("%lf", &a);
        if(a <= 0){
            printf("\033[31mAltura inválida, digite um numero maior que 0\033[37m\n");
        }
    }while(a <= 0);
    getchar();
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    while ((getchar()) != '\n');
    printf("RELATORIO IMC PARA %s", nome);
    printf("Peso: %.2lf, Altura: %.2lf, Nome: %s\n", p, a, nome);
    calcularIMC(p,a);
}
}

