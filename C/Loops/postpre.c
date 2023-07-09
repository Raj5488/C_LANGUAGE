#include<stdio.h>
int main(){
    // int x=5;
    // printf("%d\n",x);
    // ++x;    //which is same both of is
    // x++;
    // printf("%d\n",x++);     // same output no different
    // printf("%d\n",++x);     // same output different



        int x =4, y = 0,z;
        while(x>=0){
            x--;
            y++;
            if(x==y){
                continue;
            }
            else
            printf("\n%d%d",x,y);
        }

    return 0;

}