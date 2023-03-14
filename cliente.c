/*****************************************************************//**
 * \file   cliente.c
 * 
 * \author Joana Silva
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

// novo cliente
// Cliente* newCliente = malloc(sizeof(Cliente));
// newCliente -> id=1;

// strcpy(newCliente -> nome, 'Joana');
// strcpy(newCliente -> morada, 'Vila Nova de Famalicão');
// strcpy(newCliente -> nif, '123456789');
// strcpy(newCliente -> email, 'joana@email.com');
// strcpy(newCliente -> password, 'passDaJoana');
// newCliente -> saldo = 350;

// newCliente -> v = NULL; // não existe nenhum veículo que seja desta pessoa

// inserir no início da lista
// newCliente -> next = listaCliente;
// listaCliente = newCliente;

// Criar um novo cliente
Cliente* novoCliente() {
  Cliente* cliente = malloc(sizeof(Cliente));
  printf('Id do novo cliente: ');
  scanf('%s', cliente -> id);
  printf('Nome do novo cliente: ');
  scanf('%s', cliente -> nome);
  printf('Morada do novo cliente: ');
  scanf('%s', cliente -> morada);
  printf('NIF do novo cliente: ');
  scanf('%s', cliente -> nif);
  printf('Email do novo cliente: ');
  scanf('%s', cliente -> email);
  printf('Password do novo cliente: ');
  scanf('%s', cliente -> password);
  printf('Saldo do novo cliente: ');
  scanf('%f', cliente -> saldo);
}





