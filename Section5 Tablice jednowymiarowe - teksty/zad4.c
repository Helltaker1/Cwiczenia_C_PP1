#include <stdio.h>
int main () {
    char napis[1001];
    int i;
    int m = 0;
    int used[12] = {0};
    printf("podaj napis\n");
    fgets(napis, sizeof(napis), stdin);
    for(i = 0; i<1001;i++){
        if(napis[i]=='\0'){
            break;
        }
        if(napis[i]=='A'&&used[0]==0){
            used [0]=1;
            m++;
        }
        if(napis[i]=='a'&&used[1]==0){
            used [1]=1;
            m++;
        }
        if(napis[i]=='E'&&used[2]==0){
            used [2]=1;
            m++;
        }
        if(napis[i]=='e'&&used[3]==0){
            used [3]=1;
            m++;
        }
        if(napis[i]=='Y'&&used[4]==0){
            used [4]=1;
            m++;
        }
        if(napis[i]=='y'&&used[5]==0){
            used [5]=1;
            m++;
        }
        if(napis[i]=='U'&&used[6]==0){
            used [6]=1;
            m++;
        }
        if(napis[i]=='u'&&used[7]==0){
            used [7]=1;
            m++;
        }
        if(napis[i]=='I'&&used[8]==0){
            used [8]=1;
            m++;
        }
        if(napis[i]=='i'&&used[9]==0){
            used [9]=1;
            m++;
        }
        if(napis[i]=='O'&&used[10]==0){
            used [10]=1;
            m++;
        }
        if(napis[i]=='o'&&used[11]==0){
            used [11]=1;
            m++;
        }
    }
    printf("%d",m);
    return 0;
}
}