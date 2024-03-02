#include<iostream>
#include<algorithm>
using namespace std;

//Hpw to increase or decrease a string using sort comparator.
bool cmp(char first,char second){
    return first>second;
}
int main(){
    string s ="babbar ";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
}

//Another exapmle
bool compare(int a,int b){
    return a>b;
}
int main(){
    vector<int> v{5,4,1,2,3};
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<<i<<" "<<endl;
    }
    cout<<s<<endl;

}