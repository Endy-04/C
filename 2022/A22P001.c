/* Nome: Andrei Francesco
   Cognome: Burlacu
   Specializzazione: Informatica
   Data di Creazione: 15/11/2022
   nome file: A22P001
   Revisione: 1
   Data di Revisione: 17/11/2022
   Traccia: Dato un numero intero < di 10000 visualizza le cifre una alla volta
*/
#include <stdio.h>
int main()
{
                                                /* Dichiarazione variabili */
 int num, cif1, cif2, cif3, cif4;
                                                /* Input dei dati */
                                             /* Verifica delle variabili */
  do {
      printf( "Inserisci un numero < 10000: ");
      scanf( "%d", &num);
     }
  while (!(num<10000));
                                        /* Cambio segno se variabile negativa */
  if (num<0)
    { 
        num= num*-1;
    }
                                        /* Ordine delle cifre e visuallizzazione */
    if (num<10)
    { 
      cif1= num;
      printf("%d\n", cif1);
    }
    else if (num<100)
           { 
             cif1= num / 10;
             cif2= num - cif1 * 10;
             printf("%d\n", cif1);
             printf("%d\n", cif2);
           }
    else if (num<1000)
           { 
             cif1= num / 100;
             cif2= num / 10 - cif1 * 10;
             cif3= num - cif1 * 100 - cif2 * 10;
             printf("%d\n", cif1);
             printf("%d\n", cif2);
             printf("%d\n", cif3);
           }
    else if (num<10000)
        { 
          cif1= num / 1000;
          cif2= num / 100 - cif1 * 10;
          cif3= num / 10 - cif1 * 100 - cif2 * 10;
          cif4= num - cif1 * 1000 - cif2 * 100 - cif3 * 10;
          printf("%d\n", cif1);
          printf("%d\n", cif2);
          printf("%d\n", cif3);
          printf("%d\n", cif4);
        }
return 0;
}