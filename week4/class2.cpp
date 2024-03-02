#include<iostream>
#include<vector>
using namespace std;

//Square root of a number
// int SqrtOfNum(int n){
//     int target=n;
//     int s=0;
//     int e=n;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//        if(mid*mid==target){
//         return mid;
//     }
//     if(mid*mid>target){
//         e=mid-1;
//     }
//     else{
//         ans=mid;
//         s=mid+1;
//     }
//     mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int ans=SqrtOfNum(n);
//     cout<<"Square root of number"<<ans<<endl;

//     int precision;
//     cout<<"enter the number of floating digit in precision"<<endl;
//     cin>>precision;
//     double step=0.1;
//     double finalans = ans;
//     for(int i=0; i<precision; i++){
//         for(double j= finalans; j*j<=n; j=j+step){
//             finalans=j;
//         }
//         step = step/10;
//     }
//     cout<<"Final ans is."<<finalans<<endl;
//     return 0;
// }

// Find piovt element
int findPivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }
    if(mid <= e && arr[mid] > arr[mid+1])
      return mid;
    if(mid-1 >= s && arr[mid-1] > arr[mid])
      return mid-1;

    if(arr[s] > arr[mid]) 
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + (e-s)/2;

  }
  return -1;
}

int main() {
  vector<int> arr{9,10,12,2,4,6,8};
  int ans = findPivot(arr);
  if(ans == -1) {
    cout << "Kuch gadbad hai " << endl;
  }
  else {
    cout << "Ans is at index" << ans << endl;
    cout << "value of ans is " << arr[ans] << endl;
  }

  return 0;
}

// Binary search in 2D array
bool binarySearch(int arr[][4],int rows, int cols, int target){
int s=0;
int e=rows*cols-1;
int mid=s+(e-s)/2;

while(s<=e){
  int rowindex = mid/cols;
  int colindex = mid%cols;

  if(arr[rowindex][colindex]==target){
    cout<<"Found at" <<rowindex<<" "<<colindex<<endl;
    return true;
  }
  if(arr[rowindex][colindex]>target){
    e=mid-1;;
  }
  else{
    s=mid+1;
  }
  mid=s+(e-s)/2;
}
return false;
}

// int main(){
//     int arr[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int rows=5;
//     int cols=4;

//     int target=19;

//     bool ans=binarySearch(arr,rows,cols,target);

//     if(ans){
//         cout<<"Target found"<<endl;
//     }
//     else{
//         cout<<"Target not found"<<endl;
//     }
// }


