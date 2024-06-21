#include<iostream>
using namespace std;

// int partition(int arr[],int s,int e){
//     //select pivot element 
//     int pivotIndex=s;
//     int pivotElement=arr[s];

//     // find right place for pivot element and place it on that place
//     int count= 0;
//     for(int i=s+1; i<=e; i++){
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//       //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
//     int rightindex= s+count;
//     swap(arr[pivotIndex],arr[rightindex]);
//     pivotIndex= rightindex;

//     int i=s;
//     int j=e;

//     // left me chote right me bade.
//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }
//         // two case possible
//         // 1) you found the elements to swap
//         // 2) no need to swap
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//         return pivotIndex;
//     }
// }
//     void quicksort(int arr[], int s, int e){
//         if(s>=e){
//             return;
//         }

//         //partition logic
//         int p= partition(arr,s,e);
//         // recursive call for right hand side and left hand side
//         quicksort(arr, s, p-1);

//         quicksort(arr,p+1,e);
//     }

// int main(){
//     int arr[]={8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,2,2,2,50,30};
//     int n =20;

//     int s=0;
//     int e=n-1;
//     quicksort(arr,s,e);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// permutaion of string 
void printpermutation(string &str,int i){
    if(i>=str.length()){
        cout<<str<<endl;
        return;
    }
    //swapping
    for(int j=i; j<str.length(); j++){
        //swap
        swap(str[i],str[j]);
        // recursive call
        printpermutation(str,i+1);
        // backtracking
        swap(str[i],str[j]);


    }
}
int main (){
    string str= "abc";;
    int i=0;
    printpermutation(str,i);
    return 0;
}