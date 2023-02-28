#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    time_t time1;
    srand( (unsigned int)time(&time1) );
    int rand_x = (rand()%101);
    printf("%d",rand_x);
    int user_x = -1;
    for (int i=0;i<10;++i){
        printf("Zgadnij:\n");
        scanf("%d",&user_x);
        if(user_x>rand_x){
            printf("za duzo\n");
        }
        if(user_x<rand_x){
            printf("za malo\n");
        }
        if(user_x==rand_x){
            printf("wygrales!\n");
            return 0;
        }
    }
    printf("przegrales!\n");
    return 0;
}