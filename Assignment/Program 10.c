#include <stdio.h>

int main(){

    int arr[1000] = { 0 }, n, carry, i, j, temp, arr_len;

    printf("Enter a number for factorial: ");
    scanf("%d", &n);

	arr[0] = 1;
	arr_len = 1;

	carry = 0;
	for(i = 1; i <= n; i++) {
		for(j = 0; j < arr_len; j++) {
			temp = arr[j] * i + carry;
			arr[j] = temp % 10;
			carry = temp / 10;
		}
		while(carry>0) {
			arr[arr_len] = carry % 10;
			carry = carry / 10;
			arr_len++;
		}
	}

    printf("\nFactorial: ");
	for(i = arr_len - 1; i >= 0; i--){
		printf("%d", arr[i]);
	}

    printf("\n\n");

	return 0;
}
