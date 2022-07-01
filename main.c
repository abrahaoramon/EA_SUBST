#include<stdio.h>
#include "MinhaBiblioteca.h"

void main()
{
    ContaCorrente conta;
    float valor;

conta = InicializaContaCorrente();

printf("Digite o valor desejado para operacao\n");
scanf("%f", &valor);

ExecutaOperacao(&conta, valor);

ExibirDadosEmTela(conta);

}