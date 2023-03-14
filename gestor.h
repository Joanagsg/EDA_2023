/*****************************************************************//**
 * \file   gestor.h
 * 
 * \author Joana Silva
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>

typedef struct listVeiculos Veiculo;

typedef struct listGestor
{
  int id;
  char nome[50];
  char email[100];
  char password[50];
  int numVeiculos;
  struct listGestor *next;
} Gestor;