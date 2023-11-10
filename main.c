#include <stdio.h>
#include <string.h>

#define CANT_MONSTERS 5
#define LONG_NOMBRE 206
#define CANT_DANIOS 3
#define CANT_PODERES 3
#define VIDA_INIT 100
#define ESE_NOMBRE "Regreso y retorno de el evil bueno malo good bee movie man la película el juego 2: más malo que nunca: Recargado 2: el regreso y la recarga de la isla perdida: fábrica de chocolates: El hombre abejorro"

typedef struct {
  char nombre[LONG_NOMBRE];
  int puntos;
} atributos_t;

typedef struct {
  char nombre[LONG_NOMBRE];
  int vida;
  atributos_t danios[CANT_DANIOS];
  atributos_t poderes[CANT_PODERES];
} monster_t;

int numero_al_azar(int , int );
int pelea(monster_t [] , int , int );

void mostrar_monstruos(monster_t []);

void inicializar_monstruos(monster_t[]);

int elegir_monstruo(monster_t []);

int main(void) {
  monster_t mamba = {
    "La Mamba Negra",
    VIDA_INIT,
    {//daños
      "TRUCO BAJO LA MANGA (CUCHILLO)", 0,
      "EL NEGRASO", 0,
      "ROBAR", 0
    },
    {//poderes
      "CORTAR LA LUZ", 0,
      "REFLEJOS NIVEL LEAGUE OF LEGENDS", 0,
      "EL CUCASO (con s porque con z significa mujer atractiva)", 0
    }
  };
  monster_t snoo = {
    "Snoo",
    VIDA_INIT,
    {//daños
      "ATAQUE PSICOLOGICO", 0,
      "JUMPSCARE", 0,
      "ATAQUE DIGITAL", 0
    },
    {//poderes
      "BANEO", 0,
      "OPINAR", 0,
      "CUENTA FALSA", 0
    }
  };
  monster_t bee_movie_man = {
    ESE_NOMBRE,
    VIDA_INIT,
    {//daños
      "BAILE", 0,
      "BEEZION LASER", 0,
      "BAZINGA", 0
    },
    {//poderes
      "ENJAMBRE", 0,
      "MASCARA LED MALDITA", 0,
      "BZZZZZZ", 0
    }
  };
  monster_t pomberito = {
    "Pomberito",
    VIDA_INIT,
    {//daños
      "ESPIRITU DE FLORES", 0,
      "GEOQUINESIS", 0,
      "ATAQUE DE GARRA", 0
    },
    {//poderes
      "TERROR DEL CHACO", 0,
      "ROBAR ARMADURA", 0,
      "ESQUIVAR", 0
    }
  };
  monster_t gordivoro = {
    "El Gordivoro",
    VIDA_INIT,
    {//danios
      "HEDOR INSOPORTABLE", 0,
      "FUERZA SOBREHUMANA", 0,
      "OLEADA DE GRASA", 0
    },
    {//poderes
      "CAPA DE GRASA REGENERATIVA", 0,
      "RESISTENCIA INQUEBRANTABLE", 0,
      "REBOTE GRASO", 0
    }
  };

  monster_t monsters[CANT_MONSTERS] = {mamba,snoo,bee_movie_man,pomberito,gordivoro};
  int juego_no_terminado=1;

  printf("BIENVENIDO AL TORNEO\n");
  
  while(juego_no_terminado){
    inicializar_monstruos(monsters);

    mostrar_monstruos(monsters);

    int monstruo_elegido = elegir_monstruo(monsters);
    int index_contrincante = numero_al_azar(0, CANT_MONSTERS);
    
    int ganador=pelea(monsters, monstruo_elegido, index_contrincante);

    ganador=monstruo_elegido;
    
    if (ganador==monstruo_elegido){
      printf("Lo lograste. %s gano la pelea contra %s\n", monsters[monstruo_elegido].nombre, monsters[index_contrincante].nombre);
      printf("Desea jugar de vuelta (1) o terminar el juego (0)? ");
      scanf("%d",&juego_no_terminado);
    }else if (ganador==index_contrincante){
      printf("Perdiste. %s le ha ganado a %s. Quedaste fuera del torneo.\n", monsters[index_contrincante].nombre, monsters[monstruo_elegido].nombre);
    }
  }
  
  return 0;
}

int elegir_monstruo(monster_t monsters[CANT_MONSTERS]){
  int eleccion=0;
  printf("Cual de los monstruos mostrados eligiras:\n");
  for(int i=0;i<CANT_MONSTERS;i++){
    printf("%d - %s\n", i+1, monsters[i].nombre);
  }
  scanf(" %d", &eleccion);
  return eleccion-1;
}

void inicializar_monstruos(monster_t monsters[CANT_MONSTERS]){
  
}

void mostrar_monstruos(monster_t monsters[CANT_MONSTERS]){

}

int numero_al_azar(int linf, int lsup){
  
}

int pelea(monster_t[], int monster1, int monster2){
  
}
