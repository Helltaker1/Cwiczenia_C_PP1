#include <stdio.h>
int digits_in_number(unsigned long long number, unsigned int digit);
int main (){
    unsigned long long number;
    unsigned int digit;
    printf("Podaj liczbe:\n");
    if(scanf("%llu",&number)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj cyfre:\n");
    if(scanf("%u",&digit)!=1){
        printf("Incorrect input");
        return 1;
    }
    if (9<digit){
        printf("Incorrect input data");
        return 2;
    }
    printf("%d", digits_in_number(number,digit));
    return 0;
}
int digits_in_number(unsigned long long number, unsigned int digit){
    int counter_same_digital=0;
    unsigned long long x;
    if((number-0)%10==0){
        if (digit==0){
            counter_same_digital++;
        }
        if((number-0)==0){
            return counter_same_digital;
        } else{
            x = (number-0)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-1)%10==0){
        if (digit==1){
            counter_same_digital++;
        }
        if((number-1)==0){
            return counter_same_digital;
        } else{
            x = (number-1)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-2)%10==0){
        if (digit==2){
            counter_same_digital++;
        }
        if((number-2)==0){
            return counter_same_digital;
        } else{
            x = (number-2)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-3)%10==0){
        if (digit==3){
            counter_same_digital++;
        }
        if((number-3)==0){
            return counter_same_digital;
        } else{
            x = (number-3)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-4)%10==0){
        if (digit==4){
            counter_same_digital++;
        }
        if((number-4)==0){
            return counter_same_digital;
        } else{
            x = (number-4)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-5)%10==0){
        if (digit==5){
            counter_same_digital++;
        }
        if((number-5)==0){
            return counter_same_digital;
        } else{
            x = (number-5)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-6)%10==0){
        if (digit==6){
            counter_same_digital++;
        }
        if((number-6)==0){
            return counter_same_digital;
        } else{
            x = (number-6)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-7)%10==0){
        if (digit==7){
            counter_same_digital++;
        }
        if((number-7)==0){
            return counter_same_digital;
        } else{
            x = (number-7)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-8)%10==0){
        if (digit==8){
            counter_same_digital++;
        }
        if((number-8)==0){
            return counter_same_digital;
        } else{
            x = (number-8)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    if((number-9)%10==0){
        if (digit==9){
            counter_same_digital++;
        }
        if((number-9)==0){
            return counter_same_digital;
        } else{
            x = (number-9)/10;
            return counter_same_digital+digits_in_number(x,digit);
        }
    }
    return 0;
}