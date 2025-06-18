#include <stdio.h>

    void movimentoTorre(int quantidade) {
        while (quantidade > 0){
        printf("Direita\n");
        quantidade--;
    }
    }
    void movimentoBispo(int quantidade) {
        int quantidade2;
        for (quantidade; quantidade>0; quantidade--){
            printf("Cima, ");
            quantidade2 = quantidade;
            while (quantidade2 > 0) {
                printf("Direita\n");
                quantidade2=0;
            }
        }
    }
    void movimentoRainha(int quantidade) {
        while (quantidade > 0){
        printf("Esquerda\n");
        quantidade--;
    }
}
    void movimentoCavalo(int quantidade) {
        while (quantidade > 0){
            for (int i = 1; i<=2; i++) {
                printf("Cima, ");
                if (i==2){
                    int j=0;
                    while (j<1){
                        printf("Direita\n");
                        j++;
                    }
                }
            }
        quantidade--;
        }
    }

int main(){
    // movimentação da Torre
    printf("Movimentando a Torre:\n");
    movimentoTorre(5);

    // movimentação do Bispo
    printf("\nMovimentando o Bispo:\n");
    movimentoBispo(5);

    // movimentação da Rainha
    printf("\nMovimentando a Rainha:\n");
    movimentoRainha(8);
    // movimento do Cavalo
    printf("\nMovimentando o Cavalo:\n");
    movimentoCavalo(3);

    return 0;
}