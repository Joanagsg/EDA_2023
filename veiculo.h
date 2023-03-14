/*****************************************************************//**
 * \file   veiculo.c
 * 
 * \author Joana Silva
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>

typedef struct listGestor Gestor;
typedef struct listCliente Cliente;

typedef struct listVeiculos {
  int id;
  char tipo[20];
  float autonomia;
  float carga_bateria;
  float localizacao[30];
  struct listVeiculos *next;
} Veiculo;
