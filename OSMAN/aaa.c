#include <stdio.h>

int main(){

    FILE *a, *b;

    char d;

    a = fopen("Input.txt", "r");
    b = fopen("Output.txt", "w");

    while((d=getc(a)) != EOF){
        if((d != '0')&&(d != '1')&&(d != '2')&&(d != '3')&&(d != '4')&&(d != '5')&&(d != '6')&&(d != '7')&&(d != '8')&&(d != '9')&&(d != ' ')){
            fputc(d,b);
        }
    }

    fclose(a);
    fclose(b);

    return 0;



}
