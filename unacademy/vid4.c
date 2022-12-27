#include <stdio.h>
// int x=2;// error ( redeclaration only allowed in global variable)
int x; // not error(initialization)
int x=3;
int main(){
    // int a;
    // scanf("%d",&a);
    // if(a%2==0)
    // goto even;
    // else
    // goto odd;
    // even: printf("even");
    // odd: printf("odd");

    int a=10,b;
    // b=++a*++a*++a; // 4 * 4 * 5 = 80 ...fuck
    // printf("%d %d %d",++a,++a,++a);
    // b=++a + ++a + ++a;
    b=--a- --a;
    printf("%d",b);

    // int y;// ! error asbe
    // int y=3;// ! error asbe
    // printf("%d",y);
    return 0;
}