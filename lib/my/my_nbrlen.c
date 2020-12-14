#include "my.h"

int my_nbrlen(int n)
{
    int count;

    count = 0;
    while (n != 0){
        n = n / 10;
        count++;
    }
    return count;
}
