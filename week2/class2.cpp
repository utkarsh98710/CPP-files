#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     int start=row+1;
    //     for(int col=0; col<row+1; col++){
    //         // cout<< col+row+1 <<" ";
    //         cout<< start <<" ";
    //         start= start+1;
    //     }
    //     cout<<endl;
    // }


//   numeric full pyramid
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<< row+col+1;
        }
        int start =2*row;
        for(int col=0; col<row; col++){
            cout<<start;
            start =start - 1;
        }
        cout<<endl;
    }

    // Numeric hollow pyramid 

//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row-1; col++){
//             cout<<" ";
//         }
//         int start=1;
//         for(int col=0; col<2*row+1; col++){
//             if(row==0 || row==n-1){
//                 if(col%2==0){
//                     cout << start;
//                     start = start + 1;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 if(col==0){
//                     cout<<1;
//                 }
//                 else if( col==2*row+1-1){
//                     cout<<row+1;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
            
//     }

// Bitwise operator

//    bool a=false;
//    bool b=true;

    // cout<<(a|b);
    //  cout<<(a&b);

    // cout<<(~a);
    // cout<<(a^b);
    // cout<<(2&3);
    //  cout<<(5&10) <<endl;
    // cout<<(3|4);
    // int a=12;
    // a=a << 1;
    // a=a<<-2;
    //  int a=-27;
    //  a=a >>1;
    // cout<< a <<endl;


// Pre and post increment operator

    // int a=11;
    // cout<<a++;
    // cout<<endl <<a <<endl;

    // int a=5;
    // cout<< (++a)*(++a)
    
// Break statement
    // for(int a=0; a<5; a++){
    //     cout<<"Babbar" <<endl;
    //      break;
    // }
    // cout<<"Love";

// Continue statement
    // for(int a=0; a<5; a++){
    //      continue;
    //     cout<<"Babbar" <<endl;
    // }


// Variable scoping
     
    //int raja=420;   //global variable can be exxeced in file
     // declariation
    // int a;
    // initialisation
    // int b=5;
    // updation
    // b=10;
    

    // if(true){
    //     int b=15;  //life of this b on between this bracket
    //     int raja=421;
    //      cout<< b<<endl;
    //      cout<<raja;
    // }
    // cout<<endl;
    // cout<<b<<endl;


// switch  case function
//     int val;
//     cout<<"Enter the value"<<endl;
//     cin>>val;

//     switch(val){
//         case 1 : cout<<"utkarsh";
//         break;
//         case 2: cout<<"Gupta";
//         break;
//         case 3: cout<<"Ramesh";
//         break;
//         case 4: cout<<"rahul";
//         break;
//         default: cout<< "suresh";
//     }


}
    






