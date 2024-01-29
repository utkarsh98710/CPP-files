//Question  Replace all spaces from string
void replaceSpaces(char sentence[]){
    int i=0;
    int n=strlen(sentence);

    for(int i=0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] ='@';
        }
    }
}
 
int main(){
    char sentence[100];
    cin.getline(sentence,100);  // for reading space as a character
    replaceSpaces(sentence);
    cout<<"printing  string"<<endl<<sentence<<endl;
}