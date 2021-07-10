#include <stdio.h>

int main(){

    char str[1000] = "Item Name\tNumber\tPrice\tQuantity\n AAA-1\t \t 123\t 15.55\t 150\n BBB-2\t \t 125\t 36.12\t 175\n CCC-3\t \t 527\t 32.15\t 115\n\n";
    char read[1000];
    FILE *fl;

    printf("%s\n\n", str);

    fl = fopen("INVENTORY.txt", "w");

    fprintf(fl, "%s", str);

    fclose(fl);

    FILE *fl1;

    fl1 = fopen("INVENTORY.txt", "r");

    //fgets(read, 1001, fl1);

    char c = fgetc(fl1);

    int i = 0;

    while(c != EOF){
        read[i] = c;
        i++;
        c = fgetc(fl1);
    }

    printf("%s", read);

    fclose(fl1);

}
