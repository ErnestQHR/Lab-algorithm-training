//
// Created by 仇皓然 on 24-12-1.
//第 i 位同学会给 arr[i] 送礼物，输出收到礼物最多的同学（多个同学存在时输出最小的同学）

#include <iostream>
#include <vector>
using namespace std;
//gifts 记录礼物数量
int main()
{
	int n;
    cin >> n;//arr(n+1)可以做到从1开始遍历
    vector<int> arr(n+1),gift(n+1,0);//初始化一个长度为n+1的数组，初始化所有的元素为0

    for(int i=1;i<=n;i++){
      cin >> arr[i];
      gift[arr[i]]++;//arr[1] = 2，表示第 1 位同学给第 2 位同学送了一份礼物。
    }
//找到最大礼物数的同学
    int max = 0,ans = n+1;
    for(int i=1;i<=n;i++){
      if(gift[i]>max||gift[i]==max && i < ans){
        max = gift[i];
        ans = i;
        }
	}
        cout << ans << endl;
        return 0;
        }
//gifts[arr[i]]++ 是计数的关键，统计收到礼物的数量。
//就是说第一个for循环里面读入数据，并将每一个同学收到的礼物个数存到数组gift里面去
//然后用for循环来遍历gift数组，找到礼物最多的同学的编号