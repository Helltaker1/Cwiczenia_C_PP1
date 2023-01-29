#include <stdio.h>

int main (){
    int x;
    float y;
    char z;
    int *px;
    px=&x;
    *px=1;
    float *py;
    py=&y;
    *py=3.6;
    char *pz;
    pz=&z;
    *pz='u';
    printf("%d %f %c",*px,*py,*pz);
    return 0;
}