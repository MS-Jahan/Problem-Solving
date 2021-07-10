#include <stdio.h>
#include <string.h>
int main(){
int num;
char name[100];
printf("Press 1 for Uppercase\n");
printf("Press 2 for lowercase\n");
scanf("%d",&num);
scanf("%*c");
if(num==1){
gets(name);
puts(strupr(name));
}else if(num==2){
 gets(name);
puts(strlwr(name));
}else{
printf("Error!!");
}

return 0;
}
