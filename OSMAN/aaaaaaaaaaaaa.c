#include <stdio.h>
#include <stdio.h>

int main(){

    FILE *a, *b;

    char d;

    a = fopen("Input.txt", "r");
    b = fopen("Output.txt", "w");

    do
    {
        if((d != '0')&&(d != '1')&&(d != '2')&&(d != '3')&&(d != '4')&&(d != '5')&&(d != '6')&&(d != '7')&&(d != '8')&&(d != '9')&&(d != ' '))
        {
            putc(d,b);
        }
    }
    while((d=getc(a)) != EOF);
    fclose(a);
    fclose(b);

    return 0;



}
