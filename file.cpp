#include<bits/stdc++.h>
using namespace std;
int anss(string str){
   int res = -1;
   int n = str.size();
   unordered_map<char,int> mp;
   for(int i=0;i<n;i++){
     mp[str[i]]++;
   }
   int c = 1;
   for(auto it : mp){
     if(it.second==1) return c;
     c++;
   }
   return res;
}
int main(){
    string str;
    cin>>str;
    int ans = anss(str);
    cout<<endl<<ans<<endl;
}