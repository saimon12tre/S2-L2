#include <stdio.h>

int main() {
    // Dichiarazione delle variabili con numeri interi e decimali
    int num1, num2, prodotto;
    float media;

    // Richiedo all'utente di inserire in input 2 numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Calcolo della moltiplicazione tra i due numeri inseriti in input
    prodotto = num1 * num2;

    // Stampo a schermo il risultato della moltiplicazione
    printf("Il risultato della moltiplicazione tra %d e %d è di: %d\n", num1, num2, prodotto);

    // Calcolo la media dei due numeri inseriti
    media = (num1 + num2) / 2.0;

    // Stampo a schermo il risultato della media tra i due numeri presi in input
    printf("La media tra %d e %d è di: %f\n", num1, num2, media);

    // Con un ciclo if else verifico se il risultato della media è pari o dispari e lo scrivo a schermo
    if ((int)media % 2 == 0) {
        printf("Il risultato della media è pari.\n");
    } else {
        printf("Il risultato della media è dispari.&\n");
    }

    return 0;
}
