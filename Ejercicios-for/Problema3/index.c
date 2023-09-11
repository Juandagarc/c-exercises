#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    
    for (i = 1; i <= 100; i++) {
        printf("%d-", i);
    }

    for (i = 100; i >= 1; i--) {
        printf("%d-", i);
    }

    for (i = 7; i <= 77; i += 7) {
        printf("%d-", i);
    }

    for (i = 2; i <= 20; i += 3) {
        printf("%d-", i);
    }

    system("PAUSE");
    return 0;
}
