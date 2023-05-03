#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        #ifdef DEBUG
        printf("Error: index out of range\n");
        #endif
        return -1;
    }

    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}
