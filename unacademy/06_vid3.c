#include <stdio.h>
#define x 2
int main(){
    // int x=4,y=4,z;
    // scanf("%d%d",&x,&y);
    switch (2<<2)
    {
    case x:
        printf("x bada he");
        break;
    case x*2:
        printf("x bada he 2nd wala");
        break;
    case 'l'*3:
        printf("nice");
        break;
    default:
        printf("x chota he");
        printf("%d",'l'*3);
        break;
    }
    printf("\n");
    int a=10;
    label: printf("%d\n",a);
    if(a<20)
    {
        a++;
        goto label;
    }
    for (int i = 10; i <= 20; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}