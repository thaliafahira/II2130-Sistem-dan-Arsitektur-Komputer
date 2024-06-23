#include <stdio.h>

void Metropolis(char *inp)
{
    int a, c, res;
    char b, key;

    res = sscanf(inp, "%d %c %d", &a, &b, &c);

    if (res < 3) illegal_move();

    switch (a) {
    case 0:
        key = '';
        if (c != ) 
        {
            illegal_move();
            key = '';
        }
        break;
    case 1:
        key = '';
        if (c != ) 
        {
            illegal_move();
            key = '';
        }
        break;
        break;
    case 2:
        key = 'a';
        if (c != 0x27B) // 0x27B = 635
        {
            illegal_move();
            key = 'a';
        }
        break;
    case 3:
       key = '';
        if (c != ) 
        {
            illegal_move();
            key = '';
        }
        break;
        break;
    case 4:
        key = '';
        if (c != ) 
        {
            illegal_move();
            key = '';
        }
        break;
        break;
    case 5:
        key = '';
        if (c != ) 
        {
            illegal_move();
            key = '';
        }
        break;
    case 6:
        if (c != ) 
        {
            illegal_move();
            goto L19;
        }
LAB_0001187e:
    illegal_move();

    default:
switchD_000117b6_caseD_8:
    illegal_move();
            key = 'q';
            break;
    case 7:
L19:
    
    if (c != ) goto LAB_0001187e;
        goto switchD_000117b6_caseD_8;
    }
    if (b != key) illegal_move();
}

// Answer : 2 a 635