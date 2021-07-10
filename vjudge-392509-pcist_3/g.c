#include <stdio.h>
#include <ctype.h>


int main(){

    char str[1005];

    scanf("%s", str);

    str[0] = toupper(str[0]);

    printf("%s\n", str);

    return 0;
}



