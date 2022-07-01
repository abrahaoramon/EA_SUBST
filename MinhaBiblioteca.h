#ifndef _MINHABIBLIOTECA_H
#define _MINHABIBLIOTECA_H

typedef struct  
{
   char nome_do_usuario[40];
   int numero_da_conta;
   float saldo_da_conta;
   int cobra_taxa;

} ContaCorrente;

ContaCorrente InicializaContaCorrente(void);

void ExecutaOperacao (ContaCorrente* conta, float valor_da_operacao);

void ExibirDadosEmTela(ContaCorrente conta);

#endif
