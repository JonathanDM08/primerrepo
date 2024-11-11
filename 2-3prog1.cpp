#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 1000000000; i++) {
        for (j = 0; j < 1000000000; j++) {
            // No se ejecuta ninguna sentencia en el bucle interno
        }
    }
    return 0;
}

