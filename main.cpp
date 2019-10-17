#include<iostream>
#include<cstdlib>
#include<string.h>
#include <cstdio>
#include <cstring>
#include<clocale>
#include<ctime>
using namespace std;

#include "rlutil.h"
using namespace rlutil;

#include"Mapa.h"
#include"Avatar.h"
#include"Movimiento.h"

int main()
{

    ///Mapa:
    MAPA map_game;

    ///Avatar:
    AVATAR pj;
    map_game.imprimir_caracter(pj.gets_eje_x_ext(), pj.gets_eje_y_ext(), pj.gets_eje_x_int(), pj.gets_eje_y_int(), pj.gets_caracter());

    ///Menu:
    char mov;

    while(true){

        map_game.leer_mapa();

        cout<< endl<< endl<< endl;
        cout<< "W) Arriba."<< endl;
        cout<< "S) Abajo."<< endl;
        cout<< "A) Izquierda."<< endl;
        cout<< "D) Derecha."<< endl;
        cout<< endl;

        cout<< pj.gets_eje_x_ext();
        cout<< pj.gets_eje_y_ext();
        cout<< pj.gets_eje_x_int();
        cout<< pj.gets_eje_y_int();

        mov = getch();

        system("pause>>NULL");
        system("cls");

        switch(mov){

            case 'w':
            case 's':
            case 'a':
            case 'd':
                mover(mov, map_game, pj);
            break;

            default:
                cout<< "Opcion invalida"<< endl;
                system("pause>> NULL");
                system("cls");
            break;
        }

    }

    return 0;
}
