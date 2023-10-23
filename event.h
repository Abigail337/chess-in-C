#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
#include <stdio.h>
#include <SDL.h>

// CAPTURA OS COMANDOS DO MOUSE
/*SDL_Event é uma união de todas as estruturas de eventos usadas na SDL*/

    int captura_evento();
    static int linhaOrigem = -1;
    static int colunaOrigem = -1;
    SDL_Event evento;

#endif // EVENT_H_INCLUDED
