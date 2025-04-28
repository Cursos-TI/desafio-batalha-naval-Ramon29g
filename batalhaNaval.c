#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define CODIGO_NAVIO 3
#define CODIGO_AGUA 0
#define CODIGO_HABILIDADE 5
#define TAMANHO_HABILIDADE 5

//Função para exobiro tabuleiro com simbolos
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("=== TABULEIRO ===\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == CODIGO_AGUA) printf("~ ");
            else if (tabuleiro[i][j] == CODIGO_NAVIO) printf("N ");
            else if (tabuleiro[i][j] == CODIGO_HABILIDADE) printf("* ");
        }
            printf("\n");
        }
    }
}
//Cria matriz de habilidade em formato de cone
void criarHabilidadeCone(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i< TAMANHO_HABILIDADE; i++) {
        for( int j  = 0; j < TAMANHO_HABILIDADE; j++) {
            int meio = TAMANHO_HABILIDADE / 2;
            matriz[i][j] = (j >= meio - i && j <=meio + i) ? 1 : 0;
        }
    }
}
// Cria matriz de habilidade em formato de cruz 
void  criarHabilidadeCruz(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int meio = TAMANHO_HABILIDADE / 2; 
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            matriz[i][j] = (i == meio || j == meio) ? 1 : 0 ;
        }
    }
}
}



    return 0;
}
