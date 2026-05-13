#include <stdio.h>

int main() {
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;
    ptr = &vocales[0];

    *(ptr+4) = 'x';

    for (int i = 0; i < 5; i++) {
        printf("vocales[%d] = %c %c\n", i, *(ptr + i), *(ptr + i));
    }

    return 0;
}