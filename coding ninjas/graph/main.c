#include <stdio.h>

int main(){
    int a,b;
    a=1;
    b= ++a + a++;
    printf("%d",b);
return 0;
}