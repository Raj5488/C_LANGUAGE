#include<stdio.h>
int main(){
    int a = 30 *1000 + 2768;
    printf("%d\n", a);

    short b = 30 * 1000 + 2768;
    printf("%d\n", b);

    // short value limited to contain
    //      -32768  to   32767
    short c = 30 * 1000 + 2767;
    printf("%d", c);


    


    return 0;
}