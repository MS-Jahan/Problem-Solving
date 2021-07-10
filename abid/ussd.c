#include <stdio.h>

char otherOptions[100][100] = {
    "*. Go back",
    "#. Main Menu",
    "+. Exit Session"
};

char menuLayers[100][100] = {
    "mainmenu",
    "#. Main Menu",
    "+. Exit Session"
};

char menu_shower(char strings[][100], int len, int showOtherOptions){
    
    int otherOptionsArrSize = 3;

    for(int i = 0; i < len; i++){
        printf("%s\n", strings[i]);
    }

    if(showOtherOptions == 1){  
        // printf("%d", otherOptionsArrSize);
        for(int i = 0; i < otherOptionsArrSize; i++){
            printf("%s\n", otherOptions[i]);
        }
    }

    printf("\nEnter your choice: ");
    
    char choice;
    scanf("%c", &choice);
    return choice-1;
}

void commandHandler(char strings[][100], int stringArrayLength, int command){
    if(command >= stringArrayLength){
        command = command - stringArrayLength;
    }

    if
}

int main(){

    int command;

    mainmenu: 
    char main_menu[100][100] = {
        "1. this",
        "2. That",
        "3. Now what?"
    };

    command = menu_shower(main_menu, 3, 1); // String array, array length (number of string), show * # + options (0 for false, 1 for true)

    

}