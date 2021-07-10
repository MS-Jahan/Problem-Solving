#include <stdio.h>
#define ll long long int

ll factorial(ll ptr);

int main(){
    ll n,*ptr;

    printf("Enter the num:\n");
    scanf("%lld",&n);

    ptr=&n;
    //factorial(ptr);
    printf("%lld\n", factorial(*ptr));

    return 0;
}

ll factorial(ll ptr){

    if(ptr>1){
        return ((ptr) * factorial((ptr)-1));
    }
    else{
        return 1; //return 1 dewar karon 0! =1
    }
}
