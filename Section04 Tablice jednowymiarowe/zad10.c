#include <stdio.h>
int main () {
    int numbers [101];
    int i;
//int mid = 0;
    printf("Podaj liczny : ");
    for(i =0; i <100;i++){
        if(scanf("%d",&numbers[i])!=1){
            printf("Incorrect input");
            return 1;
        }
        if(numbers[0]==-1){
            printf("not enough data available");
            return 2;
        }
        if(numbers[i]==-1) {
            break;
        }
    }
    i--;
//    if(i%2!=0){
//        mid = (i+1)/2;
//    }
//    else{
//        mid = i/2;
//    }
//for(int m =0;m<=i;m++) {
//    printf("%d ",numbers[m]);
//}
    for (int x = 0;x<=i;x++){
//        printf("%d\n",i);
//        printf("%d ^ %d",numbers[x],numbers[i-x]);
        if(numbers[x]!=numbers[i-x]){
            printf("NIE");
            return 0;
        }
    }
    printf("TAK");
    return 0;
}