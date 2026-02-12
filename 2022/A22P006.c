/* Nome: Andrei Francesco
   Cognome: Burlacu
   Specializzazione: Informatica
   Data di Creazione: 18/12/2022
   nome file: A22P006
   Revisione: 1
   Traccia: Verifica se k numeri sono primi o perfetti
*/
#include <stdio.h>
int main()
{
                                                /* Dichiarazione variabili */
  int num, f, k, indice=1, i, quoz, meta;
  float re;
  do
    {
                                          /* Acquisizione della quantità di numeri
                                          da elaborare con verifica */
      printf("Inserisci la quantità di numeri da elaborare: ");
      scanf("%d", &k);
    }
  while (!(k>0));
                                        /* Ciclo while con elaborazione dell'input */
  while (indice<=k)
    {
      f=1; /* CORRETTO: f va resettato a 1 per ogni nuovo numero */
      do
        {
                                          /* Acquisizione del numero da elaborare
                                           con verifica */
          printf("\n[%d/%d] Inserisci un numero intero: ", indice, k);
          scanf("%d", &num);
        }
      while (!(num>0));
                                            /* verifica del numero con uscita rapida */
      if(num==1)
        {
          f=0;
          printf("Il numero %d non è primo\n", num);
        }
      else
        {
                                                /* inizializzazione dell'indice */
          i=2;
          meta=num/2;
                                             /* ciclo while per verificare ogni divisore */
          while(i<=meta)
            {
                                                  /* Calcolo quoziente e resto */
              quoz= num/i;
              re= num-(quoz*i);
                                                /* Verifica se il numero è primo */
              if (re == 0)
                {
                  printf("Il numero %d non è primo\n", num);
                  f = 0;
                  break;
                }
              i=i+1;
            }
        }
      if (f == 1)
        {
          printf("Il numero %d è primo\n", num);
        }
                                            /* Verifica se il numero è perfetto */
      if (num<=30)
        {
          if (num==6 || num==28)
            {
              printf("Il numero %d è perfetto\n", num);
            }
        }
      indice=indice+1;
    }
return 0;
}