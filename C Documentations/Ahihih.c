#include <stdio.h>

int main() {
    int L, Z, B, A;
    int base = 0, extra = 0, assur = 0;

    if (scanf("%d %d %d %d", &L, &Z, &B, &A) != 4) {
        return 0;
    }

    if (L == 1) {
        if (Z == 1) {
            if (B <= 2) {
                base = 10000;
            } else {
                base = 10000 + ((B - 2) * 3000);
            }
            if (A == 1) assur = 3000;
        } else if (Z == 2) {
            if (B <= 2) {
                base = 20000;
            } else {
                base = 20000 + ((B - 2) * 6000);
                if (B > 10) {
                    extra = 25000;
                }
            }
            if (A == 1) assur = 7000;
        }
    } else if (L == 2) {
        if (Z == 1) {
            if (B > 20) {
                printf("-1\n");
                return 0;
            }
            base = 15000 + ((B - 1) * 5000);
            if (A == 1) assur = 5000;
        } else if (Z == 2) {
            if (B > 10) {
                printf("-1\n");
                return 0;
            }
            base = 30000 + ((B - 1) * 10000);
            if (A == 1) assur = 12000;
        }
    }

    int total = base + extra + assur;
    printf("%d\n", total);

    return 0;
}   