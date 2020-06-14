
#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main(){
    int animo = DEF_ANIMO_JUGADOR;

    comenzar_enfrentamiento();
    animo = recibir_animo();
    printf("Animo recibido satisfactoriamente: %i", animo);
    
    nivel_confianza = recibir_confianza ();
    printf("\nConfianza recibida: %c", nivel_confianza)
    fuerza_psiquica = recibir_fuerza_psiquica(animo, nivel_confianza);
    printf ("\nFuerza psiquica: %f\n\n", fuerza_psiquica);
    resultado_enfrentamiento(fuerza_psiquica);
	return 0;
}