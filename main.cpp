/*Comentarios: */

#include<iostream>
#include<cstdlib>
#include<string.h>
#include <cstdio>
#include <cstring>
#include<clocale>

using namespace std;


struct caracteristicas{
    char nombre[30];
    char descripcion[90];
    char genero[20];
    int edad;
    char titulo[20];
};

struct principales{
    int recistencia;
    int fuerza;
    int destreza;
    int persepcion;
    int calculo;
    int abstraccion;
    int carisma;
    int templanza;
    int sigilo;
    int suerte;
};

struct secundarias{
    int vitalidad;
    int estamina;
    ///Aptitudes fisicas:
    int correr;
    int esquivar;
    int parkour;
    ///Aptitudes:
    int medicina;
    int ingenieria;
    int cerrajeria;
    int informatica;
    int quimica;
    int historia;
    int cocina;
    int cultura;
    ///Combate:
    int cuerpo_a_cuerpo;
    int arma_blanca;
    int armas_contundentes;
    int armas_de_precicion;
    int arrojables;
    ///Tolerancias:
    int veneno;
    int enfermedad;
    int hipotermia;
    int quemaduras;
    int alcohol;
    ///Subterfugio:
    int robar;
    int discrecion;
    int elocuencia;
    ///Psicologia:
    int cordura;
    int autocontrol;
};

#include "rlutil.h"
///#include "administrador.h"
#include "menus.h"

int main (){

    struct caracteristicas pj_car;
    struct principales pj_pri;
    struct secundarias pj_sec;

    bool key = true;

    bool flag = true;
    char opcion;

    cout<< "Bienvenido la editor de fichas de rol."<< endl<< "Espero que los disfruten."<< endl;
    system("pause");
    system("cls");

    while(key){

        pj_car = Ingresar_caracteristicas();

        pj_pri = Menu_admi_principales();

        pj_sec = administrar_secundarias(pj_pri);

        Menu_elegir_titulo(pj_car, pj_pri, pj_sec);

        cout<< "Tu ficha se esta armando..."<< endl;
        system("pause");
        system("cls");
        cout<< "0%"<< endl;
        system("pause");
        system("cls");
        cout<< "25%"<< endl;
        system("pause");
        system("cls");
        cout<< "50%"<< endl;
        system("pause");
        system("cls");
        cout<< "75%"<< endl;
        system("pause");
        system("cls");
        cout<< "100%"<< endl;
        system("pause");
        system("cls");
        cout<< "¡¡¡Listo!!!"<< endl;
        system("pause");
        system("cls");

        Mostrar_ficha_completa(pj_car, pj_pri, pj_sec);

        system("pause");
        system("cls");

        while(flag){

            cout<< "Estas satisfecho con tus deciciones? (S/N)"<< endl;
            cin>> opcion;

            switch(opcion){
                case 'S':
                    key = false;
                    flag = false;
                break;
                case 'N':
                    flag = false;
                break;
                default:
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                break;
            }

        }

        flag = true;

    }

    cout<< "Gracias por su tiempo."<< endl;
    cout<< "Si encuentra algun problema comuniqueselo al Jonathan mas cercano."<< endl;
    system("pause");
    system("cls");

    return 0;
}
