#include <stdio.h>

int main() {
    double acount =0;
    printf("Podaj ilosc kWh:\n");
    if(scanf("%lf",&acount)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if(acount<0){
        printf("Incorrect input\n");
        return 1;
    }
    if(acount>250){
        printf("Koszt brutto: %0.6lf\n",((acount-250)*1.5+120+75+25)*1.22);
        return 0;
    }
    if(acount<=250&&acount>150){
        printf("Koszt brutto: %0.6lf\n",((acount-150)*1.2+75+25)*1.22);
        return 0;
    }
    if(acount<=150&&acount>50){
        printf("Koszt brutto: %0.6lf\n",((acount-50)*0.75+25)*1.22);
        return 0;
    }
    printf("Koszt brutto: %0.6lf\n",(acount*0.5)*1.22);
    return 0;
}