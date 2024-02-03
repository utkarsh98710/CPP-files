#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrone(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while(i<=j){
        if(word[i]==word[j]){
            i++,j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
char word[100]="racecar";
    cout<<"Palindrone check: " <<checkPalindrone(word);
    return 0;
    
}


