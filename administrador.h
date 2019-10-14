#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED


struct secundarias administrar_secundarias(struct principales ficha_pri){

    struct secundarias ficha_x;

    ficha_x.vitalidad = ficha_pri.resistencia * 5;
    ficha_x.estamina = ficha_pri.resistencia * 3 + ficha_pri.destreza * 2;
    ///Aptitudes fisicas
    ficha_x.correr = ficha_pri.resistencia * 2 + ficha_pri.destreza * 3;
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
    ficha_x.armas_de_precicion = ficha_pri.presepcion * 5;
    ficha_x.arrojables = ficha_pri.fuerza * 2 + ficha_pri.presepcion * 3;
    ///Tolerancias;
    ficha_x.veneno = ficha_pri.resistencia * 5;
    ficha_x.enfermedad = ficha_pri.resistencia * 5;
    ficha_x.hipotermia = ficha_pri.resistencia * 5;
    ficha_x.quemaduras = ficha_pri.resistencia * 5;
    ficha_x.alcohol = ficha_pri.resistencia * 5;
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
    cout<< "Resistencia: "<< ficha_pri.resistencia<< endl;
    cout<< "Fuerza: "<< ficha_pri.fuerza<< endl;
    cout<< "Destreza: "<< ficha_pri.destreza<< endl;
    cout<< "Persepcion: "<< ficha_pri.presepcion<< endl;
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


#endif // MENUS_H_INCLUDED
