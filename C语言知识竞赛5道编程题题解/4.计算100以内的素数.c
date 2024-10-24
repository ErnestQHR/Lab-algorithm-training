/*输出100之内的素数
备注
<p>质数(prime number)又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然 数整除。</p>
示例1:
输入
无
输出
2 3 5 7 11
13 17 19 23 29
31 37 41 43 47
53 59 61 67 71
73 79 83 89 97
*/
#include<stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0;//
    }
    for (int i = 2; i * i <= num; i++) {   //i*i 一个数的最大公因数是他的根号，用i*i代替sqrt（num）
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int count = 0;

    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d\t", i);
            count++;
            // 每输出5个数换行
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }

    // 如果最后一行不足5个数，换行
    if (count % 5 != 0) {
        printf("\n");
    }

    return 0;
}
//
// Created by 仇皓然 on 24-10-16.
//
