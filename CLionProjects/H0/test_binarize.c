#include <stdio.h>
#include "binarize.h"

int main() {
    unsigned long u1 = 1608637542;
    signed long s1 = -1608637542;
    //binarize_s(-4);
    binarize_s(u1);
    binarize_s(s1);
}