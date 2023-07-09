#include<stdio.h>
int main(){
    int cp;
    printf("Enter the value of cost Price :");
    scanf("%d",&cp);
    int sp;
    printf("Enter the value of Selling Price :");
    scanf("%d", &sp);
    if(cp>sp){
        printf("Loss");
    }
    else if (cp<sp){
        printf("Profit");
    }
    else if(cp==sp){
        printf("Neither profit and Loss");
    }

    

    return 0;
}