#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    int n, i, sum = 0;
    char str[20];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", str);

        if(strcmp(str, "Tetrahedron") == 0){
            sum += 4;
        }
        else if(strcmp(str, "Cube") == 0){
            sum += 6;
        }
        else if(strcmp(str, "Cube") == 0){
            sum += 6;
        }
        else if(strcmp(str, "Octahedron") == 0){
            sum += 8;
        }
        else if(strcmp(str, "Dodecahedron") == 0){
            sum += 12;
        }
        else if(strcmp(str, "Icosahedron") == 0){
            sum += 20;
        }
    }

    printf("%d\n", sum);

    return 0;
}





