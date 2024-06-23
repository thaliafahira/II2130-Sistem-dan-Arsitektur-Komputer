#include <stdio.h>

extern void illegal_move(); 

int func4(int a, int b) {
    if (b >= 0) {
        return a * func4(a, b - 1);
    }
    return 1;
}

int Sky_Street(char input1, char input2) {
    int numScanned, value1, value2;

    numScanned = sscanf(input1, "%d %d", &value1, &value2);

    if (numScanned != 2) {
        illegal_move(); 
        return;
    }

    if (func4(7, value2) != 2401) {
        illegal_move(); 
        return;
    }

    return;
}

// Answer : 4 24