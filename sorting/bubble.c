#include <stdio.h>
#include <stdlib.h>

void bubble(int num[], int lo, int hi) {
    int i,j;
    for (i = lo; i < hi; i++) {
        int nswaps = 0;
        for (j = hi; j > i; j--) {
            if (num[j] < num[j-1]) {
                int tmp = num[j];
                num[j] = num[j-1];
                num[j-1] = tmp;
                nswaps++;
            }
        }
        //sorted
        if (nswaps == 0) {
            break;
        }
    }
}
