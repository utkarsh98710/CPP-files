#include<iostream>
#include<string.h>
using namespace std;
int main(){
    //creation hashmap
    map<int,char> meramap;
    //insertion
    meramap[0]="a";
    meramap[1]="b";
    meramap[25]="z";
    //access
    cout<<"your ans is"<<meramap[23]<<endl;
}