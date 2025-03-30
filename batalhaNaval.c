#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro [10][10];
char titulo [10] = {'A', 'B', 'C', 'D', 'E','F', 'G', 'H', 'I', 'J' };
int k, l, m, n,ddc1, ddc2, ddb1, ddb2;



// Preenchendo a Matriz com Zeros

for (int i = 0; i < 10; i++){

    for (int j = 0; j < 10; j++){

        tabuleiro [i][j] = 0;
    }
}

//Colocando o 1º barco na Horizontal Para a Diretita

printf("Escolha a linha do 1º navio: ");
scanf("%d", &k);
printf("Escolha a coluna do 1º navio: ");
scanf("%d", &l);

for(int i = 0; i < 3; i++){
    
    tabuleiro[k][l+i] = 3;
}

//Colocando o 2º barco na Vertical Para Baixo

printf("Escolha a linha do 2º navio: ");
scanf("%d", &m);
printf("Escolha a coluna do 2º navio: ");
scanf("%d", &n);

for(int i = 0; i < 3; i++){
    
    tabuleiro[m+i][n] = 4;
}

//Colocando o 3º barco na Diagonal Para Baixo Direita

printf("Escolha a linha do 3º navio: ");
scanf("%d", &ddb1);
printf("Escolha a coluna do 3º navio: ");
scanf("%d", &ddb2);

tabuleiro [ddb1][ddb2] = 7;

for(int i = 0; i < 3; i++){
        
    tabuleiro[ddb1+i][ddb2+i] = 7;
}

//Colocando o 4º barco na Diagonal Para Cima Direita

printf("Escolha a linha do 4º navio: ");
scanf("%d", &ddc1);
printf("Escolha a coluna do 4º navio: ");
scanf("%d", &ddc2);

tabuleiro [ddc1][ddc2] = 6;

for(int i = 0; i < 3; i++){
        
    tabuleiro[ddc1-i][ddc2+i] = 6;
}

//Imprimindo os títulos das Colunas
printf("  ");
for (int i = 0; i < 10; i++){
    printf("  %c", titulo[i]);
}

//Imprimindo o Tabuleiro Completo

printf("\n");

for (int i = 0; i < 10; i++){
    printf("0%d ", i+1);
    for (int j = 0; j < 10; j++){
        printf("  %d", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;

}
