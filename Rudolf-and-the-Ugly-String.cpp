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
      string s;
      cin>>s;
      int c=0;
      for(int i=1;i<n-1;i++){
         if(i<n-3&&s[i-1]=='m'&&s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='i'&&s[i+3]=='e'){
          c++;
          i+=3;
        }
        else{
         if(s[i-1]=='m'&&s[i]=='a'&&s[i+1]=='p'){
          c++;
          }
          if(s[i-1]=='p'&&s[i]=='i'&&s[i+1]=='e'){
          c++;
          }
        }
      }
      cout<<c<<endl;
    }
       
}