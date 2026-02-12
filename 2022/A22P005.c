/* Nome: Andrei Francesco
   Cognome: Burlacu
   Classe: 3AI
   Specializzazione: Informatica
   Data di Creazione: 11/12/2022
   nome file: A22P005
   Revisione: 0
   Traccia: Menu con tre opzioni: 1. Visualizzare le somme parziali di k numeri 1 alla volta. 
   2. Visualizzare somma e prodotto di k numeri 1 alla volta. 
   3. Visualizzare quanti numeri fossero negativi, positivi o nulli data una sequenza di k numeri.
*/
#include <stdio.h>

int main()
{
                                      /* Dichiarazione variabili */
    int sc, k, indice, num, pos, neg, nulli;
    float sop, som, prod;
                                      /* Acquisizione della scelta */
    printf("Inserisci 1 per visualizzare le somme parziali di k numeri 1 alla volta\n"
           "Inserisci 2 per visualizzare somma e prodotto di k numeri 1 alla volta\n"
           "Inserisci 3 per visualizzare quanti numeri fossero negativi, positivi o"
           "nulli data una sequenza di k numeri: \n"
           "Inserisci 0 per uscire dal programma: \n");
    scanf("%d", &sc);
    switch (sc)
      {
        case 1:
        indice=1;
        sop=0;
                                                  /* Acquisizione del quantitativo 
                                                  di numeri da elaborare */
        printf("Inserisci la quantità di numeri da sommare: ");
        scanf("%d", &k);
        do
          {
                                              /* Acquisizione del numero 
                                              da elaborare dell'utente */
            printf("Inserisci i numeri da calcolare: ");
            scanf("%d", &num);
                                                /*  Elaborazione del numero
                                             dell'utente con visualizzazione */
            sop= sop+num;
            printf("%f\n", sop);
            indice=indice+1;
          }
        while(!(indice>k));
        break;
        case 2:
        indice=1;
        prod=1;
        som=0;
                                                 /* Acquisizione del quantitativo 
                                                  di numeri da elaborare */
        printf("Inserisci la quantità di numeri da sommare e calcolare il prodotto: ");
        scanf("%d", &k);
        while (indice<=k)
          {
                                               /* Acquisizione del numero 
                                              da elaborare dell'utente */
            printf("Inserisci i numeri da calcolare: \n");
            scanf("%d", &num);
                                                /*  Elaborazione del numero
                                             dell'utente con visualizzazione */
            som= som+num;
            printf("%f\n", som);
            prod= prod*num;
            printf("%f\n", prod);
            indice= indice+1;
          }
        break;
        case 3:
        neg=0;
        pos=0;
        nulli=0;
                                              /* Acquisizione del quantitativo 
                                                  di numeri da elaborare */
        printf("Inserisci la quantità di numeri da elaborare: ");
        scanf("%d", &k);
        for (indice=1; indice<=k; indice=indice+1)
          {
                                              /* Acquisizione del numero 
                                              da elaborare dell'utente */
            printf("Inserisci i numeri da calcolare: \n");
            scanf("%d", &num);
                                             /*  Elaborazione del numero
                                             dell'utente con visualizzazione */
            if (num<0)
              {
                neg= neg+1;
              }
            else if (num>0)
              {
                pos= pos+1;
              }
            else
              {
                nulli= nulli+1;
              }
          }
        printf("I numeri positivi sono: %d\n"
               "I numeri negativi sono: %d\n" 
               "I numeri nulli sono: %d ", pos, neg, nulli);
        break;
        case 0:
        return 0;
        default:
        printf("Reinserisci, solo numeri compresi tra 1 e 3 e 0 per uscire");
      }
return 0;
}
