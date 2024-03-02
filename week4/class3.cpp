#include<iostream>
#include<vector>
using namespace std;

//Binary sarch in nearly sorted array

// int binarySearch(vector <int> arr, int target){
//   int s=0;
//   int e=arr.size()-1;
//   int mid=s+(e-s)/2;

//   while(s<=e){
//     if(arr[mid]==target)
//       return mid;
    
//     if(mid-1>=s && arr[mid-1]==target)
//       return mid-1;
    
//     if(mid+1<=e && arr[mid+1]==target)
//       return mid+1;

//     if(arr[mid]<target){
//       s=mid+2;
//     }
//     else{
//       e=mid-2;
//     }
//     mid=s+(e-s)/2;
//   }
//   return -1;
// }


// int main(){
//   vector<int> arr={10,3,40,20,50,80,70};
//   int target=40;

//   int ans=binarySearch(arr,target);

//   cout<<"index of "<<target<<" is "<<ans<<endl;
//   return 0;

// }


//Divided two numbers using binary search
// int solve(int dividend, int divisior){
//   int s=0;
//   int e=abs(dividend);
//   int mid=s+(e-s)/2;
//   int ans=0;
//   while(s<=e){
//     if(abs(mid*divisior)== abs(dividend)){
//       //return mid; this is also true but one case is exception hum yaha pe ek value return kar rahe 
//       //he to - nahi aaarha perfect negative number me -22 and 7 wale ans ke liye to ye kara ans= mid ans break aage se
//       ans= mid;
//       break;
//     }
//     if(abs(mid*divisior)> abs(dividend)){
//       e=mid-1;
//     }
//     else{
//       ans=mid;
//       s=mid+1;
//     }
//     mid=s+(e-s)/2;
//   }
//   if((divisior<0 && dividend<0) || (divisior>0 && dividend>0)){
//     return ans;
//   }
//   else{
//     return -ans;
//   }
// }
// int main(){
//   int dividend=-22;
//   int divisior=-7;
//   int ans =solve(dividend, divisior); 
// //    int precision;
// //     cout<<"enter the number of floating digit in precision"<<endl;
// //     cin>>precision;
// //     double step=0.1;
// //     double finalans = ans;
// //     for(int i=0; i<precision; i++){
// //         for(double j= finalans; j*divisior<=dividend; j=j+step){
// //             finalans=j;
// //         }
// //         step = step/10;
// //     }
//   cout<<" ans is-> "<<finalans<<endl;
//   return 0;
// }

//find odd ocuring element using binary search

int solve (vector <int> arr){
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;

  while(s<=e){
    if(s==e){
      return s;
    }

    //two case when mid is at even ans second when mid is at odd;

    if(mid%2==0){
      if(arr[mid]==arr[mid+1]){
        s=mid+2;
      }
      else{
        e=mid;
      }
    }
    else{
      if(arr[mid]==arr[mid-1]){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
 
int main(){
  vector <int> arr={1,1,2,2,3,3,4,4,3,600,600,4,4};

  int ans= solve(arr);
  cout<<"Index is"<<ans<<endl;
  cout<<"Value is"<<arr[ans]<<endl;
}