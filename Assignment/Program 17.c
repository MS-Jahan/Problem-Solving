#include <stdio.h>

int main(){

    int sub_marks[5], GPA = 0, i, fail_status = 0;

    printf("Enter marks for 5 subjects -->\n");
    for(i = 0; i < 5; i++){
        input:
        printf("Subject %d: ", i + 1);
        scanf("%d", &sub_marks[i]);
        if(sub_marks[i] < 0 || sub_marks[i] > 100){
            printf("\n**Wrong input for Subject %d. Enter the mark again.\n", i + 1);
            goto input;
        }
        else if(sub_marks[i] < 40){
            fail_status = 1;
        }
    }

    if(fail_status == 1){
        printf("\nGPA: Fail\n\n");
    }
    else{

        for(i = 0; i < 5; i++){
            GPA += sub_marks[i];
        }

        GPA = GPA / 5;

        if(GPA >= 80 && GPA <= 100){
            printf("\nGPA: A+\n\n");
        }
        else if(GPA >= 75 && GPA <= 79){
            printf("\nGPA: A\n\n");
        }
        else if(GPA >= 70 && GPA <= 74){
            printf("\nGPA: A-\n\n");
        }
        else if(GPA >= 65 && GPA <= 69){
            printf("\nGPA: B+\n\n");
        }
        else if(GPA >= 60 && GPA <= 64){
            printf("\nGPA: B\n\n");
        }
        else if(GPA >= 55 && GPA <= 59){
            printf("\nGPA: B-\n\n");
        }
        else if(GPA >= 50 && GPA <= 54){
            printf("\nGPA: C+\n\n");
        }
        else if(GPA >= 45 && GPA <= 49){
            printf("\nGPA: C\n\n");
        }
        else if(GPA >= 40 && GPA <= 44){
            printf("\nGPA: D\n\n");
        }
        else if(GPA < 40){
            printf("\nGPA: Fail\n\n");
        }
        else{
            printf("\nMarks weren't correctly inputted!\n\n");
        }
    }

    return 0;
}
