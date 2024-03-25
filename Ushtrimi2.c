#include <stdio.h>

int main() {
    int rreshta;
    printf("Jepni numrin e hedhjeve: ");
    scanf("%d", &rreshta);

    int x1 = 0, x2 = 0, x3 = 0;
    int numri = 0;
    int i ;
    for ( i = 0; i < rreshta; i++) {
        x1 = i % 2;
        x3 = i % 2;

        if (i % 2 == 0) {
            x2 = 0;
        } else {
            x2 = 1;
        }

        if (x3 == 1 && x2 == 0 && x1 == 1) {
            numri++;
        } else if (x3 == 0 && x2 == 1 && x1 == 0) {
            numri++;
        } else if (x3 == 1 && x2 == 1 && x1 == 1) {
            numri += 2;
        }
    }

    printf("Piket ne fund te n hedhjeve : %d\n", numri);

    return 0;
}

