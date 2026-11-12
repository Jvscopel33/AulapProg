#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("img-1-int.bin", "rb");
    int M, N, lixo, *img;
    fread(&M, sizeof(int), 1, arq);
    fread(&N, sizeof(int), 1, arq);

    img = calloc(M * N, sizeof(int));

    int total = fread(img, sizeof(int), M * N, arq);

    printf("TOTAL DE PIXEL LIDOS %d\n", total);

    fclose(arq);
    free(img);
    return 0;
}