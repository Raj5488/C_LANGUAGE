#include<stdio.h>
int main(){
    if(3+5/10){
        printf("This is work\n");
    }
    // if(a=10){                        This is show indicate == use this
        //     printf("Even this works");
    // }
    if(-5){         // this is work but expect 0 
        printf("Surprisingly even this works");
    }

    return 0;
}