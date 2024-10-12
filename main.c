#include <stdio.h>

int main(void) {
   int npotenza;
    int risultato=2;
    int potenza=1;
    printf("inserire un numero di potenze di 2 tra 2 e 20");
    scanf("%d", &npotenza);
    if(npotenza > 20 || npotenza < 2) {
        printf("Errore, il valore non e' compreso tra 2 e 20");
    }
    else {
        while(npotenza >= potenza) {
          printf("2^%d = %d\n",potenza,risultato);
            risultato=risultato*2;
            potenza++;
        }
    }
    return 0;
}
