#include <stdio.h>
#include <sys/time.h>

int normaliseCapteur( int valCapteur[4] );

int main(void)
{
    int valCapteur[8] = { 56, 60, 65, 55 };
    int moyenne;

    int j;
    unsigned long duree;
    struct timeval debutCalcul, finCalcul;

    // Heure debut du calcul
    gettimeofday(&debutCalcul,NULL);

    // Refaire le calcul 10000 fois pour augmenter la durée de calcul
    for( j = 0; j < 1; j++) {
        moyenne = normaliseCapteur(valCapteur);
    }

    // Heure fin du calcul
    gettimeofday(&finCalcul,NULL);

    printf("moyenne : %d\n", moyenne);

}

int normaliseCapteur( int valCapteur[4] )
{
    int i;
    int total=0;
    int moyenne;
    int valeur = 0; 
    

    total = 0;
    for( i = 0; i < 4; i++) {
        total += valCapteur[i];
    }
    
   /* moyenne = total / 4; */
    moyenne = total >> 2; 
    printf("test nouvelle variable  \n"); 
  
    return(moyenne);
}

