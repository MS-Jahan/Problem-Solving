#include<stdio.h>

int main(){
    int d,ID;
    input:
    scanf("%d",&ID);

    d = ID % 10;
    ID = ID - d;

    if(ID > 0){
        ID = ID/10;
        printf("%d\n",d);
        goto input;

    }

   return 0;
}
