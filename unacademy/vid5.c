#include <stdio.h>
int a=3;

int check(){
    static int a;
    a++;
    return a;
}
int main(){
    printf("\n %d\n", check());
    printf("\n %d\n", check());
    printf("\n %d\n", check());
    return 0;
}