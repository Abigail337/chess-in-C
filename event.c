#include "event.h"
#include <stdio.h>
#include <SDL.h>

// CAPTURA OS COMANDOS DO MOUSE
/*SDL_Event � uma uni�o de todas as estruturas de eventos usadas na SDL*/
int captura_evento()
{
    int x=SDL_PollEvent(&evento);
    if(evento.type==SDL_QUIT)
    exit(1);
    //verifica se o usuario apertou a tecla do mouse:
    if(evento.type==SDL_MOUSEBUTTONDOWN)
    {
        int coluna=evento.motion.x/80; //resoluc�o da tela na orienta��o x=640.Como s�o oito linhas,640/8=80;
        int linha=evento.motion.y/60; //resoluc�o da tela na orienta��o y=480.Como s�o oito linhas,480/8=60;
        /*if atribui o primeiro clique no mouse na posi��o de origem da pe�a na janela da SDL*/
        if(linhaOrigem == -1|| colunaOrigem==-1)
        {

            linhaOrigem=linha;
            colunaOrigem=coluna;
        }
        else
            {
            /*ap�s o usu�rio apertar na posi��o de destino, chama-se a fun��o MoverPe�a*/
            if(MoverPeca(linhaOrigem,colunaOrigem,linha,coluna) == -5){
                exit(1);
            }
            /*Apos a chamada da fun��o atribui-se -1 a linhaorigem e colunaOrigem para esperar um novo clique do usuario*/
            linhaOrigem=-1;
            colunaOrigem=-1;
            }
        printf("linha: %d coluna: %d\n", linha,coluna);
    }
    return 1;
}

