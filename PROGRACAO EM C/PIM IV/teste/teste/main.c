#include <stdio.h>
#include <stdlib.h>

char* vet(int, int);

int main(int argc, char** argv) {
    int tamanho = 4;
    int valorInicial = 10;
    char* ptr = vet(tamanho, valorInicial);

    /*for (int i = 0; i < tamanho; i++)
        printf("Valor na posicao %d: %d\n", i, ptr[i]);
    free(ptr);*/
    printf("O valor total e: %s\n", vet);
    free(ptr);
}

char* vet(int tamanho, int valorInicial) {
    char *ptr = malloc(tamanho * sizeof(char)); // aqui você deve alocar memória na heap, e não na stack, para que ela possa ser acessada em outro escopo
    for (int i = 0; i < tamanho; i++)
        ptr[i] = valorInicial;
    return ptr;
}
