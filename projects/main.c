#include <stdio.h>
#include "static_libraries/sum.h"

int main(void)
{
    int x = 5;
    int y = 8;
    int result;
    result = sum(x, y);
    printf("result:%d\n",result);
    return (0);
}