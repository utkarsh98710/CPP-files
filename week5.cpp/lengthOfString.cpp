//Question 1 and 2 combined => length of a string and reverse a string
int getlength(char name[]){
    int length = 0;
    int i=0;
    while(name[i] != '\0'){  //jabtak name ka i character not equal to null character 
        length++;   //length or i ko + karte jan he
        i++;
    }
    return length;
}
int reverseCharArray(char name[]){
    int i=0;
    int n= getlength(name);
    int j=n-1;

    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    for(; i<=j;){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"length is:"<<getlength(name)<<endl;
    //predefined function
    // cout<<"length is:"<< strlen(name)<<endl; // function ke andar char array dedo
    cout<<"intially:"<<name<<endl;
     reverseCharArray(name);
    cout<<"After reversal process is"<<name<<endl;
    return 0;
}