/*****************************************************************//**
 * \file   cliente.h
 * 
 * \author Joana Silva
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>

typedef struct listVeiculos Veiculo;

typedef struct listCliente {
    int id;
    char nome[50];
    char morada[100];
    char nif[10];
    float saldo;
    char email[30];
    char password[16];
    struct listClient *next;
    Veiculo *v;
} Cliente;