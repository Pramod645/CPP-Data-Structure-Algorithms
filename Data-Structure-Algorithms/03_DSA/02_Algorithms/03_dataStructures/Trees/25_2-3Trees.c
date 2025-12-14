#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

struct twothree{
    int count;
    ind data[3];
    struct twothree *child[5];
};