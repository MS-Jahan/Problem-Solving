#include<stdio.h>
void main(){
int i,j,r1,r2,c1,c2,flag;
int A[10][10];
int B[10][10];
printf("Enter the r and c size of mat A:\n");
scanf("%d %d",&r1,&c1);
printf("Enter the r and c size of mat B:\n");
scanf("%d %d",&r2,&c2);
if(r1==r2 && c1==c2){
printf("Enter the elements of mat A:\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
    scanf("%d",&A[i][j]);
        }
printf("Enter the elements of mat B:\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++)
    scanf("%d",&B[i][j]);
        }
    flag=1;

    for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    if(A[i][j]!=B[i][j]){
        flag=0;
        break;
                }
                }
            }
        if(flag==1)
            {
            printf("equal\n");
            }
        else{
            printf("not equal\n");
            }

}
else{
    printf("invalid operation");
}
}
