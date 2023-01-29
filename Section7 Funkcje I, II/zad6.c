#include <stdio.h>
int compare(int, int, int);
int main (){
    int a,b,c;
    printf("Podaj 3 liczby calkowite oddzielone \"-\"\n");
    if(scanf("%d-%d-%d",&a,&b,&c)!=3){
        printf("Incorrect input");
        return 1;
    }
    switch (compare(a,b,c)) {
        case 0:
            printf("NOT EQUAL");
            break;
        case 1:
            printf("EQUAL");
            break;
    }
    return 0;
}
int compare(int a, int b, int c){
    if(a==b && b==c){
        return 1;
    }
    return 0;
}