/* Nome: Andrei Francesco
   Cognome: Burlacu
   Specializzazione: Informatica
   Data di Creazione: 25/11/2022
   nome file: A22P004
   Revisione: 1 
   Traccia: Per k equazioni di primo grado visualizzare l'eventuale soluzione
*/
#include <stdio.h>

int main()
{
                                                  /* Dichiarazione variabili */
    int k, sc, indice;
    float a, b, x;
                                                /* Acquisizione del numero 
                                                      di equazioni */
    do
      {
        printf("Inserisci quante volte si devono ripetere le equazioni: ");
        scanf("%d", &k);
      }
    while (!(k>0));
    
                                             /* Acquisizione della scelta */
    printf("Premi 0 per uscire dal programma \n"
           "Premi 1 per eseguire le operazioni tramite while \n"
           "Premi 2 per eseguire le operazioni tramite do-while \n"
           "Premi 3 per eseguire le operazioni tramite for \n");
    scanf("%d", &sc);
    switch (sc)
      {
        case 1:
        indice= 1;
                                      /* Ripetizione delle istruzioni tramite ciclo while 
                                           per la quantità della variabile k */ 
        while (indice<=k) /* CORRETTO: <= per fare k volte */
          {
            printf("[%d] Dammi il coefficiente a: ", indice);
            scanf("%f", &a);
            printf("[%d] Dammi il coefficiente b: ", indice);
            scanf("%f", &b);
            if (a!=0)
              {
                                                  /* Calcolo della soluzione */
                x=(-b/a); /* CORRETTO: la soluzione di ax+b=0 è -b/a */
                printf("La soluzione è: %f\n", x);
              }
            else 
              {
                if(b!=0)
                  {
                    printf("L'equazione è impossibile, nessuna soluzione\n");
                  }
                else
                  {
                    printf("L'equazione è indeterminata, infinite soluzioni\n");
                  }
              }
                                                /* Incremento dell'indice */
            indice=indice+1;
          }
        break;  
        case 2:
        indice= 1;
                                   /* Ripetizione delle istruzioni tramite do-while 
                                           per la quantità della variabile k */
        do
          {
            printf("[%d] Dammi il coefficiente a: ", indice);
            scanf("%f", &a);
            printf("[%d] Dammi il coefficiente b: ", indice);
            scanf("%f", &b);
            if (a!=0)
              {
                                                   /* Calcolo della soluzione */
                x=(-b/a);
                printf("La soluzione è: %f\n", x);
              }
            else 
              {
                if(b!=0)
                  {
                    printf("L'equazione è impossibile, nessuna soluzione\n");
                  }
                else
                  {
                    printf("L'equazione è indeterminata, infinite soluzioni\n");
                  }
              }
                                                /* Incremento dell'indice */
            indice=indice+1;
          }
        while (indice<=k); /* CORRETTO: logica più semplice */
        break;
        case 3:
                                    /* Ripetizione delle istruzioni tramite for 
                                        per la quantità della variabile k */
        for (indice=1; indice<=k; indice=indice+1) /* CORRETTO: <= */
          {
            printf("[%d] Dammi il coefficiente a: ", indice);
            scanf("%f", &a);
            printf("[%d] Dammi il coefficiente b: ", indice);
            scanf("%f", &b);
            if (a!=0)
              {
                                                  /* Calcolo della soluzione */
                x=(-b/a);
                printf("La soluzione è: %f\n", x);
              }
            else 
              {
                if(b!=0)
                  {
                    printf("L'equazione è impossibile, nessuna soluzione\n");
                  }
                else
                  {
                    printf("L'equazione è indeterminata, infinite soluzioni\n");
                  }
              }
          }
        break;
                                                /* Uscita dal programma */
        case 0:
        return 0;
        break;
        default:
        printf("Reinserisci solo numeri compresi tra 0 e 3");
      }
return 0;
}