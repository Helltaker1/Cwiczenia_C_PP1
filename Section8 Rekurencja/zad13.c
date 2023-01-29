#include <stdio.h>
int is_prime_rec(int a, int b);
int is_superprime_rec(int w);

int main (){
    int number;
    printf("Podaj liczbe:\n");
    if(scanf("%d",&number)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(is_superprime_rec(number)==1){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
int is_prime_rec(int a, int b){
    if (a<=1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    if(b==2||b==1){
        if(a%b!=0){
            return 1;
        }
        return 0;
    }
    b-=1;
    int n = a%b* is_prime_rec(a,b);
    if(n>0){
        return 1;
    }
    return 0;
}
int is_superprime_rec(int w){
    if (-10<w && w<10){
        return is_prime_rec(w,w);
    }
    if(is_prime_rec(w,w)==1){
        int new_w=(w-(w%10))/10;
        return is_superprime_rec(new_w);
    }
    return 0;
}