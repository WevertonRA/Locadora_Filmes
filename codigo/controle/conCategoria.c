/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../tamanho.h"

int salvaCategoria(Categoria *f) {

    float tamanhoCategoria= getTamanhoCategoria() + 1;
    (*f).codigo = tamanhoCategoria;
    return inclusaoCategoria(*f);
}

int atualizaCategoria(Categoria f) {
    return alterarCategoria(f, f.codigo);

}

int deletaCategoria(int codCategoria) {
    return deletaCategoria(codCategoria);
}

Categoria* listaCategoria() {
    return listaCategoria();
}

//implementar esse olhar se no codigo do wev tem

 consultaCategoria(int codigo) {
    return consultarCategoria(codigo);
}

int qtdCategoria() {
    return qtdCategoria();
}