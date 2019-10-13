#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

///#include "rlutil.h"

struct secundarias administrar_secundarias(struct principales ficha_pri){

    struct secundarias ficha_x;

    ficha_x.vitalidad = ficha_pri.recistencia * 5;
    ficha_x.estamina = ficha_pri.recistencia * 3 + ficha_pri.destreza * 2;
    ///Aptitudes fisicas
    ficha_x.correr = ficha_pri.recistencia * 2 + ficha_pri.destreza * 3;
    ficha_x.esquivar = ficha_pri.destreza * 3 + ficha_pri.suerte * 2;
    ficha_x.parkour = ficha_pri.destreza * 5;
    ///Aptitudes
    ficha_x.medicina = ficha_pri.calculo * 2 + ficha_pri.abstraccion * 3;
    ficha_x.ingenieria = ficha_pri.calculo * 5;
    ficha_x.cerrajeria = ficha_pri.calculo * 5;
    ficha_x.informatica = ficha_pri.calculo * 3 + ficha_pri.abstraccion * 2;
    ficha_x.quimica = ficha_pri.calculo * 5;
    ficha_x.historia = ficha_pri.abstraccion * 5;
    ficha_x.cocina = ficha_pri.abstraccion * 5;
    ficha_x.cultura = ficha_pri.abstraccion * 5;
    ///Combate
    ficha_x.cuerpo_a_cuerpo = ficha_pri.fuerza * 3 + ficha_pri.destreza * 2 ;
    ficha_x.arma_blanca = ficha_pri.destreza * 5 ;
    ficha_x.armas_contundentes = ficha_pri.fuerza * 5;
    ficha_x.armas_de_precicion = ficha_pri.persepcion * 5;
    ficha_x.arrojables = ficha_pri.fuerza * 2 + ficha_pri.persepcion * 3;
    ///Tolerancias;
    ficha_x.veneno = ficha_pri.recistencia * 5;
    ficha_x.enfermedad = ficha_pri.recistencia * 5;
    ficha_x.hipotermia = ficha_pri.recistencia * 5;
    ficha_x.quemaduras = ficha_pri.recistencia * 5;
    ficha_x.alcohol = ficha_pri.recistencia * 5;
    ///Subterfugio;
    ficha_x.robar = ficha_pri.destreza * 2 + ficha_pri.sigilo * 3;
    ficha_x.discrecion = ficha_pri.sigilo * 5;
    ficha_x.elocuencia = ficha_pri.carisma * 3+ ficha_pri.suerte * 2;
    ///Psicologia;
    ficha_x.cordura = ficha_pri.templanza * 5;
    ficha_x.autocontrol = ficha_pri.templanza * 3 + ficha_pri.suerte * 2;

    return ficha_x;

}


void Mostrar_informacion_titulos(){

    cout<< "Soldado."<< endl;
    cout<< "/t Requisitos:"<< endl;
    cout<< "/t/tFuerza 5+"<< endl;
    cout<< "/t/tDestreza 5+"<< endl;
    cout<< "/t/tPercepción 5+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tArma blanca +10"<< endl;
    cout<< "/t/tArma contundente +5"<< endl;
    cout<< "/t/tArma de precisión +5"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Artista marcial."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tFuerza 6+"<< endl;
    cout<< "/t/tDestreza 6+"<< endl;
    cout<< "/t/tTemplanza 4+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tEsquivar +10"<< endl;
    cout<< "/t/tCuerpo a cuerpo +10"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Asesino."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tDestreza +6"<< endl;
    cout<< "/t/tSigilo +6"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tArma blanca +5"<< endl;
    cout<< "/t/tArma de precisión +5"<< endl;
    cout<< "/t/tDiscreción +10"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Ladrón."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tDestreza 4+"<< endl;
    cout<< "/t/tSigilo 4+"<< endl;
    cout<< "/t/tCarisma 4+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tRobar +10"<< endl;
    cout<< "/t/tDiscreción +5"<< endl;
    cout<< "/t/tElocuencia +5"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Medico."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tDestreza 4+"<< endl;
    cout<< "/t/tCalculo 5+"<< endl;
    cout<< "/t/tCarisma 5+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tQuimica +5"<< endl;
    cout<< "/t/tMedicina +10"<< endl;
    cout<< "/t/tEnfermedad +5"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Medico de guerra."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tDestreza 4+"<< endl;
    cout<< "/t/tCalculo 5+"<< endl;
    cout<< "/t/tTemplansa 5+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tMedicina +10"<< endl;
    cout<< "/t/tEnfermedad +5"<< endl;
    cout<< "/t/tAutocontrol +5"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Erudito."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tCalculo 5+"<< endl;
    cout<< "/t/tAbstracción 5+"<< endl;
    cout<< "/t/tCarisma 5+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tHistoria +5"<< endl;
    cout<< "/t/tCultura +5"<< endl;
    cout<< "/t/tElocuencia +10"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Músico."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tAbstracción 6+"<< endl;
    cout<< "/t/tCarisma 6+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tCultura +10"<< endl;
    cout<< "/t/tElocuencia +10"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Estafador."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tCalculo 6+"<< endl;
    cout<< "/t/tCarisma 6+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tElocuencia +20"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Cocinero."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tCalculo 8+"<< endl;
    cout<< "/t/tAbstracción 8+"<< endl;
    cout<< "/t/tTemplanza 8+"<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tCocina +5"<< endl;
    cout<< "/t/tArma blanca +5"<< endl;
    cout<< "/t/tVeneno +5"<< endl;
    cout<< "/t/tQuemadura +5"<< endl;
    cout<< "/t/tAlcohol +5"<< endl;
    cout<< "------*------"<< endl;
    cout<< "Donnadie."<< endl;
    cout<< "/tRequisitos:"<< endl;
    cout<< "/t/tNada."<< endl;
    cout<< "/tEfectos:"<< endl;
    cout<< "/t/tVeneno +5."<< endl;
    cout<< "/t/tHipotermia +5."<< endl;
    cout<< "/t/tQuemaduras +5."<< endl;
    cout<< "/t/tAlcohol +5."<< endl;

    system("pause");
    system("cls");

}


void Mostrar_ficha_completa(struct caracteristicas ficha_car, struct principales ficha_pri, struct secundarias ficha_sec){

    cout<< "Caracteristicas: "<< endl;
    cout<< "Nombre: "<< ficha_car.nombre<< endl;
    cout<< "Descripcion: "<< ficha_car.descripcion<< endl;
    cout<< "Genero: "<< ficha_car.genero<< endl;
    cout<< "Edad: "<< ficha_car.edad<< endl;
    cout<< "Titulo: "<< ficha_car.titulo<< endl;
    cout<< endl<< endl;

    cout<< "Stats principales: ";
    cout<< "Resistencia: "<< ficha_pri.recistencia<< endl;
    cout<< "Fuerza: "<< ficha_pri.fuerza<< endl;
    cout<< "Destreza: "<< ficha_pri.destreza<< endl;
    cout<< "Persepcion: "<< ficha_pri.persepcion<< endl;
    cout<< "Calculo: "<< ficha_pri.calculo<< endl;
    cout<< "Abtraccion: "<< ficha_pri.abstraccion<< endl;
    cout<< "Carisma: "<< ficha_pri.carisma<< endl;
    cout<< "Templanza: "<< ficha_pri.templanza<< endl;
    cout<< "Sigilo: "<< ficha_pri.sigilo<< endl;
    cout<< "Suerte: "<< ficha_pri.suerte<< endl;
    cout<< endl<< endl;

    cout<< "Stats secundarias:"<< endl;
    cout<< "Vitalidad: "<<ficha_sec.vitalidad << endl;
    cout<< "Estamina: "<<ficha_sec.estamina << endl;
    cout<< "Aptitudes fisicas:"<< endl;
    cout<< "Correr: "<<ficha_sec.correr << endl;
    cout<< "Esquivar: "<<ficha_sec.esquivar << endl;
    cout<< "Parkour: "<<ficha_sec.parkour << endl;
    cout<< "Aptitudes:"<< endl;
    cout<< "Medicina: "<<ficha_sec.medicina << endl;
    cout<< "Ingenieria: "<<ficha_sec.ingenieria << endl;
    cout<< "Cerrajeria: "<<ficha_sec.cerrajeria << endl;
    cout<< "Informatica: "<<ficha_sec.informatica << endl;
    cout<< "Quimica: "<<ficha_sec.quimica << endl;
    cout<< "Historia: "<<ficha_sec.historia << endl;
    cout<< "Cocina: "<<ficha_sec.cocina << endl;
    cout<< "Cultura: "<<ficha_sec.cultura << endl;
    cout<< "Combate:"<< endl;
    cout<< "Cuerpo a cuerpo: "<<ficha_sec.cuerpo_a_cuerpo << endl;
    cout<< "Armas blancas: "<<ficha_sec.arma_blanca << endl;
    cout<< "Armas contundentes: "<<ficha_sec.armas_contundentes << endl;
    cout<< "Armas de precicion: "<<ficha_sec.armas_de_precicion << endl;
    cout<< "Arrojables: "<<ficha_sec.arrojables << endl;
    cout<< "Tolerancias:"<< endl;
    cout<< "Veneno: "<<ficha_sec.veneno << endl;
    cout<< "Enfermedad: "<<ficha_sec.enfermedad << endl;
    cout<< "Hipotermia: "<<ficha_sec.hipotermia << endl;
    cout<< "Quemaduras: "<<ficha_sec.quemaduras << endl;
    cout<< "Alcohol: "<<ficha_sec.alcohol << endl;
    cout<< "Subterfugio:"<< endl;
    cout<< "Robar: "<<ficha_sec.robar << endl;
    cout<< "Discrecion: "<<ficha_sec.discrecion << endl;
    cout<< "Elocuencia: "<<ficha_sec.elocuencia << endl;
    cout<< "Psicologia:"<< endl;
    cout<< "Cordura: "<<ficha_sec.cordura << endl;
    cout<< "Autocontrol: "<<ficha_sec.autocontrol << endl;

    system("pause");
    system("cls");

}





///////////////////////////////////////////////////////////////////////




struct caracteristicas Ingresar_caracteristicas(){

    struct caracteristicas ficha_x;

    cout<< "Ingresa tus caracteristicas."<< endl<< endl;

    cout<< "Ingresa tu nombre (Maximo 30 caracteres):"<< endl;
    cin.ignore();
    cin.getline(ficha_x.nombre, 30);

    cout<< "Ingresa tu descripcion (Maximo 90 caracteres):"<< endl;
    cin.getline(ficha_x.descripcion, 90);

    cout<< "Ingresa el genero con el que te identificas(Maximo 20 caracteres):"<< endl;
    cin.getline(ficha_x.genero, 20);

    cout<< "Ingresa la edad que tienes:"<< endl;
    cin>> ficha_x.edad;

    system("cls");

    return ficha_x;
}

struct principales Menu_admi_principales(){

    struct principales ficha_x;
        ficha_x.recistencia = 0;
        ficha_x.fuerza = 0;
        ficha_x.destreza = 0;
        ficha_x.persepcion = 0;
        ficha_x.calculo = 0;
        ficha_x.abstraccion = 0;
        ficha_x.carisma = 0;
        ficha_x.templanza = 0;
        ficha_x.sigilo = 0;
        ficha_x.suerte = 0;

    ///char clave_prin[5];
    int claves;
    int puntos;

    int puntos_a_repartir = 40;

    bool key = true;
    bool flag = true;


    while(true){

        cout<< "Ordena tus puntos como desees:"<< endl;

        cout<< "Puntos a repartir: ";
        if(puntos_a_repartir >= 0){
            setColor(BLUE);
            cout<< puntos_a_repartir<< endl<< endl;
        }
        else{
            setColor(RED);
            cout<< puntos_a_repartir<< endl<< endl;
        }
        ///SetColor(WHITE);

        /*<Menu de cadenas de caracteres>

        cout<< "Recistencia(RES): "<< ficha_x.recistencia<< endl;
        cout<< "Fuerza(FUE): "<< ficha_x.fuerza<< endl;
        cout<< "Destreza(DES): "<< ficha_x.destreza<< endl;
        cout<< "Presepcion(PER): "<< ficha_x.persepcion<< endl;
        cout<< "Calculo(CAL): "<< ficha_x.calculo<< endl;
        cout<< "Abstraccion(ABS): "<< ficha_x.abstraccion<< endl;
        cout<< "Carisma(CAR): "<< ficha_x.carisma<< endl;
        cout<< "Templanza(TEM): "<< ficha_x.templanza<< endl;
        cout<< "Sigilo(SIG): "<< ficha_x.sigilo<< endl;
        cout<< "Suerte(SUE): "<< ficha_x.suerte<< endl;
        cout<< "Salir(EXIT)"<< endl<< endl;

        cout<< "Ingresa la clabe de la estadistica que deseas modificar:"<< endl;
        cin>> clave_prin;

        cout<< "Ingresa los puntos que gastaras:"<< endl;
        cin>> puntos;
        system("cls");

        switch(clave_prin){
            case 'RES':
                if((ficha_x.recistencia + puntos) >= 0){
                    ficha_x.recistencia += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'FUE':
                if((ficha_x.fuerza + puntos) >= 0){
                    ficha_x.fuerza += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'DES':
                if((ficha_x.destreza + puntos) >= 0){
                    ficha_x.destreza += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'PER':
                if((ficha_x.persepcion + puntos) >= 0){
                    ficha_x.persepcion += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'CAL':
                if((ficha_x.calculo + puntos) >= 0){
                    ficha_x.calculo += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'ABS':
                if((ficha_x.abstraccion + puntos) >= 0){
                    ficha_x.abstraccion += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'CAR':
                if((ficha_x.carisma + puntos) >= 0){
                    ficha_x.carisma += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'TEM':
                if((ficha_x.templanza + puntos) >= 0){
                    ficha_x.templanza += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'SIG':
                if((ficha_x.sigilo + puntos) >= 0){
                    ficha_x.sigilo += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'SUE':
                if((ficha_x.suerte + puntos) >= 0){
                    ficha_x.suerte += puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 'EXIT':
                if(puntos_a_repartir == 0){
                    return ficha_x;
                }
                else{
                    cout<< "Aun no se a terminado de daministrar todos los puntos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            default:
                cout<< "Clave incorrecta."<< endl;
                system("pause");
                system("cls");
            break;
        }
        */

        cout<< "Recistencia(1): "<< ficha_x.recistencia<< endl;
        cout<< "Fuerza(2): "<< ficha_x.fuerza<< endl;
        cout<< "Destreza(3): "<< ficha_x.destreza<< endl;
        cout<< "Presepcion(4): "<< ficha_x.persepcion<< endl;
        cout<< "Calculo(5): "<< ficha_x.calculo<< endl;
        cout<< "Abstraccion(6): "<< ficha_x.abstraccion<< endl;
        cout<< "Carisma(7): "<< ficha_x.carisma<< endl;
        cout<< "Templanza(8): "<< ficha_x.templanza<< endl;
        cout<< "Sigilo(9): "<< ficha_x.sigilo<< endl;
        cout<< "Suerte(10): "<< ficha_x.suerte<< endl;
        cout<< "Salir(0)"<< endl<< endl;

        cout<< "Ingresa la clabe de la estadistica que deseas modificar:"<< endl;
        cin>> claves;

        cout<< "Ingresa los puntos que gastaras:"<< endl;
        cin>> puntos;
        system("cls");

        switch(claves){
            case 1:
                if((ficha_x.recistencia + puntos) >= 0){
                    ficha_x.recistencia += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 2:
                if((ficha_x.fuerza + puntos) >= 0){
                    ficha_x.fuerza += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 3:
                if((ficha_x.destreza + puntos) >= 0){
                    ficha_x.destreza += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 4:
                if((ficha_x.persepcion + puntos) >= 0){
                    ficha_x.persepcion += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 5:
                if((ficha_x.calculo + puntos) >= 0){
                    ficha_x.calculo += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 6:
                if((ficha_x.abstraccion + puntos) >= 0){
                    ficha_x.abstraccion += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 7:
                if((ficha_x.carisma + puntos) >= 0){
                    ficha_x.carisma += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 8:
                if((ficha_x.templanza + puntos) >= 0){
                    ficha_x.templanza += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 9:
                if((ficha_x.sigilo + puntos) >= 0){
                    ficha_x.sigilo += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 10:
                if((ficha_x.suerte + puntos) >= 0){
                    ficha_x.suerte += puntos;
                    puntos_a_repartir -= puntos;
                }
                else{
                    cout<< "Los principales no pueden ser negativos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 0:
                if(puntos_a_repartir == 0){
                    return ficha_x;
                }
                else{
                    cout<< "Aun no se a terminado de daministrar todos los puntos."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            default:
                cout<< "Clave incorrecta."<< endl;
                system("pause");
                system("cls");
            break;
        }
    }

}

void Menu_elegir_titulo(struct caracteristicas ficha_car, struct principales ficha_pri, struct secundarias ficha_sec){

    int opcion;

    bool key = true;

    while(key){

        cout<< "Elige entre los titulos que se te ofresen."<< endl<< "El titulo que elijas te daran distintas ventajas."<< endl;

        if((ficha_pri.fuerza >= 5) && (ficha_pri.destreza >= 5) && (ficha_pri.persepcion >= 5)){
            cout<< "1) Soldado."<< endl;
        }
        if((ficha_pri.fuerza >= 6) && (ficha_pri.destreza >= 6) && (ficha_pri.templanza >= 4)){
            cout<< "2) Artista marcial."<< endl;
        }
        if((ficha_pri.destreza >= 6) && (ficha_pri.sigilo >= 6)){
            cout<< "3) Asesino."<< endl;
        }
        if((ficha_pri.destreza >= 4) && (ficha_pri.sigilo >= 4) && (ficha_pri.carisma >= 4)){
            cout<< "4) Ladrón."<< endl;
        }
        if((ficha_pri.destreza >= 4) && (ficha_pri.calculo >= 4) && (ficha_pri.carisma >= 5)){
            cout<< "5) Medico."<< endl;
        }
        if((ficha_pri.destreza >= 4) && (ficha_pri.calculo >= 5) && (ficha_pri.templanza >= 5)){
            cout<< "6) Medico de guerra."<< endl;
        }
        if((ficha_pri.calculo >= 5) && (ficha_pri.abstraccion >= 5) && (ficha_pri.carisma >= 5)){
            cout<< "7) Erudito."<< endl;
        }
        if((ficha_pri.abstraccion >= 6) && (ficha_pri.carisma >= 6)){
            cout<< "8) Músico."<< endl;
        }
        if((ficha_pri.calculo >= 6) && (ficha_pri.carisma >= 6)){
            cout<< "9) Estafador."<< endl;
        }
        if((ficha_pri.calculo >= 8) && (ficha_pri.abstraccion >= 8) && (ficha_pri.templanza >= 8)){
            cout<< "10) Cocinero."<< endl;
        }

        cout<< "11) Donnadie."<< endl;
        cout<< "12) Info."<< endl;

        cout<< "Cual es tu pasado?: ";
        cin>> opcion;

        system("cls");

        ///<Falta ingresar los nombres de los titulos.>

        switch(opcion){
            case 1:
                if((ficha_pri.fuerza >= 5) && (ficha_pri.destreza >= 5) && (ficha_pri.persepcion >= 5)){
                    ///1) Soldado.
                    ficha_sec.arma_blanca += 10;
                    ficha_sec.armas_contundentes += 5;
                    ficha_sec.armas_de_precicion += 5;
                    ///ficha_car.titulo = 'Soldado';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 2:
                if((ficha_pri.fuerza >= 6) && (ficha_pri.destreza >= 6) && (ficha_pri.templanza >= 4)){
                    ///2) Artista marcial.
                    ficha_sec.esquivar += 10;
                    ficha_sec.cuerpo_a_cuerpo += 10;
                    ///ficha_car.titulo = 'Artista marcial';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 3:
                if((ficha_pri.destreza >= 6) && (ficha_pri.sigilo >= 6)){
                    ///3) Asesino.
                    ficha_sec.arma_blanca += 5;
                    ficha_sec.armas_de_precicion += 5;
                    ficha_sec.discrecion += 10;
                    ///ficha_car.titulo = 'Asesino';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 4:
                if((ficha_pri.destreza >= 4) && (ficha_pri.sigilo >= 4) && (ficha_pri.carisma >= 4)){
                    ///4) Ladrón.
                    ficha_sec.robar += 10;
                    ficha_sec.discrecion += 5;
                    ficha_sec.elocuencia += 5;
                    ///ficha_car.titulo = 'Ladrón';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 5:
                if((ficha_pri.destreza >= 4) && (ficha_pri.calculo >= 4) && (ficha_pri.carisma >= 5)){
                    ///5) Medico.
                    ficha_sec.medicina += 5;
                    ficha_sec.quimica += 10;
                    ficha_sec.enfermedad += 5;
                    ///ficha_car.titulo = 'Medico';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 6:
                if((ficha_pri.destreza >= 4) && (ficha_pri.calculo >= 5) && (ficha_pri.templanza >= 5)){
                    ///6) Medico de guerra.
                    ficha_sec.medicina += 10;
                    ficha_sec.enfermedad += 5;
                    ficha_sec.autocontrol += 5;
                    ///ficha_car.titulo = 'Medico de guerra';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 7:
                if((ficha_pri.calculo >= 5) && (ficha_pri.abstraccion >= 5) && (ficha_pri.carisma >= 5)){
                    ///7) Erudito.
                    ficha_sec.historia += 5;
                    ficha_sec.cultura += 5;
                    ficha_sec.elocuencia += 10;
                    ///ficha_car.titulo = 'Erudito';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 8:
                if((ficha_pri.abstraccion >= 6) && (ficha_pri.carisma >= 6)){
                    ///8) Músico.
                    ficha_sec.cultura += 10;
                    ficha_sec.elocuencia += 10;
                    ///ficha_car.titulo = 'Músico';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 9:
                if((ficha_pri.calculo >= 6) && (ficha_pri.carisma >= 6)){
                    ///9) Estafador.
                    ficha_sec.elocuencia += 20;
                    ///ficha_car.titulo = 'Estafador';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 10:
                if((ficha_pri.calculo >= 8) && (ficha_pri.abstraccion >= 8) && (ficha_pri.templanza >= 8)){
                    ///10) Cocinero.
                    ficha_sec.cocina += 5;
                    ficha_sec.arma_blanca += 5;
                    ficha_sec.veneno += 5;
                    ficha_sec.quemaduras += 5;
                    ficha_sec.alcohol += 5;
                    ///ficha_car.titulo = 'Cocinero';
                    key = false;
                }
                else{
                    cout<< "Opcion invalida."<< endl;
                    system("pause");
                    system("cls");
                }
            break;
            case 11:
                ///11) Donnadie.
                ficha_sec.veneno += 5;
                ficha_sec.hipotermia += 5;
                ficha_sec.quemaduras += 5;
                ficha_sec.alcohol += 5;
                ///ficha_car.titulo = 'Donnadie';
                key = false;
            break;
            case 12:
                ///12) info.
                Mostrar_informacion_titulos();
            break;
            default:
                cout<< "Opcion invalida."<< endl;
                system("pause");
                system("cls");
            break;
        }
    }

}


#endif // MENUS_H_INCLUDED
