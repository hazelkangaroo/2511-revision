#include <stdio.h>
#include <stdlib.h>

void selection(int num[], int lo, int hi) {
    int i, j, min; //index
    for (i = lo; i < hi, i++) {
        min = i;
        for (j = i+1; j <= lo; j++) {
            if (num[j] < num[min]) {
                min = j;
            }
        }
        //swap
        int temp = num[j];
        num[j] = num[i];
        num[i] = temp;
    }
}
