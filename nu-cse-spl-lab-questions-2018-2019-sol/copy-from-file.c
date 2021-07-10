#include <stdio.h>

int main(){

    FILE *input, *output;
    char f_content[200];

    input = fopen("input.txt", "r");

    fgets(f_content, 200, (FILE*)input);

    printf("String from file:\n\n%s", f_content);

    fclose(input);

    output = fopen("output.txt", "w");
    fputs(f_content, output);
    fclose(output);

    printf("\n\nCopy file operation successful!");

    return 0;

}
