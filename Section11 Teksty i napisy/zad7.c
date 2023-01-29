#include <stdio.h>
#include <string.h>


int validate_expression(const char *expr);
int calculate(const char* expr, float *result);

int main(void) {
    int k=0;
    char bez[] = "Dante";
    char sensu[] = "a";
    int i = strspn( bez, sensu );
    char * pZnak = strpbrk( bez, sensu );
    if(k){
        printf("%d",i);
        printf("%s",pZnak);
    }
    char tekst_wejsciowy[201]={0};
    float wynik_wyrazenia=0;
    printf("Podaj wyrazenie\n");
    scanf("%200[^\n]",tekst_wejsciowy);
    if(calculate(tekst_wejsciowy,&wynik_wyrazenia)==0){
        printf("Incorrect input");
        return 1;
    }
    printf("%0.2f",wynik_wyrazenia);
    return 0;
}

int validate_expression(const char *expr){

    if(expr==NULL){
        return -1;
    }
    int nr_znaku_w_tekscie=0;
    tutaj:
    if(nr_znaku_w_tekscie==0 || *(expr+nr_znaku_w_tekscie+1)=='\0'){
        if(*(expr+nr_znaku_w_tekscie)>='0'&&*(expr+nr_znaku_w_tekscie)<='9'){
        } else{
            return 0;
        }
    } else{
        if((*(expr+nr_znaku_w_tekscie)>='0'&&*(expr+nr_znaku_w_tekscie)<='9')){
        } else if (*(expr+nr_znaku_w_tekscie)=='-'||*(expr+nr_znaku_w_tekscie)=='+'||*(expr+nr_znaku_w_tekscie)=='/'||*(expr+nr_znaku_w_tekscie)=='*'){
            if(*(expr+nr_znaku_w_tekscie-1)>='0'&&*(expr+nr_znaku_w_tekscie-1)<='9'){
            } else{
                return 0;
            }
        } else{
            return 0;
        }

    }
    nr_znaku_w_tekscie++;
    if(*(expr+nr_znaku_w_tekscie)!='\0'){
        goto tutaj;
    }
    return 1;
}

int calculate(const char* expr, float *result) {
    if(expr==NULL||result==NULL){
        return 0;
    }
    if( validate_expression(expr)==1){
    } else{
        return 0;
    }
    int blokada_pierwsza_petla=0;
    float pierwsza_liczba=0;
    char pamiec_znak;
    float druga_liczba=0;
    int nr_znaku_wejscie=0;
    petla:
    if(blokada_pierwsza_petla==0){
        if(*(expr+nr_znaku_wejscie)>='0'&&*(expr+nr_znaku_wejscie)<='9'){
            pierwsza_liczba*=10;
            pierwsza_liczba+=(*(expr+nr_znaku_wejscie)-'0');
        } else{
            pamiec_znak=*(expr+nr_znaku_wejscie);
            blokada_pierwsza_petla=1;
        }
    }else{
        if(*(expr+nr_znaku_wejscie)>='0'&&*(expr+nr_znaku_wejscie)<='9'){
            druga_liczba*=10;
            druga_liczba+=(*(expr+nr_znaku_wejscie)-'0');
            if(*(expr+nr_znaku_wejscie+1)=='\0'){
                switch (pamiec_znak) {
                    case '+':
                        pierwsza_liczba+=druga_liczba;
                        break;
                    case '-':
                        pierwsza_liczba-=druga_liczba;
                        break;
                    case '*':
                        pierwsza_liczba*=druga_liczba;
                        break;
                    case '/':
                        if(druga_liczba==0){
                            return 0;
                        }
                        pierwsza_liczba/=druga_liczba;
                        break;
                }
                druga_liczba=0;
                pamiec_znak=*(expr+nr_znaku_wejscie);
            }
        } else{
            switch (pamiec_znak) {
                case '+':
                    pierwsza_liczba+=druga_liczba;
                    break;
                case '-':
                    pierwsza_liczba-=druga_liczba;
                    break;
                case '*':
                    pierwsza_liczba*=druga_liczba;
                    break;
                case '/':
                    if(druga_liczba==0){
                        return 0;
                    }
                    pierwsza_liczba/=druga_liczba;
                    break;
            }
            druga_liczba=0;
            pamiec_znak=*(expr+nr_znaku_wejscie);
        }
    }
    nr_znaku_wejscie++;
    if(*(expr+nr_znaku_wejscie)!='\0'){
        goto petla;
    }
    *result=pierwsza_liczba;
    return 1;
}