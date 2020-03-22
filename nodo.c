#include<stdio.h>
#include<stdlib.h>
#include "nodo.h"

void StampaLista(NodoPtr attuale){
    if(attuale == NULL){
        printf("\nLista vuota");
    }else{
    while(attuale != NULL){
        printf("\n%d", attuale->val);
        attuale = attuale->next;
    }
    printf("\nLista finita");
    }
}

void InserisciInCoda(NodoPtr *head, int val){
    if (*head == NULL) {
        InserisciInTesta(head, val);
        return;
    }

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = NULL;

    NodoPtr temp = *head;

    /* cerca la fine della lista, per aggiungere il nuovoNodo all'ultimo posto */
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nuovoNodo;
}

void InserisciInTesta(NodoPtr *head, int val) {
    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = *head;

    *head = nuovoNodo;
}

void InserisciDopo(NodoPtr head, int val, int chiave)
{
    while (head != NULL && head->val != chiave) {
        head = head->next;
    }

    /* chiave non trovato */
    if (head == NULL) return;

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = head->next;

    head->next = nuovoNodo;
}
    
void PulisciLista(NodoPtr *head)
{
    NodoPtr temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        
        printf("Pulizia del nodo con valore pari a %d\n", temp->val);
        free(temp);
    }
}