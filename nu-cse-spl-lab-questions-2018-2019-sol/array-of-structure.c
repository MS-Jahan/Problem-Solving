#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int subs[3];
};

int main(){

    int n, i, j, stud1, stud2, temp_int;
    char temp_str[20] = "";

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for(int i = 0; i < n; i++){
        scanf("%*c");
        printf("Student %d info:\n\tEnter student name: ", i+1);
        fgets(students[i].name, 20, stdin);
        printf("\tEnter subject numbers:");
        for(j = 0; j < 3; j++){
            scanf("%d", &students[i].subs[j]);
        }
    }

    for(i = 0; i < n; i++){
        printf("\nStudent %d info:\n\tStudent name: %s", i+1, students[i].name);
        printf("\tSubject numbers:");
        for(j = 0; j < 3; j++){
            printf("%4d", students[i].subs[j]);
        }
    }

    for(i = 1; i < n; i++){
        stud1 = students[i-1].subs[0] + students[i-1].subs[1] + students[i-1].subs[2];
        stud2 = students[i].subs[0] + students[i].subs[1] + students[i].subs[2];

        if(stud2 > stud1){
            strcpy(temp_str, students[i].name);
            strcpy( students[i].name, students[i-1].name);
            strcpy(students[i-1].name, temp_str);

            for(j = 0; j < 3; j++){
                temp_int = students[i].subs[j];
                students[i].subs[j] = students[i-1].subs[j];
                students[i-1].subs[j] = temp_int;
            }


        }
    }

    for(i = 0; i < n; i++){
        printf("\nAfter sorting:\n\nStudent %d info:\n\tStudent name: %s", i+1, students[i].name);
        printf("\tSubject numbers:");
        for(j = 0; j < 3; j++){
            printf("%4d", students[i].subs[j]);
        }
    }



}
