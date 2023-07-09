#include<stdio.h>
    int function(int x){
        int fact =1;
        for(int i=2;i<=x;i++){
            fact = fact *i;
        }
        return fact;
    }
    int combination(int n, int r){
        int ncr = factorial(n)/(factorial(r)*factorial(n-r));
        return ncr;
        
    }
int main(){
    
    
    
    
    
    
    
    // int n;
    // printf("Enter n number :");
    // scanf("%d",&n);
    // int r;
    // printf("Enter r number :");
    // scanf("%d",&r);
    // int nfact = 1;  //n!
    // int rfact;  //r!
    // int nrfact; //n-r !

    // for(int i =2;i<=n;i++){
    //     nfact =nfact*i;
    // }
    
    // for(int i =2;i<=r;i++){
    //     rfact =rfact*i;
    // }

    // for(int i =2;i<=n-r;i++){
    //     nrfact =nrfact*i;
    // }

    // int ncr = nfact/(rfact * nrfact);
    // printf("%d",ncr);


    int n;
    printf("Enter n number :");
    scanf("%d",&n);
    int r;
    printf("Enter r number :");
    scanf("%d",&r);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);

    return 0;
}