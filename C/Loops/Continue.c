#include<stdio.h>
int main(){
    for(int i = 0; i<=20; i++){
        if(i%2==!0){
            continue;   //loop ka round skip kre
        }
            printf("%d\n",i);
    }


    return 0;
}