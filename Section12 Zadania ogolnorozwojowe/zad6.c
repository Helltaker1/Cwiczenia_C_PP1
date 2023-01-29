#include <stdio.h>
#include <stdlib.h>
#define LINE_SIZE 100

int main() {
    char linie_wejscie[3][LINE_SIZE];
    char linie_wyjscie[3][LINE_SIZE]={0};
    int pierwsza_liczba=0;
    int druga_liczba=0;
    int wynik;
    char wynik_znaki[100];
    printf("Podaj dzialanie:\n");
    char znak_operacji;
    scanf("%[^\n]",*(linie_wejscie));
    scanf("%*c");
    scanf("%[^\n]",*(linie_wejscie+1));
    scanf("%*c");
    scanf("%[^\n]",*(linie_wejscie+2));
    int k;
    for(k=2;k<LINE_SIZE;k+=4){
        //1
        if(linie_wejscie[0][k-1]==' '&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=1;
        }
        //2
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]==' '){
            pierwsza_liczba*=10;
            pierwsza_liczba+=2;
        }
        //3
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=3;
        }
        //4
        if(linie_wejscie[0][k-1]==' '&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=4;
        }
        //5
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]==' '&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=5;
        }
        //6
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]==' '&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=6;
        }
        //7
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=7;
        }
        //8
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=8;
        }
        //9
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=9;
        }
        //0
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=0;
        }
        if(linie_wejscie[1][k+3]!='+'&&linie_wejscie[1][k+3]!='-'&&linie_wejscie[1][k+3]!='/'&&linie_wejscie[1][k+3]!='*'){
            continue;
        } else{
            k+=3;
            znak_operacji=linie_wejscie[1][k];
            k+=5;
            break;
        }
    }
    for(k=k;k<LINE_SIZE;k+=4){
        //1
        if(linie_wejscie[0][k-1]==' '&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=1;
        }
        //2
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]==' '){
            druga_liczba*=10;
            druga_liczba+=2;
        }
        //3
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=3;
        }
        //4
        if(linie_wejscie[0][k-1]==' '&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=4;
        }
        //5
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]==' '&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=5;
        }
        //6
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]==' '&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=6;
        }
        //7
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]==' '&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]==' '&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=7;
        }
        //8
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=8;
        }
        //9
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]=='_'&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]==' '&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=9;
        }
        //0
        if(linie_wejscie[0][k-1]=='_'&&linie_wejscie[1][k-2]=='|'&&linie_wejscie[1][k-1]==' '&&linie_wejscie[1][k]=='|'&&linie_wejscie[2][k-2]=='|'&&linie_wejscie[2][k-1]=='_'&&linie_wejscie[2][k]=='|'){
            druga_liczba*=10;
            druga_liczba+=0;
        }
        if(linie_wejscie[2][k+1]=='\0') {
            break;
        }
    }
    switch (znak_operacji) {
        case '+':
            wynik=pierwsza_liczba+druga_liczba;
            break;
        case '-':
            wynik=pierwsza_liczba-druga_liczba;
            break;
        case '*':
            wynik=pierwsza_liczba*druga_liczba;
            break;
        case '/':
            if(druga_liczba==0){
                printf("Operation not permitted\n");
                return 4;
            }
            wynik=pierwsza_liczba/druga_liczba;
            break;
        default:
            return 1;
    }
    sprintf(wynik_znaki,"%d", abs(wynik));
    if(wynik>=0){
        for(int m=0;wynik_znaki[m]!='\0';m++){
            switch (wynik_znaki[m]) {
                case '1':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]=' ';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]=' ';
                    linie_wyjscie[1][4*m+1]=' ';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]=' ';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '2':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]=' ';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]='|';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]=' ';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '3':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]=' ';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '4':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]=' ';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]=' ';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '5':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]=' ';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '6':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]=' ';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]='|';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '7':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]=' ';
                    linie_wyjscie[1][4*m+1]=' ';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]=' ';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '8':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]='|';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '9':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]='_';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]=' ';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                case '0':
                    linie_wyjscie[0][4*m]=' ';
                    linie_wyjscie[0][4*m+1]='_';
                    linie_wyjscie[0][4*m+2]=' ';
                    linie_wyjscie[0][4*m+3]=' ';
                    linie_wyjscie[1][4*m]='|';
                    linie_wyjscie[1][4*m+1]=' ';
                    linie_wyjscie[1][4*m+2]='|';
                    linie_wyjscie[1][4*m+3]=' ';
                    linie_wyjscie[2][4*m]='|';
                    linie_wyjscie[2][4*m+1]='_';
                    linie_wyjscie[2][4*m+2]='|';
                    linie_wyjscie[2][4*m+3]=' ';
                    break;
                default:
                    return 2;
            }
        }
    } else{
        for(int m=0;m<4;m++){
            linie_wyjscie[0][m]=' ';
            linie_wyjscie[1][m]=' ';
            linie_wyjscie[2][m]=' ';
        }
        linie_wyjscie[1][1]='-';
        for(int m=0;wynik_znaki[m]!='\0';m++){
            switch (wynik_znaki[m]) {
                case '1':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]=' ';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]=' ';
                    linie_wyjscie[1][4*m+4+1]=' ';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]=' ';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '2':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]=' ';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]='|';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]=' ';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '3':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]=' ';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '4':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]=' ';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]=' ';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '5':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]=' ';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '6':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]=' ';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]='|';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '7':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]=' ';
                    linie_wyjscie[1][4*m+4+1]=' ';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]=' ';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '8':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]='|';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '9':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]='_';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]=' ';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                case '0':
                    linie_wyjscie[0][4*m+4]=' ';
                    linie_wyjscie[0][4*m+4+1]='_';
                    linie_wyjscie[0][4*m+4+2]=' ';
                    linie_wyjscie[0][4*m+4+3]=' ';
                    linie_wyjscie[1][4*m+4]='|';
                    linie_wyjscie[1][4*m+4+1]=' ';
                    linie_wyjscie[1][4*m+4+2]='|';
                    linie_wyjscie[1][4*m+4+3]=' ';
                    linie_wyjscie[2][4*m+4]='|';
                    linie_wyjscie[2][4*m+4+1]='_';
                    linie_wyjscie[2][4*m+4+2]='|';
                    linie_wyjscie[2][4*m+4+3]=' ';
                    break;
                default:
                    return 2;
            }
        }
    }
    for(int n=0;n<3;n++){
        printf("%s\n",linie_wyjscie[n]);
    }
    return 0;
}