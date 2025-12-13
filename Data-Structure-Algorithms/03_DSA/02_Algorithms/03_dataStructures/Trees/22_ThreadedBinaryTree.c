#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>

enum boolean{
    false=0,
    true=1
};

struct thtree{
    enum boolean isleft;
    struct thtree *left;
    int data;
    struct thtree *right;
    enum boolean isright;
};

int main(){

    return 0;
}