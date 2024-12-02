//求a_1 * a_2 + a_1 * a_3 ...... + a_n \_ _1  * a_n
// Created by 仇皓然 on 24-12-2.
//
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    ll res  = 0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        res += a[i]*a[j];
        }
    }
    cout<<res<<endl;
    return 0;
    }
//这是最简单的for两层，n太大的时候不行啊