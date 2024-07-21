#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    char type[20];
    // string type;

    // default constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type= "";
        cout<<"Constructor called"<<endl;
    }

    // parameterised constructor
    Animal(int age){ // in parameterised constructor we have to pass age value
        this->age = age;
        cout<<"Parametrised constructor called"<<endl;

    }

     Animal(int age,int weight){ // in parameterised constructor we have to pass age value
        this->age = age;
        this->weight=weight;
        cout<<"Parametrised constructor 2 called"<<endl;

    }

    Animal(int age,int weight,string type){ // in parameterised constructor we have to pass age value
        this->age = age;
        this->weight=weight;
        this->type=type;
        cout<<"Parametrised constructor 3 called"<<endl;

    }

    // famous interview question ---> copy constructor
    Animal( Animal &obj ){ // input parameter me obj paas hora he
        this->age=obj.age;
        this->weight=obj.weight;
        this->type = obj.type;
        cout<<"I am inside copy constructor "<<endl;

    }


    //behavior or methods
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }

    void print(){
        cout<<this->age <<" "<<this->weight<<" "<<this->type<<endl;
    }

    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }
};

int main(){

    // // object creation 
    // // static alocation
    // Animal ramesh;
    // ramesh.age=18;
    // ramesh.type="homo";
    // ramesh.type="Titu"; //name is given within the double quotes

    
    // // error because age and name are private we make it public by keyword
    // cout<< "Age of ramesh is :"<<ramesh.age<<endl;
    // cout<<"Name of ramesh is :"<<ramesh.type<<endl;

    // ramesh.eat();
    // ramesh.sleep();
    // ramesh.setWeight(101);
    // cout<<"Weight: "<<ramesh.getWeight() <<endl;

    // cout<<"Size of empty class is: "<< sizeof(Animal)<<endl;



    //Dyanmic memory location
    // object creation

    // Animal* suresh= new Animal; // suresh ke andar addres pada hoga to iska age and type cannot describe

    // // we use (*) mean actual object  ke upar age and type pooch rahe he tab chal rahaa he  
    // (*suresh).age=26;
    // (*suresh).type="bi";

    // // other way to access properties of dynamic object alternative dynamic
    // suresh->age=17;
    // suresh->type="kutta";

    // suresh->eat();
    // suresh->sleep();

    // Animal a(10);
    // Animal* b=new Animal(100); // pass age value
    // Animal* c=new Animal(100,10); 
    // Animal* d=new Animal(100,10,"utkarsh");

    // // copy constructor . object ko copy karne ke ye tarike he 
    // Animal e= a;
    // Animal f(a); 

    // Animal animal(e); 
    // return 0;

   // copy constructor example
    Animal a;
    a.age=20;
    a.setWeight(105);
    strcpy(a.type,"gupta");
    Animal b=a;

    cout<<"a -> ";
    a.print();
    cout<<"b -> ";
    b.print();

    a.type[0]="D";
    cout<<"a -> ";
    a.print();

    cout<<"b -> ";
    b.print();
   
//    cout<<"a object creation"<<endl;
//     Animal a;
//     a.age=80;

//    cout<<"b objects creation"<<endl;
//     Animal*b=new Animal();
//     b->age=42;

//     // manaully  call destructor
//     delete  b;


   return 0;
}


