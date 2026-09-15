#include<stdio.h>

int fib(int n);

int main(){
    //to obtain output of only nth term
    printf("fib of 6 is: %d\n", fib(6));
    return 0;

}

int fib(int n){

    //base case
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }//base case

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    //to obtain out put of all
    printf("fib of %d is: %d\n", n, fibN);
    return fibN;
}