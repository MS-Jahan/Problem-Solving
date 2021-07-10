#include <stdio.h>
int main()
{
	int i,T, n;
	scanf("%d", &T);
	for(i = 0; i< T;i++){
		scanf("%d", &n);
		if(n%2==0){
			printf("Even\n");
		}
		else{
			printf("Odd\n");
		}
	}
	return 0;
}
