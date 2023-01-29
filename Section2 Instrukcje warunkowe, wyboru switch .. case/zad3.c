#include <stdio.h>

int main() {
    int days = 0;
    int months = 0;
    int years = 0;
    printf("Podaj date w formacie dd-mm-yyyy\n");
    if (scanf("%d-%d-%d", &days, &months, &years) != 3) {
        printf("Incorrect input\n");
        return 1;
    }
    if (years<0||years>9999 ){
        printf("Incorrect\n");
        return 0;
    }
    if (months<=0||months>12 ){
        printf("Incorrect\n");
        return 0;
    }
    if (months==1||months==3||months==5||months==7||months==8||months==10||months==12 ){
        if (days>0&&days<=31 ){
            printf("correct\n");
            return 0;
        }
        else{
            printf("incorrect\n");
            return 0;
        }
    }
    if (months==4||months==6||months==9||months==11 ){
        if (days>0&&days<=30 ){
            printf("correct\n");
            return 0;
        }
        else{
            printf("incorrect\n");
            return 0;
        }
    }
    if (months==2){
        if(years%400==0){
            if (days>0&&days<=29 ) {
                printf("correct\n");
                return 0;
            }
            else{
                printf("incorrect\n");
                return 0;
            }
        }
        if(years%100!=0){
            if (years%4==0){
                if (days>0&&days<=29 ) {
                    printf("correct\n");
                    return 0;
                }
                else{
                    printf("incorrect\n");
                    return 0;
                }
            }
            else{
                if (days>0&&days<=28 ) {
                    printf("correct\n");
                    return 0;
                }
                else{
                    printf("incorrect\n");
                    return 0;
                }
            }
        }
        else{
            if (days>0&&days<=28 ) {
                printf("correct\n");
                return 0;
            }
            else{
                printf("incorrect\n");
                return 0;
            }
        }
    }
}