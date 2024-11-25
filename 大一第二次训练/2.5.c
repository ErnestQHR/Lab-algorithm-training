//一行被打乱的数组数组
//输出描述：
//排序后的升序数组
//示例1:
//输入
//5
//5 4 3 2 1
//输出
//1 2 3 4 5
// Created by 仇皓然 on 24-11-14.
//
#include <stdio.h>

void quickSort(int arr[], int left, int right){
  if(left>=right) return;

  int pivot = arr[left];
  int i = left, j = right;
  while(i<j){
  while(i<j&&arr[j]>=pivot) j--;
  if(i<j) arr[i++] = arr[j];

  while(i<j&&arr[i]<=pivot) i++;
  if(i<j) arr[j--] = arr[i];
}
  arr[i] = pivot;
  quickSort(arr, left, i-1);
  quickSort(arr, i+1, right);
  }

  int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
      scanf("%d", &arr[i]);
  }
  quickSort(arr, 0, n-1);
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

  return 0;
  }