#include<stdio.h>
#include "conCliente.h"
#include "structs.h"
#include "clienteDAO.h"
#include <string.h>

void clientemenu() {

    int x;

    printf("Digite uma das opções: \n");

    printf("0. Sair \n");
    printf("1. Salvar Cliente \n");
    printf("2. Atualizar Cliente \n");
    printf("3. Deletar Cliente \n");
    printf("4. Listar cliente \n");
    printf("5. Consultar cliente \n");
    printf("6. Voltar para o menu \n");

    fflush(stdin); //limpa
    scanf("%d%*c", &x);
    char nome_atualizar[NOME];
 
      
    switch (x) {

            Cliente cliente;

        case 1: //salva clientes

            fflush(stdin); //limpa                       
            printf("Digite o nome: \n");
            scanf("%[^\n]%*c", cliente.nome); //Até o usuario dar enter
            fflush(stdin); //limpa

            printf("Digite o endereço: \n");
            scanf("%[^\n]%*c", cliente.endereco); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite o CPF: \n");
            scanf("%[^\n]%*c", cliente.cpf); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite o Telefone: \n");
            scanf("%[^\n]%*c", cliente.telefone); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite o e-mail: \n");
            scanf("%[^\n]%*c", cliente.email); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite o sexo F para femino e M para masculino: \n");
            scanf("%c%*c", &cliente.sexo); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite Estado Civil: \n");
            scanf("%[^\n]%*c", cliente.estado_civil); //Até o usuario dar enter
            fflush(stdin);

            printf("Digite o Ano de nascimento: \n");
            scanf("%[^\n]%*c", cliente.data_nascimento); //Até o usuario dar enter
            fflush(stdin);

            mensagem_operacao(salvaCliente(&cliente));

            break;

        case 2: //atualizar cliente 
            printf("Tô funcionando");

            break;

        case 3:
            printf("Tô funcionando");
            break;

        case 4: // Listar cliente
            listaClie();

            break;

            //case 5:


            // break;

    }

}

int mensagem_operacao(int cod) {

    if (cod == 1)
        printf("Opereção feita com sucesso!");
    else {
        printf("Operação não realizada com sucesso!");
    }
}

void listaClie() {
    
   Cliente *p = lClientes(); //p vetor com todos os clientes 
   int tamanho = qtdCliente(); //quantidade de clientes do vetor
   
    for (int i = 0; i <= tamanho; i++) {
        if (p[i].deletado != '*') { //Não mostrar os deletados
            printf("Codigo: %0f, Nome: %s, Endereço: %s, CPF: %s, Telefone: %s, E-mail: %s, Sexo: %c, Estado civil: %s, Data de Nascimento: %s. \n", p[i].codigo, p[i].nome, p[i].endereco, p[i].cpf, p[i].telefone, p[i].email, p[i].sexo, p[i].estado_civil, p[i].data_nascimento);
        }
    }
}