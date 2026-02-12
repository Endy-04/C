/* Nome: Andrei Francesco
   Cognome: Burlacu
   Data di Creazione: 17/11/2022
   Traccia: Menu con tre opzioni: 
   1. Conteggio positivi/negativi su 5 numeri.
   2. Trasformazione negativi in positivi, media, conteggio pari/dispari su 3 numeri.
   3. Ricerca del peso minimo tra 4 monete.
*/

#include <stdio.h>

int main() {
    int sc, contpos = 0, contneg = 0, par = 0, dis = 0, pos_min = 1;
    float num, med = 0, p, min = 0;

    printf("--- MENU SELEZIONE ---\n");
    printf("1. Positivi e negativi (su 5 numeri)\n");
    printf("2. Trasforma in positivi, media e pari/dispari (su 3 numeri)\n");
    printf("3. Trova la moneta piu' leggera (su 4 pesate)\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    scanf("%d", &sc);

    switch (sc) {
        case 1:
            for (int i = 1; i <= 5; i++) {
                printf("Inserisci il numero %d: ", i);
                scanf("%f", &num);
                if (num > 0) contpos++;
                else if (num < 0) contneg++;
            }
            printf("\nNumeri positivi: %d\n", contpos);
            printf("Numeri negativi: %d\n", contneg);
            break;

        case 2:
            for (int i = 1; i <= 3; i++) {
                printf("Inserisci il numero %d: ", i);
                scanf("%f", &num);
                
                // Trasformo i negativi in positivi
                if (num < 0) num = num * (-1);
                
                // Calcolo pari/dispari (usando il cast a int per l'operatore %)
                if ((int)num % 2 == 0) par++;
                else dis++;
                
                med += num; // Sommo per la media
            }
            printf("\nNumeri pari: %d\n", par);
            printf("Numeri dispari: %d\n", dis);
            printf("La media (valori assoluti) e': %.2f\n", med / 3);
            break;

        case 3:
            for (int i = 1; i <= 4; i++) {
                do {
                    printf("Inserire il peso della moneta %d: ", i);
                    scanf("%f", &p);
                } while (p <= 0); // Controllo che il peso sia valido

                // Se è la prima moneta, la imposto come minimo iniziale
                // Altrimenti controllo se quella attuale è minore del minimo precedente
                if (i == 1 || p < min) {
                    min = p;
                    pos_min = i;
                }
            }
            printf("\nLa moneta che pesa meno e' la n.: %d\n", pos_min);
            printf("Il suo peso e': %.2f\n", min);
            break;

        case 0:
            printf("Uscita in corso...\n");
            return 0;

        default:
            printf("Scelta non valida. Riprova.\n");
    }

    return 0;
}