//
// Created by 仇皓然 on 24-10-16.
//a的值为2，b的值为3，a = a - 2 * a，c = (a + (++b)) * b - a++， 要求输出a,b,c的值


#include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c ;
    a = a - 2 * a;
    c = (a + (++b)) * b - a++; // a++与 ++b 可以直接参与运算
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}

