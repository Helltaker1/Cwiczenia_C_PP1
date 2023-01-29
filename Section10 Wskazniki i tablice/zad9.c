#include <stdio.h>

// fdsfdsfsdgfdsg

int main() {

    int tab[] = {67305985, 134678021, 202050057 };
    unsigned char *ptr = (unsigned char *) tab;

    for (size_t i = 0; i < 3 * sizeof(int); ++i) {
        printf("%hhu ", *ptr++);
    }

    return 0;
}