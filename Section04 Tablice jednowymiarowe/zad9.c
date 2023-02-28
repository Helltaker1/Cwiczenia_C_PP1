#include<stdio.h>
int main() {
    int numbers [11]={0};
    int count_pairs =0;
    int memory;
    int anty_repeat_memory =0;
    printf("Podaj 10 liczb oddzielonych spacja. 4 z nich musza byc parzyste\n");
    if(scanf("%d %d %d %d %d %d %d %d %d %d",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4],&numbers[5],&numbers[6],&numbers[7],&numbers[8],&numbers[9])!=10){
        printf("Incorrect input");
        return 1;
    }
    for(int i =0;i<10;i++){
        if(numbers[i]%2==0){
            count_pairs++;
        }
    }
    if(count_pairs!=4){
        printf("Incorrect input data");
        return 2;
    }
    for(int i=0;i<10;i++){
        if(numbers[i]%2==0&&count_pairs==1) {
            if ((i == 6 || i == 3) && anty_repeat_memory == 3) {

            } else {
                memory = numbers[9];
                numbers[9] = numbers[i];
                numbers[i] = memory;
                break;
            }
        }
        if(numbers[i]%2==0&&count_pairs==2){
            if((i==3)&&anty_repeat_memory==2){

            }else{
                memory = numbers [6];
                numbers [6] = numbers [i];
                numbers [i] = memory;
                count_pairs--;
                anty_repeat_memory++;
            }

        }
        if(numbers[i]%2==0&&count_pairs==3){
            if(numbers[3]%2==0){
                if(numbers[6]%2==0){
                    memory = numbers [9];
                    numbers [9] = numbers [i];
                    numbers [i] = memory;
                }else{
                    memory = numbers [6];
                    numbers [6] = numbers [i];
                    numbers [i] = memory;
                }

            }else{
                memory = numbers [3];
                numbers [3] = numbers [i];
                numbers [i] = memory;
                count_pairs--;
                anty_repeat_memory++;
            }
        }
        if(numbers[i]%2==0&&count_pairs==4){
            memory = numbers [0];
            numbers [0] = numbers [i];
            numbers [i] = memory;
            count_pairs--;
            anty_repeat_memory++;
        }
    }
    for(int i =0;i <10;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}