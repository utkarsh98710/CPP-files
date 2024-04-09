#include<iostream>
using namespace std;

// left to right
// void lastOccLtR(string&s, char x, int i, int &ans){
//     // base case
//     if(i>=s.size()){
//         return;
//     }
//     // one case solve;
//     if(s[i]==x){
//         ans=i;
//     }
//     // recursion
//     lastOccLtR(s,x,i+1,ans);
// }
// int main(){
//     string s;
//     cin>>s;
//     char x;
//     cin>>x;
//     int ans=-1;
//     lastOccLtR(s,x,0,ans);
//     cout<<ans<<endl; 
// }

// right to left
void lastOccRtl(string&s, char x, int i, int &ans){
    // base case
    if(i<0){
        return;
    }
    // one case solve;
    if(s[i]==x){
        ans=i;
        return;
    }
    // recursion
    lastOccRtl(s,x,i-1,ans);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans=-1;
    lastOccRtl(s,x,s.size()-1,ans);
    cout<<ans<<endl; 
}