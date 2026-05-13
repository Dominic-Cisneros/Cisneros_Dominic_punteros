#include <stdio.h>

int main() {
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++) {
        printf("vocales[%d] = %c\n", i, vocales[i]);
    }

    return 0;
}