#include<stdio.h>
#include <stdbool.h>

int somarLinha (int L, int C, int a[L][C], int linha){
    //Soma os elementos de uma linha de uma matriz
    int j, soma = 0;
    for (j=0; j<C; j++)
        soma = soma + a[linha][j]; 
        
    return soma;
}

int somarColuna (int L, int C, int a[L][C], int coluna){
    //Soma os elementos de uma coluna de um matriz
    int i, soma = 0;
    for (i=0; i<L; i++)
        soma = soma = a[i][coluna];
        
    return soma;
}

void busca(int L, int C, int a[L][C], int procurado){
    //Busca um item na matriz e se não existir ele manda um "Nao achei"
    int i, j;
    bool achei = false;
    for (i=0; i<L; i++)
        for (j=0; j<C; j++)
            if(a[i][j] == procurado){
                printf("Achei na coordenada (%d, %d)\n", i, j);
                achei = true;
            }
        if (!achei) printf("Nao achei!");
}

void soma(int L, int C, int a[L][C], int b[L][C], int c[L][C]){
    //Soma matrizes
    int i, j;
    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
        c[i][j] = a[i][j] + b[i][j];
}

 int somaDiagonalPrincipal(int L, int a[L][L]){  
     //Soma a diagonal principal
     int i, soma = 0;
     for(i=0; i<L; i++){
         soma = soma + a[i][i];
     }
     return soma;
 }
 
void mostrarMatriz(int L, int C, int a[L][C]){  
    //Mostra matriz
     int l, c;
     for(l=0; l<L; l++){
         for(c=0; c<C; c++){    
             printf( "%d\t", a[l][c]);
         }
         printf("\n");
     }
 }
 
 int somaAcimaDiagonalPrincipal(int L, int C, int a[L][L]){
     //Soma acima da diagonal principal
     int i, j, soma = 0;
     for(i=0; i<L; i++)
        for(j=0; j<C; j++){
            if(i<j){
                soma = soma + a[i][j];
                printf("(%d, %d)\n", i, j);
            }
        }
    return soma;
 }
 
int main(){

    // matrizes exemplo
    int diagonal[4][4] = {{3, 6, 8, 9}, {4, 2, -1, 5}, {9, 2, -1, 4}, {7, 1, 5, 2}};
    int x[2][2] = {{3,6}, {4,2}};
    int y[2][2] = {{0,1}, {3,-1}};
    int z[2][2];
    int minhoca[3][4] = {{81, 28, 240, 10}, {40, 10, 100, 240}, {20, 180, 110, 35}};
    
    //Operações com soma
    soma(2, 2, x, y, z);
    mostrarMatriz(2, 2, z);
    
    //Operações com diagonal principal
    printf("\n\nA soma da diagonal principal vale %d", somaDiagonalPrincipal(4, diagonal));
    printf("\n\nA soma acima da diagonal principal vale %d", somaAcimaDiagonalPrincipal(4, 4, diagonal));
    
    //Operações com busca
    printf("Buscando o numero 4 \n");
    busca(4,4, diagonal, 4);
     printf("Buscando o numero 3 \n");
    busca(4,4, diagonal, 3);
     printf("Buscando o numero 7 \n");
    busca(4,4, diagonal, 7);
     printf("Buscando o numero -1 \n");
    busca(4,4, diagonal, -1);
     printf("Buscando o numero 99 \n");
    busca(4,4, diagonal, 99);
    
    //Operações com somas de elementos específicos
        mostrarMatriz(3,4,minhoca);
        int maior = 0, i, soma;
        
        //interar as linhas e fazer a soma (a somarLinha retorna um número e fazer o algoritmo de armazenar o maior valor)
        for (i=0; i<3; i++){
        soma = somarLinha(3, 4, minhoca, i);
        if (soma > maior) maior = soma;
    }
    
        //interar as colunas e fazer a soma (a somarColuna retorna um número e fazer o algoritmo de armazenar o maior valor)
    for (i=0; i<4; i++){
        soma = somarColuna(3, 4, minhoca, i);
        if (soma > maior) maior = soma;
    }
    
    printf("\nA maior soma é %d", maior);
    
    return 0;
 }
