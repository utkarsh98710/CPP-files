#include<iostream>
#include<stack>
#include<string>
#include<limits>
using namespace std;
int countRev (string s)
{
    if(s.size() & 1 ) return -1;// agr size odd he string ka to reverse -1;
    
    int ans=0;
    stack<char>st;
    for(char ch:s){
        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop(); // pair up kar do..
            }
            else
                st.push(ch);
        }
    }
        // is stack is stil not empty lets count reversals because it is invalid in counting
    while(!st.empty()){
        char a=st.top(); st.pop();
        char b=st.top(); st.pop();
        if(a==b)
            ans+=1;
        else
            ans+=2;
    }
    return ans;
}

int main(){
    string s="}{{}}{{{";
    cout<<countrev(s);
}