/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../../vector.h"
#include "../../structs.h"
#include "../../clienteDAO.h"
#include "../../filmeDAO.h"
#include "../../categoriaDAO.h"
#include "../../fornecedorDAO.h"
#include "../../funcionarioDAO.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setTamanhoCliente(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoCli.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoCli.pro");

    FILE *arqB = fopen("tamanhoCli.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoCliente() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoCli.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
<<<<<<< Updated upstream
=======
}

void setTamanhoFilme(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoFil.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoFil.pro");

    FILE *arqB = fopen("tamanhoFil.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoFilme() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoFil.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
}

void setTamanhoCategoria(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoCat.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoCat.pro");

    FILE *arqB = fopen("tamanhoCat.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoCategoria() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoCat.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
}

void setTamanhoFornecedor(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoFor.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoFor.pro");

    FILE *arqB = fopen("tamanhoFor.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoFornecedor() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoFor.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
}

void setTamanhoFornecedor(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoFor.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoFor.pro");

    FILE *arqB = fopen("tamanhoFor.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoFornecedor() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoFor.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
}

void setTamanhoFuncionario(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoFun.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoFun.pro");

    FILE *arqB = fopen("tamanhoFun.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoFuncionario() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoFun.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
}

void setTamanhoLocadora(float tamanho) {
    //FILE *arq = fopen("C:\\Projetos\\Locadora_Filmes\\codigo\\cliente.pro", "ab");
    FILE *arq = fopen("tamanhoLoc.pro", "ab");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo");
    }

    remove("tamanhoLoc.pro");

    FILE *arqB = fopen("tamanhoLoc.pro", "wb");

    fwrite(&tamanho, sizeof (tamanho), 1, arqB);
    fclose(arqB);
}

int getTamanhoLocadora() {

    float c;
    float tamanho;
    // VECTOR_INIT(v);
    //    Cliente *cli = &clientes;
    FILE *arq = fopen("tamanhoLoc.pro", "rb");
    //printf("Arquivo xistente!");

    if (arq == NULL) {
       // printf("Arquivo inexistente!");

        return 0;
    }
    while (fread(&c, sizeof (c), 1, arq)) {

        // VECTOR_ADD(v,c);
        // array[i].nome = c.nome;
        tamanho = c;
        // }
        //printf("Cod %f --- Descricao: %s\n", c.codigo, c.nome);

        //VECTOR_ADD(clientes, cw);
        //printf("Cod %s\n", c.nome);
    }
    fclose(arq);
    return tamanho;
>>>>>>> Stashed changes
}