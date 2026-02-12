/*
Nome: Andrei Francesco
Cognome: Burlacu
Specializzazione: Informatica
Data di creazione: 23/11/2022
Nome file: A22P003
Traccia: Menu con tre opzioni: 1. Esecuzione di 50 numeri usando il ciclo while. 2. Esecuzione di 50 numeri usando il ciclo do while. 3. Esecuzione di 50 numeri usando il ciclo for.
Revisione: 0
Data di revisione: 23/11/2022
Traccia:
*/
#include <stdio.h>

int main()
{                                                 
                                                   /* Dichiarazione variabili */
  int indice, sc;
  float num, meta, triplo;
                                                /* Acquisizione della scelta */
  printf("Inserisci la scelta che vuoi eseguire"
         "\nPremi 0 per uscire"
         "\nPremi 1 per eseguire i tuoi numeri usando il while"
         "\nPremi 2 per eseguire i tuoi numeri usando il do while"
         "\nPremi 3 per eseguire i tuoi numeri usando il for \n" );
  scanf("%d", &sc);
  switch (sc)
    {
      case 1:
      indice=1; 
                                                /* Ripetizione delle istruzioni tramite ciclo while 
                                                per 50 volte */    
      while (indice<= 50)
        {
          printf("Inserisci un numero: ");
          scanf("%f", &num);
                                             /* Calcolo della metà e del triplo 
                                             e visualizzazione */
          meta= (num/2);
          triplo= (num*3);
          printf("La metà del numero è %f \nIl triplo del numero è %f\n\n", meta, triplo);
                                            /* Calcolo del nuovo valore dell'indice*/
          indice= (indice+1);
        }
      break;
      case 2:
      indice=1; 
                                                /* Ripetizione delle istruzioni tramite il ciclo repeat 
                                                per 50 volte */    
      do 
        {
          printf("Inserisci un numero: ");
          scanf("%f", &num);
                                            /* Calcolo della metà e del triplo 
                                             e visualizzazione */
          meta= (num/2);
          triplo= (num*3);
          printf("La metà del numero è %f \nIl triplo del numero è %f\n\n", meta, triplo);
                                         /* Calcolo del nuovo valore dell'indice*/
          indice= (indice+1);
        }
      while(!(indice>50));
      break;
      case 3:
                                       /* Ripetizione delle istruzioni tramite 
                                           ciclo for per 50 volte */
      for (indice=1; indice<=50; indice++)
        {
          printf("Inserisci un numero: ");
          scanf("%f", &num);
                                            /* Calcolo della metà e del triplo 
                                             e visualizzazione */
          meta= (num/2);
          triplo= (num*3);
          printf("La metà del numero è %f \nIl triplo del numero è %f\n\n", meta, triplo);
        }
      break;
      default:
      printf("Reinserisci solo numeri compresi tra 0 e 3");
    }

    return 0;
}