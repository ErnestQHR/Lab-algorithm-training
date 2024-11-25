//给定 n 对正整数 ai,bi，请你求出每对数的最大公约数。
//输入描述：
//第一行包含整数 n。
//输出描述：
//接下来 n 行，每行包含一个整数对 ai,bi
// Created by 仇皓然 on 24-11-14.
//求最大公约数用欧几里得算法又叫辗转相除法

#include <stdio.h>
//使用辗转相除法来计算
int gcd(int a,int b){
  while(b!=0){
    int temp=a % b;
    a=b;
    b=temp;
    }
    return a;
}
int main(){
  int n;
  scanf("%d",&n);//使用scanf来读入数据
  
  for(int i=0;i<n;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    int g=gcd(a,b);
    printf("%d\n",g);
    }
    return 0;
    }