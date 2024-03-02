#include<iostream>
using namespace std;
// int main(){
//diff between char array and strings

//char array:->
// char array[100];
// cin>>array;
// array[2]='\0';
// array[5]='\0';
// cout<<array;


//strings: 
// string str;
// cin>>str;
// str[2]='\0';
// //we cant access  null character in an string
// cout<<str;

//Imnput and output in strings:->
// string str;
// cin>> str; // note this function not read space 
//input
//getline(cin ,str); // use this function
//print
// cout<<str;


//Strings Functions:->
// cout<<"length:"<<str.length()<<endl;
// cout<<"isempty:"<<str.empty()<<endl;
// str.push_back('w');
// cout<<str<<endl;
// str.pop_back();
// cout<<str<<endl;
// cout<<str.substr(1,3)<<endl; //this function print substring from current string:
// cout<<str<<endl;

//compare two stirngs
// string a="utkarsh";
// string b="Utkarsh";
// if(a.compare(b)==0){
//     cout<<"a and b are exactly same strings"<<endl;
// }
// else{
//     cout<<"and b are not same "<<endl;
// }
// return 0;

//Compare two input strings:->
// bool compareString(string a, string b){
//     if(a.length() != b.length()){
//         return false;
//     }
//     else{
//         int j=0;
//         for(int i=0; i<a.length(); i++){
//             if(a[i]!=b[j]){
//                 return false;
//             }
//             j++;
//         }
//     }
//     return true;
// }
int main(){
// string x ="abcd";
// string y ="abcd";
// cout<<x.compare(y)<<endl;

//find substring in a string:->
// string sentence="Utkarsh keep it up stay confident and be positive ";
// string target="Negativity";
// cout<<sentence.find(target)<<endl;
// if(sentence.find(target)==string::npos){
//     cout<<"not found"<<endl;
// }

//Replace a substring in a string:->
// string str="This is utkarsh gupta starting his coding journey";
// string word="development";
// // str.replace(35,6,word);
// str.replace(0,4,"that");
// cout<<str<<endl;



//Erase character in string:
// string str="ADFDGFLVFDFPB";
// str.erase(8,4);
// cout<<str;
// return 0;
}
//}