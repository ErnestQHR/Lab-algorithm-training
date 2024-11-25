//这个题目要求你先将数组排序，然后求出前 k 个最小数和后 k 个最大数的和。
// Created by 仇皓然 on 24-11-14.
//解题步骤
/*
    1.	输入两个整数  n  和  k 。
    2.	输入  n  个数，将它们存入数组。
    3.	对数组进行排序。
    4.	计算前  k  个数的和，以及后  k  个数的和。
    5.	输出两个和的总和。
*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
int main() {
  int n,k;
  scanf("%d %d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}
  qsort(arr,n,sizeof(int),compare);

  int sum=0;

  for(int i=0;i<k;i++) {
    sum+=arr[i];
  }
  for(int i=n-k;i<n;i++) {
    sum+=arr[i];//这里 n 是数组的长度，k 是要求的个数。n - k 代表从倒数第 k 个元素的位置开始。
    //比如数组有 6 个元素，若 k = 2，那么 n - k = 6 - 2 = 4，
    //也就是说从第 4 个元素（索引 4）开始。
  }
  printf("%d",sum);
  return 0;
}