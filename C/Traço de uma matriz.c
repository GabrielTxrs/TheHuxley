#include <stdio.h>

int main() {
    int ordem, i, j;
    float matriz[100][100], soma = 0.0;

    // Entrada da ordem da matriz
    printf("");
    scanf("%d", &ordem);

    // Entrada dos elementos da matriz
    printf("");
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    for (i = 0; i < ordem; i++) {
        soma += matriz[i][i];
    }
    
    // Impressão do resultado
    printf("tr(A) = ");
    for (i = 0; i < ordem; i++) {
        printf("(%.2f)", matriz[i][i]);
        if (i != ordem - 1) {
            printf(" + ");
        }
    }
    printf(" = %.2f\n", soma);

    return 0;
}
