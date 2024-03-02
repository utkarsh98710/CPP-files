 #include<iostream>
 #include<string.h>
 using namespace std;
 int covertTouppercase(char word[]){
    int n=getlength(word);
    for(int i=0; i<n; i++){
        word[i]=word[i]-'a'+'A';
    }
 }
 int main(){
    char word[100];
    cout<<"Upper case word is :"<<covertTouppercase(word);
    cin>>word;
    
 }