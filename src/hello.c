#include <stdio.h>
#include "hello.h"
#include "api.h"


int num3 = 3;

void my_printf(MY_NUM in)
{
    int num4 = 4;
    printf("%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d\n", in.num1, in.num2);
}