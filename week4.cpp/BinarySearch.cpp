#include<iostream>
#include<vector>
using namespace std;


// int binarySearch(int arr[], int target, int size){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         int element=arr[mid];
//         if(element==target){  //element found , then return index
//             return mid;
//         }
//         if(target<element){
//             //left me search karenge
//             end= mid - 1;
//         }
//         else{
//             //right side me search karenge
//             start=mid+1;
//         }
//         mid=(start+end)/2;
//     }
//     //element not found
//     return -1;
// }
// int main(){
//     int arr[]={2,4,6,8,10,12,15};
//     int size=7;
//     int target=15;
//     int indexOftarget = binarySearch(arr,target,size); 
//     if(indexOftarget == -1){
//         cout<<"target not found"<<endl;
//     }
//     else{
//         cout<<"target found at "<<indexOftarget <<" index"<<endl;
//     }
//     return 0;



//Find first Occurrence of an element
// int firstOccurence(vector<int> arr, int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid = s+(e-s)/2;
//     int ans =-1;
//     while (s<= e){
//         if(arr[mid]== target){
//             // ans store
//             ans =mid;
//             //left search
//             e=mid -1;
//         }
//         else  if(target<arr[mid]){
//             //left search
//             e=mid -1;
//         }
//         else if((target >arr[mid])){
//             //right search
//             s=mid +1;
//             } 
//         mid=s+(e-s)/2;
//         }
//          return ans;
//     }
// int main(){
//     vector<int> arr{1,3,4,4,4,4,4,6,7};
//     int target=4;
//     int ans = firstOccurence(arr,target);
//     cout<<"ans is" <<ans<<endl;
//     return 0;

// }

//find last occurence in an array
// int lastoccurence(vector<int>v, int target){
//     int s=0;
// int e=v.size()-1;
// int mid=s+(e-s)/2;
// int ans=-1;

//     while(s<=e){
//         if(v[mid]==target){
//             //ans store and right search
//             ans=mid;
//             s=mid+1;
//         }
//         else if(target<v[mid]){
//             //left search
//             e=mid-1;
//         }
//         else if(target>v[mid]){
//             //right search
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//      }
//      return ans;
// }
// int main(){
//     vector<int>v{1,3,7,7,7,7,7,7,7,7,7,9};
//     int target=7;
//     int ans= lastoccurence(v,target);
//     cout<<"ans is"<<ans<<endl;
// }


//Total occurence in an sorted array
// int firstOccurence(vector<int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=0;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             ans=mid;
//             e=mid-1;
//         }
//         if(arr[mid]>target){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int lastOccurence(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int finalans=0;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             finalans=mid;
//             s=mid+1;
//         }
//         if(arr[mid]>target){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return finalans;

// }
// int main(){
//     vector <int> arr ={2,4,6,8,8,8,11,13};
//     int target=8;
//     int ans=firstOccurence(arr,target);
//     int finalans=lastOccurence(arr,target);
//     cout<<"The first occurence is"<<ans<<endl;
//     cout<<"The last occurence is"<<finalans<<endl;
//     cout<<"Total occurence is"<<finalans-ans+1<<endl;

// }

//peak element in  a mountain array
int peakElement(vector <int> arr){
    int s=0;
    int e= arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    vector <int> arr={0,10,15,18,5,4,2};
    int ans=peakElement(arr);
    cout<<"peak element index"<<ans<<endl;
    cout<<"Value of peak element is"<<arr[ans]<<endl;
}
