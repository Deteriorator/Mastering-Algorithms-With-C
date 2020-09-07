/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    pointer.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.09.07   23:22
 *-----------------------------------------------------------------------------
 * @Change:   2020.09.07
 *-----------------------------------------------------------------------------
*/

#include "pointer.h"
#include <stdlib.h>

int f(int **iptr) {
    int a = 10;
    *iptr = &a;
    return 0;
}

int g(int **iptr) {
    if ((*iptr = (int *)malloc(sizeof(int))) == NULL)
        return -1;
    return 0;
}
