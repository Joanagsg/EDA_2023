/*****************************************************************//**
 * \file   veiculo.c
 * 
 * \author Joana Silva
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "veiculo.h"

// Criar um novo veiculo
Veiculo* novoVeiculo() {
  Veiculo* veiculo = malloc(sizeof(Veiculo));
  printf('Id do novo veiculo: ');
  scanf('%s', veiculo -> id);
  printf('Tipo do novo veiculo: ');
  scanf('%s', veiculo -> tipo);
  printf('Autonomia do novo veiculo: ');
  scanf('%f', veiculo -> autonomia);
  printf('Craga da bateria do novo veiculo: ');
  scanf('%f', veiculo -> carga_bateria);
  printf('Localicação do novo veiculo: ');
  scanf('%f', veiculo -> localizacao);
}
