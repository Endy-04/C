/* Nome: Andrei Francesco
   Cognome: Burlacu
   Specializzazione: Informatica
   Data di Creazione: 22/12/2022
   nome file: A22P007
   Revisione: 1
   Traccia: Calcolo fattoriale e gestione somma pari/prodotto dispari
*/
#include <stdio.h>
int main()
{
                                                /* Dichiarazione variabili */
  int num, indice, pari, dispari_prod, sc, quoz, re, k;
  long long fatt; /* CORRETTO: long long per contenere il fattoriale fino a 20 */
                                                /* Acquisizione scelta dell'utente */
  do
    {
      printf("\n--- MENU ---\n"
             "Inserire 1 per calcolare il fattoriale di un numero <=20 \n"
             "Inserire 2 per calcolare somma dei numeri pari e prodotto dei numeri dispari \n"
             "Inserire 3 per uscire dal programma \n"
             "Scelta: ");
      scanf("%d", &sc);
      switch (sc)
        {
          case 1:
          fatt=1;
                                            /* Acquisizione numero dell'utente */
          do
            {
              printf("Inserisci il numero da elaborare (0-20): ");
              scanf("%d", &num);
            }
          while(!(num>=0 && num<=20));
                                                  /* Calcolo del fattoriale 
                                                  con visualizzazione*/
          indice= 1;
          while(indice<=num)
            {
              fatt= fatt*indice;
              indice=indice+1;
            }
          printf("Il fattoriale di %d è: %lld\n", num, fatt); /* %lld per long long */
          break;
          case 2:
          pari=0;
          dispari_prod=1;
                                                     /* Acquisizione quantità 
                                                     numeri da elaborare */
          do
            {
              printf("Inserisci quanti numeri vuoi elaborare: ");
              scanf("%d", &k);
            }
          while (!(k>0));
          indice=1;
          do
            {
              do
                {
                  printf("[%d/%d] Inserisci numero: ", indice, k);
                  scanf("%d", &num);
                }
              while (!(num>=0));
                                                          /* Calcolo del resto */
              quoz=num/2;
              re=num-(quoz*2);
                                                          /* Verifica se numero è pari
                                                          con annesso calcolo */
              if (re==0)
                {
                  pari=pari+num;
                  printf("Somma parziale pari: %d\n", pari);
                }
              else
                {
                  dispari_prod=dispari_prod*num;
                  printf("Prodotto parziale dispari: %d\n", dispari_prod);
                }
                                                       /* Incremento indice */
              indice=indice+1;
            }
          while (!(indice>k));
          break;
          case 3:
          printf("Uscita...\n");
          break;
        }
    }
                                                   /* Verifica scelta per terminare il programma */
  while (!(sc==3));
  return 0;
}