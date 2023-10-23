#include "event.h"
#include <stdio.h>
#include <SDL.h>

// CAPTURA OS COMANDOS DO MOUSE
/*SDL_Event é uma união de todas as estruturas de eventos usadas na SDL*/
int captura_evento()
{
    int x=SDL_PollEvent(&evento);
    if(evento.type==SDL_QUIT)
    exit(1);
    //verifica se o usuario apertou a tecla do mouse:
    if(evento.type==SDL_MOUSEBUTTONDOWN)
    {
        int coluna=evento.motion.x/80; //resolucão da tela na orientação x=640.Como são oito linhas,640/8=80;
        int linha=evento.motion.y/60; //resolucão da tela na orientação y=480.Como são oito linhas,480/8=60;
        /*if atribui o primeiro clique no mouse na posição de origem da peça na janela da SDL*/
        if(linhaOrigem == -1|| colunaOrigem==-1)
        {

            linhaOrigem=linha;
            colunaOrigem=coluna;
        }
        else
            {
            /*após o usuário apertar na posição de destino, chama-se a função MoverPeça*/
            if(MoverPeca(linhaOrigem,colunaOrigem,linha,coluna) == -5){
                exit(1);
            }
            /*Apos a chamada da função atribui-se -1 a linhaorigem e colunaOrigem para esperar um novo clique do usuario*/
            linhaOrigem=-1;
            colunaOrigem=-1;
            }
        printf("linha: %d coluna: %d\n", linha,coluna);
    }
    return 1;
}

