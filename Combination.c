#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact= fact*i;
    }
    return fact;//we can use this funtion instead of many loops

}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
   int r;
    printf("Enter r : ");
    scanf("%d",&r); 

    // int nfact = 1;//n!
    // int rfact = 1;//r!
    // int nrfact = 1; // n-r! // we use it in one line bellow

    // for(int i=2;i<=n;i++){//n!
    //     nfact=nfact*i;
    // }
    // for(int i=2;i<=r;i++){//r!
    //     rfact=rfact*i;
    // }
    // for(int i=2;i<=n-r;i++){//n-r!
    //     nrfact=nrfact*i;
    // }
        int ncr=factorial(n)/(factorial(r)*factorial(n-r));
        printf("%d",ncr);

        return 0;

}