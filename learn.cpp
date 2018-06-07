#include <stdio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;
int main(){
    unsigned int a = 1;
    unsigned int *b = &a;
    cout << b[0];
}
