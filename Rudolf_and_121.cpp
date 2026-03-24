#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];

      }
      for(int i=1;i<n-1;i++){
        if((a[i]-(2*min(a[i-1],a[i+1])))>=0){
          int x=min(a[i-1],a[i+1]);
          a[i]=a[i]-(2*x);
          a[i-1]=a[i-1]-x;
          a[i+1]=a[i+1]-x;
        }
      }
      int f=0;
       for(int i=0;i<n;i++){
         if(a[i]!=0){
          f=1;
         }
      }
      cout<<(f?"NO":"YES")<<endl;
    }
       
}

