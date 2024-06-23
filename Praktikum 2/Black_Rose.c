#include <stdio.h>

void Black_Rose(char *input){
    int i;
    int ar [6];
    read_six_numbers(input, ar);
    if(ar[0] != 1){
        illegal_move();
    }
    for (int i = 1; i < 6; i++){
        if (ar[i] != ar[i-1] * 2){
            illegal_move();
        }
    }
    return;
}

//Answer: 1 2 4 7 28 33