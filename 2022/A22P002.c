/* Nome: Andrei Francesco
   Cognome: Burlacu
   Specializzazione: Informatica
   Data di Creazione: 17/11/2022
   nome file: A223AP007
   Revisione: 1 
   Traccia:Date tre opzioni, nella prima inserire cinque numeri, mostrare quanti sono 
positivi e quanti negativi, nella seconda inserire tre numero, trasformare i negativi in 
positivi, visualizzare la media con due decimali e visualizzare quanti pari e dispari
nella terza, inserire il peso di quattro monete d'oro dire quale pesa meno.
*/
#include <stdio.h>

int main()
{
                                                      /* Dichiarazione variabili */
  int sc, contpos=0, contneg=0, q, par=0, dis=0, pos_min=0;
  float num, re, med=0, p, min=0;
                                                    /* Acquisizione della scelta */ 
  printf("Premi 1 per vedere su cinque numeri quanti ne sono positivi e quanti negativi \n"
        "Premi 2 per trasformare i numeri negativi in positivi, fare la media e visualizzare quanti pari e dispari \n"
        "Premi 3 per visualizzare su quattro pesate di monete d'oro quale pesa meno \n"
        "Premi 0 per uscire \n");
  scanf("%d", &sc);
  switch (sc)
                                      /* Acquisizione dati input e conta numeri 
                                        positivi e negativi tramite contatore */
        { case 1:
          printf("Inserisci il primo numero");
          scanf("%f", &num);
          if (num>0)
            { contpos=contpos+1;
            }
          else if (num < 0)
                 { contneg= contneg+1;
                 }
          printf("Inserisci il secondo numero");
          scanf("%f", &num);
          if (num>0)
            { contpos= contpos+1;
            }
          else if (num < 0)
                 { contneg= contneg+1;
                 }
          printf("Inserisci il terzo numero");
          scanf("%f", &num);
          if (num>0)
            {  contpos= contpos+1;
            }
          else if (num < 0)
                 {  contneg= contneg+1;
                 }
          printf("Inserisci il quarto numero");
          scanf("%f", &num);
          if (num>0)
            {  contpos= contpos+1;
            }
          else if (num < 0)
                 {  contneg= contneg+1;
                 }
          printf("Inserisci il quinto numero");
          scanf("%f", &num);
          if (num>0)
            {  contpos= contpos+1;
            }
          else if (num < 0)
                 {  contneg= contneg+1;
                 }
          printf("I numeri positivi sono: %d \n", contpos);
          printf("I numeri negativi sono: %d", contneg);
          break;
                                    /* Acquisizione dati input e trasformazione
                                            numeri negativi a positivi */
          case 2:
          printf("Inserisci il primo numero");
          scanf("%f", &num);
          if (num<0)
            {  num= num*(-1);
            }
                                            /* Conta dei numeri pari e dispari 
                                            tramite il quoziente e il resto */
          q= (int)num/2;
          re= num-q*2;
          if (re == 0)
            {  par= par+1;
            }
          else
              {  dis= dis+1;
              }
          med= med+num;
          printf("Inserisci il secondo numero");
          scanf("%f", &num);
          if (num<0)
            {  num= num*(-1);
            }
          q= (int)num/2;
          re= num-q*2;
          if (re == 0)
            {  par= par+1;
            }
          else
              {  dis= dis+1;
              }
          med= med+num;
          printf("Inserisci il terzo numero");
          scanf("%f", &num);
          if (num<0)
            {  num= num*(-1);
            }
          q= (int)num/2;
          re= num-q*2;
          if (re == 0)
            {  par= par+1;
            }
          else
              {  dis= dis+1;
              }
          med= med+num;
                                            /* Calcolo della media e stampo 
                                            della media con due decimali */
          med= med/3;
          printf("I numeri pari sono: %d", par);
          printf("I numeri dispari sono: %d", dis);
          printf("La media è: %.2f", med);
          break;
                                      /* Acquisizione dati in input */
          case 3:
          do
            {  printf("Inserire il peso della prima moneta d'oro");
               scanf("%f", &p);
            }
          while (!(p>0));
                                               /* Assegnazione del minimo e 
                                               posizione del minimo */ 
          pos_min=1;
          min=p;
          do
            {  printf("Inserire il peso della seconda moneta d'oro ");
               scanf("%f", &p);
            }
          while (!(p>0));
          if (p<min)
            {  pos_min=2;
               min=p;
            }
          do
            {  printf("Inserire il peso della terza moneta d'oro ");
               scanf("%f", &p);
            }
          while (!(p>0));
          if (p<min)
            {  pos_min=3;
               min=p;
            }
          do
            {  printf("Inserire il peso della quarta moneta d'oro ");
               scanf("%f", &p);
            }
          while (!(p>0));
          if (p<min)
            {  pos_min=4;
               min=p;
            }
          printf("La moneta che pesa di meno è la: %d \n"
                 "Il suo valore è: %f", pos_min, min);
          break;
          case 0:
          return 0;
          default:
          printf("Reinserisci un numero, tra 0 e 3");
        }
return 0;          
}