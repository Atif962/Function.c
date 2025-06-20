#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int npr = factorial (n)/(factorial(n)-factorial(r);
    return npr;
}

int main(){
    int n;
    printf("Enter n No : ");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int s=1;s<=nsp;s++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            int icj = combination(i,j);
            printf("%d  ",icj);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}