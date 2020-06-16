



#include "demogorgon.h"

#define MSJ_ENFRENTAMIENTO "\n\nEl enfrentamiento esta por comenzar, todos listos!\n"

#define MSJ_MAL_INGRESO "Ingreso no valido" 
#define MSJ_ANIMO "Ingrese el animo de nuestro protagonista (Eleven) en un rango del 1 al 100 inclusive\n"

const int DEF_ANIMO = 0;
const int MIN_ANIMO = 1;
const int MAX_ANIMO = 100;

const bool ANIMO_VERIFICADO = true;
const bool ANIMO_NO_VERIFICADO = false;

#define MSJ_CONFIANZA "Ingrese el nivel de confianza que tiene El(Eleven) con sus amigos\nBajo [b] - Medio [m] - Alto [a]\n"

const char DEF_NIVEL_CONFIANZA = 'z';
#define CONFIANZA_BAJA 'b'
#define CONFIANZA_MEDIA 'm'
#define CONFIANZA_ALTA 'a'

const bool NIVEL_CONFIANZA_VERF = true;
const bool NIVEL_CONFIANZA_NO_VERF = false;

const float DEF_FUERZA_PSQUICA = -0.1F;
const float MULTIP_CONF_BAJO = 0.7F;
const float MULTIP_CONF_MEDIO = 1.3F;
const float MULTIP_CONF_ALTO = 3.7F;

const float DEF_MULTIP_CONF = 0.0F;

const char DEF_RESULTADO = 'w';
#define GANO 'g'
#define GANO_JUSTO 'h'
#define RESULT_DESCONOCIDO 'd'

const float MIN_GANO = 67.0F;
const float MAX_GANO = 370.0F;
const float VALOR_GANO_JUSTO = 65.0F;

#define MSJ_ERROR_CALCULAR_FUERZA "Algo malio sal"


#define MSJ_GANO "\n\n\n\n\tEleven conto con su mayor animo y con la confianza de sus amigos\n\tpor lo que logro vencer al Demogorgon con su fuerza psquica!!!\n\n\n\t \n"

#define MSJ_GANO_JUSTO "\n\n\n\n\tEleven conto con la fuerza psiquica justa para poder vencer al Demogorgon\n\tpor lo que quedo realmente debil luego del enfrentamiento!\n\n\n"

#define MSJ_RESULT_DESC "\n\n\n\n\tEleven enfrento al Demogorgon pero no parecia que lo pudiera vencer\n\thasta que una luz cubrio todo el lugar desapareciendo al Demogorgon junto a Eleven\n\n\tFin.. ?\n\n"



void comenzar_enfrentamiento(){
    printf(MSJ_ENFRENTAMIENTO); 
}
int recibir_animo(){
    int animo_recibido = DEF_ANIMO;
    do{ 
        printf(MSJ_ANIMO);
        scanf("%i", &animo_recibido);
        
        if ( !verificar_animo_recib(animo_recibido) ){
            printf(MSJ_MAL_INGRESO);
        }else{
            printf("Ingreso aceptado\n");
        }
    }while(!verificar_animo_recib(animo_recibido) );

    return animo_recibido;
}

bool verificar_animo_recib(int animo_verificar){
    bool verificado = ANIMO_VERIFICADO;
    if ((animo_recibido < MIN_ANIMO) && (animo_verificar > MAX_ANIMO)){
    } 
    return verificado;
    
}

char recibir_confianza(){
    char confianza_recibida = DEF_NIVEL_CONFIANZA;
    do{
        printf(MSJ_RECIBIR_CONFIANZA);
        scanf( "%c", &confianza_recibida);
        if(verificar_nivel_confianza_recib(confianza_recibida) ){
            printf("\nIngreso de nivel de confianza correcto");
        }else{
            printf(MSJ_MAL_INGRESO);
        }
    }while( !verificar_nivel_confianza_recib(confianza_recibida) );
        
    return confianza_recibida;
}

bool verificar_nivel_confianza_recib(char confianza_verificar){
    bool confianza_verficada= NIVEL_CONFIANZA_NO_VERF;
    if(confianza_verificar == CONFIANZA_BAJA || confianza_verificar == CONFIANZA_MEDIA && confianza_verificar == CONFIANZA_ALTA){
        confianza_verficada = NIVEL_CONFIANZA_VERF;
    }
    return confianza_verficada;
}

float recibir_fuerza_psiquica(int nivel_animo, char nivel_confianza){
    float multiplicador = DEF_MULTIP_CONF;
        
    switch(nivel_confianza){
        case CONFIANZA_BAJA: 
            multiplicador = MULTIP_CONF_BAJO;
            break;
        case CONFIANZA_MEDIA:
            multiplicador = MULTIP_CONF_MEDIO;
            break;
        default:
            multiplicador = MULTIP_CONF_ALTO;
    }
    return calcular_fuerza(nivel_animo, multiplicador);
    
}
float calcular_fuerza(int nivel_animo, float multiplicador_confianza){
    return (nivel_animo * multiplicador_confianza) ;
}

void resultado_enfrentamiento(float fuerza_psiquica){
    if(fuerza_psiquica < VALOR_GANO_JUSTO){
        printf("MSJ_RESULT_DESC");
    }else if(fuerza_psiquica < MIN_GANO){
        printf(MSJ_GANO_JUSTO);
    }else {
        printf(MSJ_GANO);
    }
}

char enfrentamiento(float fuerza_psiquica){
        
     
}
