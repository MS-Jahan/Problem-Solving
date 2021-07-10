#include <stdio.h>

int main(){

    FILE *fp;
    char input[200];

    fp = fopen("input.txt", "w");

    printf("Enter your string: ");
    fgets(input, 200, stdin);
    fputs(input, fp);
    fclose(fp);

    fp = fopen("input.txt", "r");

    fgets(input, 200, (FILE*)fp);


    printf("\n\nContent from file: \n%s", input);
    fclose(fp);

    return 0;

}
