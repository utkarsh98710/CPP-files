int binarySearch(int arr[], int target, int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        int element=arr[mid];
        if(element==target){  //element found , then return index
            return mid;
        }
        if(target<element){
            //left me search karenge
            end= mid - 1;
        }
        else{
            //right side me search karenge
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    //element not found
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12,15};
    int size=7;
    int target=15;
    int indexOftarget = binarySearch(arr,target,size); 
    if(indexOftarget == -1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target found at "<<indexOftarget <<" index"<<endl;
    }
    return 0;
}