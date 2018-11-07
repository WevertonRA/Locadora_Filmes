/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   locadoraDAO.h
 * Author: wever
 *
 * Created on 11 de Outubro de 2018, 14:57
 */

#ifndef LOCADORADAO_H
#define LOCADORADAO_H

#include "structs.h"


#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif
/*
 **  Inclui Locadora em arquivo binario
 */
int inclusaoLocadora(Locadora l);
/*
 **  Inclui Locadora em arquivo Texto
 */
void inclusaoLocadoraTexto(Locadora l);
/*
 **  Lista Locadora em arquivo binario
 */
Locadora* listarLocadora();
/*
 **  Lista Locadora em arquivo Texto
 */
Locadora* ListarLocadoraTexto();
/*
 **  Consultar Locadora em arquivo binario
 */
Locadora consultarLocadora(float cod);
/*
 **  Consultar Locadora em arquivo Texto
 */
Locadora ConsultarLocadoraTexto(float cod);
/*
 **  Altera Locadora em arquivo binario
 */
int alterarLocadora(Locadora locadora, float cod);
/*
 **  Altera Locadora em arquivo Texto
 */
void alterarLocadoraTexto(float cod, Locadora loc);
/*
 **  Deleta Locadora em arquivo binario
 */
int excluirLocadora(float cod);
/*
 **  Deleta Locadora em arquivo Texto
 */
int excluirLocadoraTexto(float cod);
#endif /* LOCADORADAO_H */

