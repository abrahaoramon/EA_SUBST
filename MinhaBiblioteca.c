#include<stdio.h>
#include "MinhaBiblioteca.h"


ContaCorrente InicializaContaCorrente(void)
{
   ContaCorrente conta;

printf("Digite o nome do usuario\n");
gets(conta.nome_do_usuario);

printf("Digite o numero da conta\n");
scanf("%d",&conta.numero_da_conta);

printf("Digite o saldo\n");
scanf("%f",&conta.saldo_da_conta);

printf("Digite a taxa\n");
scanf("%d",&conta.cobra_taxa);

return(conta);

}

void ExecutaOperacao (ContaCorrente* conta, float valor_da_operacao)
{
   if (conta->cobra_taxa==0)
   {
      conta->saldo_da_conta = conta->saldo_da_conta - valor_da_operacao;
   }
   else 
   {
      conta->saldo_da_conta = conta->saldo_da_conta - 1.00f;
      conta->saldo_da_conta = conta->saldo_da_conta - valor_da_operacao;
   } 

}

void ExibirDadosEmTela(ContaCorrente conta)
{
   printf("********************\n      Dados da conta      \n**********************");
   printf("\nNome do usuario: "); 
   puts(conta.nome_do_usuario);
   printf("Conta corrente:: %d", conta.numero_da_conta);
   printf("\nSaldo disponivel: %f", conta.saldo_da_conta);
   
   if (conta.cobra_taxa==0)
   {
      printf("\nNão possui taxa");   
   }
   else 
   {
      printf("\nPossui taxa");
   } 
  

}
