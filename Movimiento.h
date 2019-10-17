#ifndef MOVIMIENTO_H_INCLUDED
#define MOVIMIENTO_H_INCLUDED



void mover(char movimiento, MAPA &map_game, AVATAR pj){

    int y, x;

    switch(movimiento){

        case 'w':
            x=0;
            y=1;

        break;

        case 's':
            x=0;
            y=-1;
        break;

        case 'a':
            x=-1;
            y=0;
        break;

        case 'd':
            x=1;
            y=0;
        break;
    }

    map_game.borrar_caracter(pj.gets_eje_x_ext(), pj.gets_eje_y_ext(), pj.gets_eje_x_int(), pj.gets_eje_y_int());

    switch (map_game.gets_pocicion(pj.gets_eje_x_ext() + x, pj.gets_eje_y_ext() + y, pj.gets_eje_x_int(), pj.gets_eje_y_int())){
        case ' ':
            pj.sets_eje_x_ext(pj.gets_eje_x_ext()+ y);
            pj.sets_eje_y_ext(pj.gets_eje_y_ext()+ x);

            map_game.imprimir_caracter(pj.gets_eje_x_ext(), pj.gets_eje_y_ext(), pj.gets_eje_x_int(), pj.gets_eje_y_int(), pj.gets_caracter());
        break;
        case '^':

        break;
        case 'x':
            ///
        break;
    }



}

#endif // MOVIMIENTO_H_INCLUDED
