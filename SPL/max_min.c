
#include<stdio.h>
int main(){

    int arr[3], max, min, mid;
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    max=arr[0]>arr[1]?(arr[1]>arr[2]?0:1):(arr[1]>arr[2]?1:2);
    min=arr[0]<arr[1]?(arr[1]<arr[2]?0:1):(arr[1]<arr[2]?1:2);
    mid = max+min == 1 ? 2 : (max+min == 3 ? 0 : (max+min == 2 ? 1: 1));

    // 0 + 1 = 1
    // 2 + 1 = 3
    // 0 + 2 = 2

    printf("%d %d %d\n", min, max, mid);

   

    printf("largest=%d \nsmallest=%d\n mid=%d\n",arr[max], arr[min], arr[mid]);

    return 0;
}