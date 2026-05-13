#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros[] = {2, 4, 6, 8, 10};
    int *ptr;
    ptr = &numeros[0];
    //printf("%d\n", *ptr);

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
        printf("%d\n", *(ptr + i));
    }
    return 0;
}