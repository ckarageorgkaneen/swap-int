#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "swap-int.h"

int main(void)
{
    int x = 1, 
        y = 5;

    _temp_swap-int(x, y); assert(x == 5 && y == 1);
    _temp_swap-int_by_ptr(&x, &y); assert(x == 1 && y == 5);
    _plus_min_swap-int(x, y); assert(x == 5 && y == 1);
    _plus_min_swap-int_by_ptr(&x, &y); assert(x == 1 && y == 5);
    _alt_plus_min_swap-int(x, y); assert(x == 5 && y == 1);
    _alt_plus_min_swap-int_by_ptr(&x, &y); assert(x == 1 && y == 5);
    _mul_div_swap-int(x, y); assert(x == 5 && y == 1);
    _mul_div_swap-int_by_ptr(&x, &y); assert(x == 1 && y == 5);
    _xor_swap-int(x, y); assert(x == 5 && y == 1);
    _xor_swap-int_by_ptr(&x, &y); assert(x == 1 && y == 5); 

    return EXIT_SUCCESS;
}
