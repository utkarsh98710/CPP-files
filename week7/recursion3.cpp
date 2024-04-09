#include<iostream>
#include<vector>
using namespace std;
// bool checkSorted(vector<int> &arr,  int& n, int i){
//     //base case
//     if(i==n-1){
//         return true;
//     }
//     // 1 case solve
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
//     // bakki recursion kar lega
//     return checkSorted(arr,n,i+1);
// }
// int main(){
//     vector<int> arr{10,20,30,40,50};
//     int n=arr.size();
//     int i=0;

//     bool isSorted = checkSorted(arr,n,i);

//     if(isSorted){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }

//     return 0;
// }


// Binary search
int binarySearch(vector<int> &v, int s,int e, int target){
    //base case
    // case 1 key not found
    // s>e invalid array
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    // case 2 key found 
    if(v[mid]==target){
        return mid;
    }
    // arr[mid]<key -> right me search
    if(v[mid]<target){
        return binarySearch(v,mid+1,e,target);
    }
    else{ // arr[mid]>key left me search
        return binarySearch(v,s,mid-1,target);
    }
}
int main(){
    vector<int> v{10,20,40,60,70,90,95};
    int target = 95;

    int n=v.size();
    int s=0;
    int e=n-1;
    int ans = binarySearch(v,s,e,target);

    cout<< "Anser is:"<<v[ans]<<endl;
    return 0; 
}