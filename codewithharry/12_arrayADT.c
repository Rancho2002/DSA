#include <stdio.h>
#include <stdlib.h>

struct arrayADT
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArr(struct arrayADT *a, int total, int used){
    a->total_size=total;
    a->used_size=used;
    a->ptr=(int *)malloc(total*sizeof(int));
}
int main(){
    struct arrayADT myArr;
    createArr(&myArr, 100,20);
    return 0;
}