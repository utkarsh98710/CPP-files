#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//  Q).1  // minimum number of elements required to reach target  
//     int solve(vector<int>& arr,int target){
//         //basse case
//         if(target==0){
//             return 0;
//         }
//         if(target<0){
//             return INT_MAX;
//         }
//         // solve one case
//         int mini = INT_MAX;
//         for(int i=0; i<arr.size(); i++){
//            int ans= solve(arr,target-arr[i]);
//            if(ans != INT_MAX){
//             mini=min(mini,ans+1);
//            }
//         }
//         return mini;
//     }
// int main(){
//     vector<int> arr{1,2};
//     int target = 5;
//     int ans = solve(arr,target);
//     cout<<"Answer is:"<<ans<<endl;
//     return 0;
// }


// Q.2) cut into segments
// int solve(int n, int x, int y, int z ) {
//   //base case
//   if(n == 0) {
//     return 0;
//   }

//   if(n < 0) {
//     return INT_MIN;
//   }

// int ans1 = solve(n-x, x,y,z) + 1;
// int ans2 = solve(n-y, x,y,z) + 1;
// int ans3 = solve(n-z, x,y,z) + 1;

// int ans = max(ans1, max(ans2, ans3));
// return ans;
// }
// int main() {
//   int n = 7;
//   int x = 5;
//   int y = 2;
//   int z = 2;

//   //solve function -> returns maximum number of segments
//   int ans = solve(n,x,y,z);
//   //ans -> valid && invalid

//   if(ans < 0 )
//     ans = 0; 
//   cout << "Answer is: " << ans << endl;

//   return 0;
// }

// Q.3) max sum of non adjacent elements
void solve(vector<int>& arr,int i, int sum, int &maxi) {
  //base case
  if(i >= arr.size()) {
    //maxi update;
    maxi = max(sum, maxi);
    return;
  }

  //include
  solve(arr,i+2,sum+arr[i] ,maxi );
  //exclude
  solve(arr, i+1, sum, maxi);
}

int main() {
  vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
  int sum = 0;
  int maxi = INT_MIN;
  int i = 0;
  solve(arr,i, sum, maxi);

  cout << maxi << endl;

  return 0;
}