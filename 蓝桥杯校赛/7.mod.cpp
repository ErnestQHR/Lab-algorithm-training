
//
// Created by 仇皓然 on 24-12-2.
//
#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000009
using namespace std;

typedef long long ll;

ll mod(ll x){
  return (x % MOD + MOD) % MOD;
}

 int main()
{
   int n,k;
   cin>>n>>k;
   vector<ll> a(n);

   for(int i=0;i<n;i++){
     cin >> a[i];
}
     sort(a.begin(),a.end());//排序从小到大排序

     ll res = 1;
     while (k>0){
       if(k%2==1){
         res  = res * a[n-1];
         n--;
         k--;
     } else {
        res  = res * a[n-1];
        n--;
        k--;
     }
   }
   cout<<res<<endl;
   return 0;
   }