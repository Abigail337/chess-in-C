#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <SDL.h>
#include<conio.h>
#include "event.h"

SDL_Renderer *render=NULL;

char tabuleiro_xadrez[8][8] =
{
        {'t','c','b','q','r','b','c','t'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'T','C','B','Q','R','B','C','T'}
};

// FUNCAO RESPONSAVEL POR PRINTAR AS PECAS NO TABULEIRO E REALIZAR O DESENVOLVIMENTO DO JOGO
int tabuleiro(SDL_Texture *TB,SDL_Texture *TP,SDL_Texture *CB,SDL_Texture *CP,SDL_Texture *BB,SDL_Texture *BP,
              SDL_Texture *QB,SDL_Texture *QP,SDL_Texture *RB,SDL_Texture * RP,SDL_Texture * PB,SDL_Texture * PP)
{
    int linha=0, x=0,y=0;
    int coluna=0;
    int largura_retangulo=80;
    int altura_retangulo=60;
    int altura_img=NULL;
    int largura_img=NULL;

   SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
   SDL_RenderClear(render);

    for (linha=0; linha < 8; linha++)
    {
        for (coluna=0; coluna < 8; coluna++)
        {
            if((linha+coluna)%2==0)

                SDL_SetRenderDrawColor(render,0xFF, 0xFF, 0xFF, 0xFF);
            else
                 SDL_SetRenderDrawColor(render, 50, 105, 105, 105);
            {
                x=coluna*largura_retangulo;
                y=linha*altura_retangulo;
                SDL_Rect retangulo={x,y,largura_retangulo,altura_retangulo};
                SDL_RenderFillRect(render,&retangulo);

                if(tabuleiro_xadrez[linha][coluna]=='T')
                {
                SDL_Texture *img=TB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='t')
                {
                SDL_Texture *img=TP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='C')
                {
                SDL_Texture *img=CB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='c')
                {
                SDL_Texture *img=CP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='B')
                {
                SDL_Texture *img=BB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='b')
                {
                SDL_Texture *img=BP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='Q')
                {
                SDL_Texture *img=QB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='q')
                {
                SDL_Texture *img=QP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='R')
                {
                SDL_Texture *img=RB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                else if(tabuleiro_xadrez[linha][coluna]=='r')
                {
                SDL_Texture *img=RP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                 else if(tabuleiro_xadrez[linha][coluna]=='P')
                {
                SDL_Texture *img=PB;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
                 else if(tabuleiro_xadrez[linha][coluna]=='p')
                {
                SDL_Texture *img=PP;
                SDL_QueryTexture(img,NULL,NULL,&largura_img,&altura_img);
                SDL_Rect retangulo_orig={0,0, largura_img,altura_img};
                SDL_RenderCopy(render, img,&retangulo_orig,&retangulo);
                }
            }
        }
    }
    SDL_RenderPresent(render);
    SDL_RenderClear(render);
    return 1;
}
//INICIALIZA A SDL
int inicializar_sdl(SDL_Window *janela){
    int i=0;
    printf("Inicializando SDL\n");
    while(i<10)
    {
        Sleep(40);
        printf(".");
        i++;
    }
    // Inicializar padrões
    if((SDL_Init(SDL_INIT_VIDEO)==-1))
        {
        printf("Não foi possível inicializar a SDL: %s.\n", SDL_GetError());
        exit(1);
        }
    else
    printf("\nSDL inicializado.\n");

    //criando uma janela
    /*SDL_CreateWindow retorna um ponteiro para uma janela correspondente aos parâmetros passados,
    que são o título da janela, posição x e y da janela, largura, altura e quaisquer sinalizadores SDL_ necessários.
    SDL_WINDOWPOS_CENTERED centralizará a janela em relação à tela*/

    janela=SDL_CreateWindow("Xadrez",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,SDL_WINDOW_SHOWN);

    render = SDL_CreateRenderer(janela, -1, 0);

            if (render==0)
            {
              printf("\nErro ao renderizar a janela: %s\n",SDL_GetError());
                return 1;
            }

    return 0;
}

// CARREGA AS IMAGENS
SDL_Texture * imagem_pecas(const char *nomeArquivo)
{
    //cria um ponteiro para criar a textura e carrega-la
    SDL_Texture *imagem = NULL;
    SDL_Surface*sur_imagem=SDL_LoadBMP(nomeArquivo);
    if(sur_imagem==NULL){
        printf("nao foi possivel carregar a imagem: %s\n",SDL_GetError());
    }
    else
        printf("imagem carregada com sucesso\n");

    imagem=SDL_CreateTextureFromSurface(render, sur_imagem);

    SDL_FreeSurface(sur_imagem);

    return imagem;
}

//FUNCAO RESPONSAVEL POR MOVIMENTAR AS PEÇAS NO TABULEIRO
int MoverPeca(int linha_origem, int coluna_origem, int linha_destino, int coluna_destino)
{
    int mover = 0;
    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    int deslocamento_vertical = abs(linha_destino - linha_origem);
    int deslocamento_horizontal = abs(coluna_destino - coluna_origem);

    if(deslocamento_vertical+deslocamento_horizontal>0)
    {
             if (peca == 'C' || peca == 'c') mover = mover_cavalo(linha_origem,coluna_origem,deslocamento_vertical,deslocamento_horizontal,linha_destino,coluna_destino);
        else if (peca == 'T' || peca == 't') mover = mover_torre(linha_origem,coluna_origem,linha_destino,coluna_destino);
        else if (peca == 'B' || peca == 'b') mover = mover_bispo(linha_origem,coluna_origem,linha_destino,coluna_destino,deslocamento_vertical,deslocamento_horizontal);
        else if (peca == 'Q' || peca == 'q') mover = mover_rainha(linha_origem,coluna_origem,linha_destino,coluna_destino,deslocamento_vertical,deslocamento_horizontal);
        else if (peca == 'R' || peca == 'r') mover = mover_rei(linha_origem,coluna_origem,linha_destino,coluna_destino);
        else if (peca == 'P' || peca == 'p') mover = mover_peao(deslocamento_horizontal,linha_origem,coluna_origem,linha_destino,coluna_destino);
        //toda a função retorna 1 se é possivel mover a peça para a posição de destino, assim mover=1 ou mover=0

        if (mover)
        {
            FILE *fp = fopen("logDoJogo.txt", "a");
            fprintf(fp, "%c %d %d -> %d %d\n", peca, linha_origem, coluna_origem, linha_destino, coluna_destino);
            fclose(fp);

        if (tabuleiro_xadrez[linha_destino][coluna_destino] == 'R'){
            printf("\n PRETA VENCEU! \n");
            return -5;
        }
        if (tabuleiro_xadrez[linha_destino][coluna_destino] == 'r'){
        printf("\n  BRANCA VENCEU! \n");
        return -5;
        }
        tabuleiro_xadrez[linha_destino][coluna_destino] = tabuleiro_xadrez[linha_origem][coluna_origem];
        tabuleiro_xadrez[linha_origem][coluna_origem] = ' ';
        return 1;
        }

        if(mover==0)
        {
        printf("Movimento invalido,tente novamente\n");
         //mensagem_erro();
        }
    }
    return 0;
}
//FUNÇÃO RESPONSAVEL PELA VERIFICAÇÃO DOS MOVIMENTOS NO TABULEIRO
int capturar_pecas(char peca,int linha_destino, int coluna_destino)
{
    if(peca>=65 && peca<=90 && peca!=80)//peças brancas sem o peão
    {
        if(((tabuleiro_xadrez[linha_destino][coluna_destino]>=97)&&(tabuleiro_xadrez[linha_destino][coluna_destino]<=122))
             ||(tabuleiro_xadrez[linha_destino][coluna_destino]==' '))
            return 1;
        else
            return 0;
    }

    else if(peca>=97 && peca<=122 && peca!=112)//peças pretas sem o peão
    {
        if(((tabuleiro_xadrez[linha_destino][coluna_destino]>=65)&&(tabuleiro_xadrez[linha_destino][coluna_destino]<=90))
             ||(tabuleiro_xadrez[linha_destino][coluna_destino]==' '))
            return 1;
        else
            return 0;
    }

    else if(peca==80)//peão branco
    {
        if((tabuleiro_xadrez[linha_destino][coluna_destino]>=97)&&(tabuleiro_xadrez[linha_destino][coluna_destino]<=122))
            return 1;
        else
            return 0;
    }
    else if(peca==112)//peão preto
    {
        if((tabuleiro_xadrez[linha_destino][coluna_destino]>=65)&&(tabuleiro_xadrez[linha_destino][coluna_destino]<=97))
            return 1;
        else
            return 0;
    }
}
//FUNÇÕES PARA MOVIMENTAR AS PECAS NO TABULEIRO
int mover_peao(int deslocamento_horizontal,int linha_origem,int coluna_origem,int linha_destino,int coluna_destino)
{
    int verificar_movimento=0;
    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    if(peca=='P')
    {
        //troca o peao pela rainha
         verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
          if((linha_destino==0) &&(linha_origem - linha_destino == 1)&&(abs(coluna_origem-coluna_destino))==1 && (verificar_movimento==1) && ((tabuleiro_xadrez[linha_destino][coluna_destino]) != 'r'))
            {
                tabuleiro_xadrez[linha_destino][coluna_destino] = 'Q';
                tabuleiro_xadrez[linha_origem][coluna_origem] = ' ';
            }


            if(linha_origem == 6)//verifica se o peao branco está na posição de origem para poder mover duas casas
            {
                if((linha_origem - linha_destino == 1||linha_origem - linha_destino == 2)&&tabuleiro_xadrez[linha_destino][coluna_destino]==' '&&(deslocamento_horizontal == 0))
                    return 1;
                else
                {
                    //verifica a possibilidade de capturar alguma peça adversária na primeira jogada
                    verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
                    if(deslocamento_horizontal==1&&verificar_movimento==1)
                        return 1;
                }

             }

        else
        //Se o peão não está na posição de origem, ocorre a verificação se é possivel movimentar para onde o usuário determinou
        {

          verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
            if((linha_origem < 6)&&(linha_origem - linha_destino == 1)&&tabuleiro_xadrez[linha_destino][coluna_destino]==' '&&(coluna_origem-coluna_destino==0))
                return 1;
            else
                if((linha_origem < 6)&&(linha_origem - linha_destino == 1)&&(abs(coluna_origem-coluna_destino)==1)&&(verificar_movimento==1))
                    return 1;
    }

}
    if(peca=='p')
    {
        //troca o peao pela rainha
        verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
        if((linha_destino==7) &&(linha_destino - linha_origem == 1)&&(abs(coluna_destino-coluna_origem)==1)&&(verificar_movimento==1) && ((tabuleiro_xadrez[linha_destino][coluna_destino]) != 'R'))
            {
                tabuleiro_xadrez[linha_destino][coluna_destino] = 'q';
                tabuleiro_xadrez[linha_origem][coluna_origem] = ' ';
            }


        if(linha_origem == 1)
        {
            if((linha_destino - linha_origem == 1||linha_destino - linha_origem == 2) && (coluna_destino-coluna_origem == 0))
                return 1;
            else
            {
                verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
                if(deslocamento_horizontal==1 && verificar_movimento==1)
                    return 1;
            }
        }
        else
        {
            verificar_movimento=capturar_pecas(peca,linha_destino,coluna_destino);
            if((linha_origem > 1)&&(linha_destino - linha_origem == 1)&&tabuleiro_xadrez[linha_destino][coluna_destino]==' '&&(coluna_destino-coluna_origem==0))
                return 1;
            if((linha_origem > 1)&&(linha_destino - linha_origem == 1)&&(abs(coluna_destino-coluna_origem)==1)&&(verificar_movimento==1))
                return 1;
        }
    }
    return 0;
}

int mover_cavalo(int linha_origem, int coluna_origem,int deslocamento_vertical, int deslocamento_horizontal, int linha_destino, int coluna_destino)
{
    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    int verificar_movimentacao=0;
    //verifica se é possivel mexer o cavalo
    if(((deslocamento_vertical == 2 && deslocamento_horizontal == 1) || (deslocamento_vertical == 1 && deslocamento_horizontal == 2))&&(tabuleiro_xadrez[linha_destino][coluna_destino]==' '))
        return 1;
    else
    {
     verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
     if(((deslocamento_vertical == 2 && deslocamento_horizontal == 1) || (deslocamento_vertical == 1 && deslocamento_horizontal == 2))&&(verificar_movimentacao==1))
         return 1;
    }
        return 0;
}

int mover_torre(int linha_origem, int coluna_origem, int linha_destino, int coluna_destino)
{
    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    int caminhoLivre = 1;
    int verificar_movimentacao=0;

    //movimento para cima
    if(linha_origem-linha_destino>0)
    {
        for(int i = linha_origem - 1; i > linha_destino; i--)
        {
            if(tabuleiro_xadrez[i][coluna_origem] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&((linha_origem==linha_destino)||(coluna_origem==coluna_destino)))
        {
        //move a peça
            return 1;
        }
        else
        {
        //não move a peça
            return 0;
        }
    }

    //movimento para baixo
    if(linha_origem-linha_destino<0)
    {
        for(int i = linha_origem + 1; i < linha_destino; i++)
        {
            if(tabuleiro_xadrez[i][coluna_origem] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&((linha_origem==linha_destino)||(coluna_origem==coluna_destino)))
        {
        //move a peça
            return 1;
        }
        else
        {
        //não move a peça
            return 0;
        }
    }

     //movimento para direita
    if(coluna_origem-coluna_destino<0)
    {
        for(int i = coluna_origem + 1; i < coluna_destino; i++)
        {
            if(tabuleiro_xadrez[linha_origem][i] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&(linha_origem==linha_destino))
        {
        //move a peça
            return 1;
        }
        else
        {
        //não move a peça
            return 0;
        }
    }

    //movimento para esquerda
    if(coluna_origem-coluna_destino>0)
    {
        for(int i = coluna_origem - 1; i > coluna_destino; i--)
        {
            if(tabuleiro_xadrez[linha_origem][i] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&(linha_origem==linha_destino))
        {
        //move a peça
            return 1;
        }
        else
        {
        //não move a peça
            return 0;
        }
    }

    return 0;
}
int mover_bispo(int linha_origem, int coluna_origem, int linha_destino, int coluna_destino, int deslocamento_vertical, int deslocamento_horizontal)
{

    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    int caminhoLivre = 1;
    int verificar_movimentacao=0;
    int auxLin=0, auxCol=0;

    if(deslocamento_vertical==deslocamento_horizontal)
    {
        //movimento para cima e para direita
        if((linha_origem-linha_destino>0)&&(coluna_origem-coluna_destino<0))
        {
            for(auxLin = linha_origem - 1, auxCol = coluna_origem + 1; auxLin > linha_destino, auxCol <coluna_destino; auxLin--, auxCol++)
            {
                if(tabuleiro_xadrez[auxLin][auxCol] != ' ')
                {
                caminhoLivre = 0;
                break;
                }
            }
            verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
            if((caminhoLivre == 1)&&(verificar_movimentacao==1))
            {
            //move a peça
                return 1;
            }
            else
            {
            //não move a peça
                return 0;
            }
        }
        //movimento para cima e para esquerda
        if((linha_origem-linha_destino>0)&&(coluna_origem-coluna_destino>0))
        {
            for(auxLin = linha_origem - 1, auxCol = coluna_origem - 1; auxLin > linha_destino, auxCol >coluna_destino; auxLin--, auxCol--)
            {
                if(tabuleiro_xadrez[auxLin][auxCol] != ' ')
                {
                caminhoLivre = 0;
                break;
                }
            }
            verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
            if((caminhoLivre == 1)&&(verificar_movimentacao==1))
            {
            //move a peça
                return 1;
            }
            else
            {
            //não move a peça
                return 0;
            }
        }
        //movimento para baixo e para direita
        if((linha_origem-linha_destino<0)&&(coluna_origem-coluna_destino<0))
        {
            for(auxLin = linha_origem + 1, auxCol = coluna_origem + 1; auxLin < linha_destino, auxCol < coluna_destino; auxLin++, auxCol++)
            {
                printf("%d %d\n",auxLin,auxCol);
                if(tabuleiro_xadrez[auxLin][auxCol] != ' ')
                {
                caminhoLivre = 0;
                break;
                }
            }
            verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
            if((caminhoLivre == 1)&&(verificar_movimentacao==1))
            {
            //move a peça
                return 1;
            }
            else
            {
            //não move a peça
                return 0;
            }
        }
        //movimento para baixo e para esquerda
        if((linha_origem-linha_destino<0)&&(coluna_origem-coluna_destino>0))
        {
            for(auxLin = linha_origem + 1, auxCol = coluna_origem - 1; auxLin < linha_destino, auxCol > coluna_destino; auxLin++, auxCol--)
            {
                printf("%d %d\n",auxLin,auxCol);
                if(tabuleiro_xadrez[auxLin][auxCol] != ' ')
                {
                caminhoLivre = 0;
                break;
                }
            }
            verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
            if((caminhoLivre == 1)&&(verificar_movimentacao==1))
            {
            //move a peça
                return 1;
            }
            else
            {
            //não move a peça
                return 0;
            }
        }
    }

    return 0;
}

int mover_rainha(int linha_origem,int coluna_origem,int linha_destino,int coluna_destino,int deslocamento_vertical,int deslocamento_horizontal)
{
    int verificar_movimento=0;
    /*movimentacão da rainha é igual a da torre ou do bispo, dependendo do caso. Assim, basta realizar a mesma verificação dos
      movimentos dessas outras peças citadas*/
    if(deslocamento_vertical==deslocamento_horizontal) //movimento igual do bispo
    {
        verificar_movimento=mover_bispo(linha_origem,coluna_origem,linha_destino,coluna_destino,deslocamento_vertical,deslocamento_horizontal);
    }

    else if(deslocamento_vertical==0||deslocamento_horizontal==0) //movimento igual da torre
    {
        verificar_movimento=mover_torre(linha_origem,coluna_origem,linha_destino,coluna_destino);
    }
    if(verificar_movimento)
    {
    return 1;
    }

    return 0;
}

int mover_rei(int linha_origem, int coluna_origem,int linha_destino,int coluna_destino)
{
    char peca = tabuleiro_xadrez[linha_origem][coluna_origem];
    int caminhoLivre = 1;
    int verificar_movimentacao=0;

    //movimento para cima e para baixo
    if(abs(linha_origem-linha_destino)==1)
    {
        for(int i = linha_origem - 1; i >= linha_destino; i--)
        {

            if(tabuleiro_xadrez[i][coluna_origem] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&(abs(linha_origem-linha_destino)==1))
        {
        //move a peça
            return 1;
        }
    }

    //movimento para direita e para esquerda
    else if(abs(coluna_origem-coluna_destino)==1)
    {
        for(int i = coluna_origem - 1; i >= coluna_destino; i--)
        {
            if(tabuleiro_xadrez[linha_origem][i] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&(abs(coluna_origem-coluna_destino)==1))
        {
        //move a peça
            return 1;
        }
    }

    //movimento para diagonal
    else if(abs(linha_origem-linha_destino)==1&&(abs(coluna_origem-coluna_destino)==1))
    {
        int auxLin=0;
        int auxCol=0;
        for(auxLin=linha_origem-1,auxCol=coluna_origem-1;auxLin >= linha_destino,auxCol >= linha_destino; auxLin--,auxCol--)
        {
            if(tabuleiro_xadrez[auxLin][auxCol] != ' ')
            {
            caminhoLivre = 0;
            break;
            }
        }
        verificar_movimentacao=capturar_pecas(peca,linha_destino,coluna_destino);
        if((caminhoLivre == 1)&&(verificar_movimentacao==1)&&(abs(linha_origem-linha_destino)==1))
            {
            //move a peça
                return 1;
            }
    }
    //não move a peça
        return 0;
}
typedef struct
{
    SDL_Texture *imagem;
}Peca;

int main(int argc, char **args)
{
    //cria a janela e verifica a inicialização da SDL
    SDL_Window *janela = NULL;
    SDL_Texture *amg=NULL;
    inicializar_sdl(&janela);
    //chama-se a funcão imagem_peças para carregar as imagens e criar a textura das mesmas
    Peca TB={NULL};
    TB.imagem = imagem_pecas("TP.bmp");

    Peca TP={NULL};
    TP.imagem = imagem_pecas("TB.bmp");

    Peca CB={NULL};
    CB.imagem = imagem_pecas("CP.bmp");

    Peca CP={NULL};
    CP.imagem = imagem_pecas("CB.bmp");

    Peca BB={NULL};
    BB.imagem = imagem_pecas("BP.bmp");

    Peca BP={NULL};
    BP.imagem = imagem_pecas("BB.bmp");

    Peca QB={NULL};
    QB.imagem = imagem_pecas("QP.bmp");

    Peca QP={NULL};
    QP.imagem=imagem_pecas("QB.bmp");

    Peca RB={NULL};
    RB.imagem=imagem_pecas("RP.bmp");

    Peca RP={NULL};
    RP.imagem=imagem_pecas("RB.bmp");

    Peca PB={NULL};
    PB.imagem=imagem_pecas("PP.bmp");

    Peca PP={NULL};
    PP.imagem=imagem_pecas("PB.bmp");

    while(1)
    {
    tabuleiro(TB.imagem,TP.imagem,CB.imagem,CP.imagem,BB.imagem,BP.imagem,QB.imagem,QP.imagem,RB.imagem,RP.imagem,PB.imagem,PP.imagem);
    captura_evento();
    };

    return 0;
}
