#include <stdio.h>

int main(){

    FILE *a, *b;

    char d;

    a = fopen("Input.txt", "r");
    b = fopen("Output.txt", "w");

    while((d=getc(a)) != EOF){
        if((d !='0')&&(d != '1')&&(d != " ")){
            putc(d,b);
        }
    }

    fclose(a);
    fclose(b);

    return 0;



}
