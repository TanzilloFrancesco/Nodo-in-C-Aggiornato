#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main()
{
    NodoPtr head = NULL;
    StampaLista(head);

    InserisciInCoda(&head, 1);
    /* head --> 1 --> NULL */
    StampaLista(head);

    InserisciDopo(head, 2, 1);
    /* head --> 1 ---> 2 --> NULL */
    StampaLista(head);

    InserisciInTesta(&head, 3);
    /* head --> 3 --> 1 --> 2 --> NULL */
    StampaLista(head);

    InserisciDopo(head, 4, 3);
    /* head --> 3 --> 1 --> 4 --> 2 --> NULL */
    StampaLista(head);

    InserisciInCoda(&head, 5);
    /* head --> 3 --> 1 --> 4 --> 2 --> 5 --> NULL */
    StampaLista(head);

    PulisciLista(&head);
    
    return 0;
}