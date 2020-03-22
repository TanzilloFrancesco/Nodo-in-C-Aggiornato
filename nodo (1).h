#ifndef NODO_H
#define NODO_H

struct nodo {
    int val;
    struct nodo *next;
};
typedef struct nodo Nodo;
typedef struct nodo *NodoPtr;

void StampaLista(NodoPtr head);
void InserisciInCoda(NodoPtr *head, int val);
void InserisciInTesta(NodoPtr *head, int val);
void InserisciDopo(NodoPtr head, int val, int key);
void PulisciLista(NodoPtr *head);

#endif