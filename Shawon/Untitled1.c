#include<stdio.h>
int main (){
    int n,s,i;
    printf("Enter student number:");
    scanf("%d",&n);
    int stu_marks[n], loc[n], loc_i = 0;
    for (i=0;i<n;i++){
        printf("Roll-%d mark:",i+1);
        scanf("%d",&stu_marks[i]);
        printf("\n");
    }
    printf ("Enter the search value ");
    scanf("%d",&s);
    i=0;

    while(i<n){
        if(s==stu_marks[i]){
            loc[loc_i]=i+1;
            loc_i++;
        }
        i++;
    }
    if (loc==0)
    printf("\nItem not found");
    else{
        printf("Position of %d: ", s);
        for(i = 0; i < loc_i; i++){
            printf("%-4d", loc[i]);
        }
    }
    return 0;
    }
