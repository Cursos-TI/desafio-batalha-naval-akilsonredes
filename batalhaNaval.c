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
int k, l, m, n, o, p;
char variavel;



// Preenchendo a Matriz com Zeros

for (int i = 0; i < 10; i++){

    for (int j = 0; j < 10; j++){

        tabuleiro [i][j] = 0;
    }
}


printf("Digite (1) para Cone \n");
printf("Digite (2) para Cruz \n");
printf("Digite (3) para Losango \n");
printf("Digite a Opção:");
scanf("%c", &variavel);

 switch (variavel)
 {
    case '1':
    
    //Colocando o barco na Forma de Cone

    printf("Escolha a linha do 1º navio (Cone): ");
    scanf("%d", &k);
    printf("Escolha a coluna do 1º navio (Cone): ");
    scanf("%d", &l);

    for(int i = 0; i < 1; i++){
      tabuleiro[k][l] = 3;
        for (int j = 0; j < 3; j++){
    tabuleiro[k+1][l-1+j] = 3;
            for (int w = 0; w < 5; w++){
            tabuleiro[k+2][l-2+w] = 3;
    }
}
}
    break;
 
    case '2':

    //Colocando o barco na Forma de Cruz

    printf("Escolha a linha do 2º navio (Cruz): ");
    scanf("%d", &m);
    printf("Escolha a coluna do 2º navio (Cruz): ");
    scanf("%d", &n);

    for(int i = 0; i < 3; i++){
      tabuleiro[m+i][n] = 4;
        if( i == 1){
            for (int j = 0; j < 5; j++){
                tabuleiro[m+i][n-2+j] = 4;
        }
    }
   
   }
    break;
 
 case '3':
    //Colocando o barco na Forma de Losango

    printf("Escolha a linha do  navio (Losango): ");
    scanf("%d", &o);
    printf("Escolha a coluna do navio (Losango): ");
    scanf("%d", &p);

    for(int i = 0; i < 3; i++){
        tabuleiro[o+i][p] = 4;
        if( i == 1){
            for (int j = 0; j < 3; j++){
                tabuleiro[o+i][p-1+j] = 4;
        }
    }
   
   }
 break;

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
