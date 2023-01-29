#include <stdio.h>

unsigned long long product_of_digits(unsigned long long n);
void wypisanie_liczby(unsigned long long n);
unsigned long long dzielniki_cyfry(unsigned long long int liczba,unsigned long long int pomocnicza,unsigned long long poczatkowe_dzielniki);
unsigned long long bez_zera(unsigned long long n);
int main() {
    unsigned long long int podana_liczba;
    unsigned long long int wyjsciowa_liczba=0;
    printf("Podaj liczbe\n");
    if(scanf("%llu",&podana_liczba)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if(podana_liczba>10000){
        printf("Incorrect input data\n");
        return 2;
    }
    wyjsciowa_liczba= dzielniki_cyfry(podana_liczba,podana_liczba,wyjsciowa_liczba);
    if(wyjsciowa_liczba==0){
        printf("nie");
        return 0;
    }
    wypisanie_liczby(wyjsciowa_liczba);
    return 0;
}

unsigned long long dzielniki_cyfry(unsigned long long int liczba,unsigned long long int pomocnicza, unsigned long long poczatkowe_dzielniki){
    if(liczba == product_of_digits(poczatkowe_dzielniki)){
        return poczatkowe_dzielniki;
    }
    if(pomocnicza>=2){
        if(pomocnicza%9==0){
            pomocnicza/=9;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=9;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%8==0){
            pomocnicza/=8;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=8;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%7==0){
            pomocnicza/=7;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=7;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%6==0){
            pomocnicza/=6;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=6;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%5==0){
            pomocnicza/=5;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=5;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%4==0){
            pomocnicza/=4;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=4;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%3==0){
            pomocnicza/=3;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=3;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
        if(pomocnicza%2==0){
            pomocnicza/=2;
            poczatkowe_dzielniki*=10;
            poczatkowe_dzielniki+=2;
            return dzielniki_cyfry(liczba, pomocnicza, poczatkowe_dzielniki);
        }
    }
    if(liczba==1){
        return 1;
    }
    poczatkowe_dzielniki=0;
    return 0;

}
unsigned long long product_of_digits(unsigned long long n){
    if(n==0){
        return 0;
    }
    return bez_zera(n);
}
unsigned long long bez_zera(unsigned long long n){
    if(n>1){
        unsigned long long x=(n-n%10)/10;
        return (n%10* bez_zera(x));
    }
    return 1;
}
void wypisanie_liczby(unsigned long long n){
    int k = n%10;
    if(n>0){
        printf("%d",k);
        n/=10;
        wypisanie_liczby(n);
    }
}