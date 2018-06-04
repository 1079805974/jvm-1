#include <stdio.h>
#include <stdlib.h>

int main(){
    int local = 1;
    char* b;
    void* a;
    while(local){
        local--;
        a = malloc(sizeof(int));
        b = (char*)a;
        //b[108] = 'u';
        printf("%p\n", &a);
        printf("%d\n", b[10]);
    }
    return 0;
}
