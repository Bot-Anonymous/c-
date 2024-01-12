//----------------------- Object Oriented Programming -------------------------------
// ----- class in C++
#include <iostream>
using namespace std;
// class car{
//     public:  // access specifiers(default private)
//     int model=0;   // data members
//     int price=0;
//     int mfd=0;
//     void detail(void){   // member function
//         cout<<"Model of car "<<model<<endl
//         <<"Price of car "<<price<<endl
//         <<"Mfd of car "<<mfd<<endl;
//     }
// };   
// int main(){
//     car bmw;
//     bmw.model=2023;
//     bmw.price=634824;
//     bmw.detail();
//     return 0;
// }

// defining member function outside the class
// scope resolution operator ::
//class car{
//    public:
//    int model;
//    int price;
//    int mfd=0;
//    void detail(void);  // function declare
//};
//void car::detail(void){   // defining outside
//     cout<<"Model of car "<<model<<endl
//        <<"Price of car "<<price<<endl
//        <<"Mfd of car "<<mfd<<endl;
//}
//int main(){
//    car bmw;
//    bmw.model=2023;
//    bmw.price=31243;
//    bmw.detail();  // working
//    return 0;
//}
//----------------------------------------------------- Constructors
// constructor prototype
//-----    class_name();
//------ class_name:: class_name()  ;    --- outside the class
//#include <iostream>
//using namespace std;
// class car{
//     public:
//     int model=657;
//     int price=0b101;
//     car(){   // default constructor
//         cout<<"Model is "<<model<<endl
//         << "price is "<<price<<endl;
//     }
// };
// int main(){
//     car bmw;
//     car tata;   // as 2 times obj created hence both times constructor run
    
//     return 0;
// }
// --- parameterised constructor
//class car{
//    public:
//    int model;
//    int price;
//    car(int id){    //must be in public if not we cannot create object                        (important)
//        cout<<"Id : "<<id<<endl;
//        <<"Model : "<<model<<endl
//        <<"Price : "<<price<<endl;
//    }
//};
//int main(){
//    car tata(1234);  // obj cann't create without parameter
//    return 0;
//}


// -------------------- Copy Constructor ---------------------------   (pending)
// ---------- copy constructor 
// nothin but a special type of parameterised function in which the parameter is object of same class
// #include <iostream>
// using namespace std;
// class student{
//     public:
//     int id;
//     student(){
//         cin>>id;
//     }
//     student(student& obj){    // copy constructor  explicit define
//         id=obj.id;
//     }
// };
// int main(){
//     student s1;
//     student s2(s1);
//     cout<<s2.id;
//     return 0;
// }
// ---------------------- implicit copy constructors
// #include <iostream>
// using namespace std;
// class student{
//     public:
//     int id;
//     int age;
//     char ch;
//     student(){
//         id=3780;
//         age=40;
//         ch='Y';
//     }
// };
// int main(){
//     student s1;
//     student s2(s1);   // now automatic copy corresponding elements
//     cout<<s2.id;
//     return 0;
// }
// ----------------------------------- Destructors-----------------------------------
// #include <iostream>
// using namespace std;
// class class1{
//     public:
//     class1(){
//         cout<<"Constructor Called \n";
//     }
//     ~class1(){
//         cout<<"Destructor Called";
//     }
// };
// int main(){
//     class1 obj;
//       obj.~class1();    // explicit called destructor function
//     return 0;
// }

// ----- Application oof descructors
//#include <iostream>
//#include <string.h>
//using namespace std;
//class base{
//    char* s;
//    public:
//    base(char* a){
//        int size=strlen(a);
//        s=new char[size+1];
//        strcpy(s,a);
//        cout<<s;
//    }
//    ~base(){
//        delete[] s;
//    }
//};
//int main(){
//    base obj("Hello");
//    return 0;
//}

// -----private Desructors ------
// #include <iostream>
// using namespace std;
// class c1{
//     ~c1(){    // destructor in private scope
//         cout<<"Destructor Called";
//     }
// };
// int main(){
//     c1 obj;    // error because private destructor not accessed
//     return 0;
// }

// ---- to deal we use pointer
// #include <iostream>
// using namespace std;
// class c1{
//     ~c1(){
//         cout<<"Destructor called";
//     }
//     public:
//     int age=10;
// };
// int main(){
//     c1* t=new c1;   // object is not created so no error
//     cout<<t->age;    // here dynamically created object
//     delete t;  // although here obj is not created but delete always call destructor...
//     // for using destructor in this case friend class/function required
//     return 0;
// }

// ----------- for delete
// #include <iostream>
// using namespace std;
// class c1{
    
//     ~c1(){
//         cout<<"Destructor called";
//     }
//     public:
//     c1(){
//         cout<<"Constructor Called";
//     }
//     friend void des(c1*);
// };
// void des(c1* obj){    // friend function
//     delete obj;
// }
// int main(){
//     c1* t=new c1;
//     des(t);                   // Ist method
//     return 0;
// }

// ---- using this operator                                                 (imp)
// #include <iostream>
// using namespace std;
// class c1{
    
//     ~c1(){
//         cout<<"Destructor called";
//     }
//     public:
//     c1(){
//         cout<<"Constructor Called";
//     }
//     void des(){              // member function
//     delete this;
// }
// };
// int main(){
//     c1* t=new c1;
//   t->des();                // IInd method  working
//     return 0;
// }
//----------------------------------------
// shallow vs deep copy
// #include <iostream>
// using namespace std;
// class box{
//     int len;
//     int* wid;
//     int hei;
//     public:
//     box(){
//         wid=new int;
//     }
//     void set(int l,int w,int h){
//         len=l;
//         *wid=w;
//         hei=h;
//     }
//     void show(){
//         cout<<"Length : "<<len<<endl
//         <<"Width : "<<*wid<<endl
//         <<"Height "<<hei<<endl;
//     }
// };
// int main(){
//     box b1,b2;
//     b1.set(10,10,10);
//     b2=b1;    // shallow copy
//     b1.show();
//     b2.show();
//     b2.set(20,500,30); // change in b2
//     b1.show();   // !!!!! change in width of b1 also occur  
//     b2.show();
//     return 0;
// }
// // so to avoid these changes we use deep copy means to define copy construtor explicit/ by developer



//------------------------------ Friend class
//#include <iostream>
//using namespace std;
//class parent{           // base class
//    int add=85;
//    int code=898;
//    friend class son;                      // making friend class 
//}mem1;
//class son{                 // friend class
//    public:
//    void detail(parent& obj){
//        obj.code=0000;
//        obj.add=0;             // can change/access member data
//        cout<<obj.add<<endl
//        <<obj.code<<endl;
//    }
//};
//int main(){
//    son spy;
//    spy.detail(mem1);
//    return 0;
//}
// friend function
// global friend function
// #include <iostream>
// using namespace std;
// class base{
//     int age;
//     int otp;
//     public:
//     base(){
//         age=30;
//         otp=5547;
//     }
//     friend void spy_fun(base&);
// };
// void spy_fun(base& obj){
//     cout<<"Age is : "<<obj.age<<endl
//     <<"Otp : "<<obj.otp;
// }
// int main(){
//     base obj1;
//     spy_fun(obj1);
//     return 0;
// }

// member function of another class
//#include <iostream>
//using namespace std;
//class base;                                      // order matter here
//
//class other{
//    public:
//    void detail(base&);
//};
//class base{
//    int age;
//    int otp;
//    public:
//    base(){
//        age=99;
//        otp=6575;
//    }
//    friend void other::detail(base&);
//};
//void other::detail(base& obj){
//    cout<<"Age : "<<obj.age<<endl
//    <<"otp : "<<obj.otp;
//}
//int main(){
//    base obj1;
//    other mem;
//    mem.detail(obj1);
//    return 0;
//}
//



//--------------------------------------------------- Static Data Members
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int x=50;
//     A(){
//         cout<<"Class A Constructor Called \n";
//     }
// };
// class B{
//     public:
//     // A b;    // every time obj create
//     static A a;    //created before main execute
    
//     B(){
//         cout<<"Class B Constructor Called \n";
//     }
// };
// A B::a;    // defining a
// int main(){
//     B b1;
//     cout<<b1.a.x;    // accessing element of a
//     return 0;
// }



//--------------------------------- access static data member------------------------
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int x=50;
//     A(){
//         cout<<"Class A Constructor Called \n";
//     }
// };
// class B{
//     public:
//     // A b;    // every time obj create
//     static A a;    //declaration
    
//     B(){
//         cout<<"Class B Constructor Called \n";
//     }
//     static A getA(){
//         return a;
//     }
// };
// A B::a;    // defining a
// int main(){
//     // B b1;
//     // cout<<a.x;  // error
//     // A a=b1.getA();
//     // cout <<a.x; // no error
//     A a=B::getA();  // if U not want any object in B but want a;
//     cout<< a.x;  // no errror
//     return 0;
// }



//---------------------------    this pointer
// // it is a hidden pointer used to represent the current object 
// #include <iostream>
// using namespace std;
// class Test{
//     int x;
//     int y;
//     public:
//     Test(int x,int y){
//         this->x=x;
//         this->y=y;   // this is like pointer
//     }
//     void show(){
//         cout<< this->x<<" "<<this->y;
//     }
//     // ~Test(){ 
//     //     delete this;  // can delete temporary objects
//     // }
// };
// int main(){
//     Test obj1(5,10);
//     obj1.show();
//     return 0;
// }
// ----- -----------------application of this
// ---------fro chain function
/*#include <iostream>
using namespace std;
class Test{
    int x;
    int y;
    public:
    Test& getX(int x){
        this->x=x;
        return *this;
    }
    Test& getY(int y){
        this->y=y;
        cout<<"X called"<<endl;
        return *this;
    }
    void show(){
        cout<<"Y called"<<endl;
        cout<<this->x<< " "<<this->y;
    }
}; 
int main(){
    Test obj1;
    obj1.getX(5).getY(10);
    obj1.show();
    return 0;
}*/
//-----------------------------     Funcion overriding --------------------------------------
// #include <iostream>
// using namespace std;
// class parent{
//     public:
//     void fun(){
//         cout<<"This is Parent functin \n";
//     }
//     void par(){
//         cout<<"This is only in Parent functin \n";
//     }
// };
// class child:public parent{
//     public:
//     void fun(){
//         cout<<"This is Child functinon\n";   // fun is override here
//     }
// };
// int main(){
//     child obj;
//     obj.fun();  // as obj is of child class so priority to child fun
//     obj.par();   // first search in child then goes to parent(if not found)
//     return 0;
// }
// //   ------------- Function overridding
// #include <iostream>
// using namespace std;
// class parent{
//     public:
//     void fun(){
//         cout<<"This is Parent functin \n";
//     }
//     void par(){
//         cout<<"This is only in Parent functin \n";
//     }
// };
// class child:public parent{
//     public:
//     void fun(){
//         cout<<"This is Child functinon\n";   // fun is override here
//     }
// };
// int main(){
//     parent *obj1=new child;
//     obj1->fun();  // using pointer here parent class fun called
// //  pointer usi ko point krega jis class me pointer bna h
// // to handle this we need virtual function
//     return 0;
// }
//----------------------------------------------- Virtual Function ---------------
//virtual function working
// #include <iostream>
// using namespace std;
// class base{
//     public: 
//     virtual void show(){    // bind at runtime
//         cout<<"This is Base class show() function\n";
//     }
//     void print(){
//         cout<<"This is Base class print() function\n";
//     }
// };
// class child:public base{
//     public:
//     void show(){
//         cout<<"This is Child class show() function\n";
//     }
//     void print(){
//         cout<<"This is Child class print() function\n";
//     }
// };
// int main(){
//     base* ptr=new child;  // pointer type is base and pointed to child class
//     // base* ptr;
//     // child obj;
//     // ptr=&obj     //  2nd Method
//      ptr->show();
//      ptr->print();
//     return 0;
// }
/*Explanation :- 
as show is virtual functoin which bind at runtime and print is non-virtual function  bind at compile time
As at complie time type of pointer prior
and at run time the location pointed by pointer is prior*/

//------------
// -------------- Virtual function in all types
//#include <iostream>
//using namespace std;
//class base{
//    public:
//    void fun1(){
//        cout<<" func1() of base class \n";
//    }
//    virtual void fun2(){                  // bind at runtime
//        cout<<" func2() of base class \n";
//    }
//    virtual void fun3(){
//        cout<<" func3() of base class \n";
//    }
//    virtual void fun4(){
//        cout<<" func4() of base class \n";
//    }
//};
//class child:public base{
//    public:
//    void fun1(){
//        cout<<" func1() of child class \n";
//    }
//    void fun2(){                  // bind at runtime
//        cout<<" func2() of child class \n";
//    }
//    void fun4(int x){
//        cout<<" func4() of child class \n";
//    }
//};
//int main(){
//    base *ptr =new child;
//    ptr->fun1();
//    ptr->fun2();
//    ptr->fun3();
//    ptr->fun4();
//    // ptr->fun4(5);  produce error-----------------------(imp)
//    return 0;
//}

// ------------------------------------- operator overloading
// -------------- Operator Overloading Practice
// // complex numbers
// #include <iostream>
// using namespace std;
// class complex{
//     int real;
//     int img;
//     public:
//     complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     void operator++(){
//         this->real=this->real+1;
//         this->img=this->img+1;
//     }
//     void operator--(){
//         this->real=this->real-1;
//         this->img=this->img-1;
//     }
//     complex operator+(complex c1){
//         complex temp;
//         temp.real=this->real+c1.real;
//         temp.img=this->img+c1.img;
//         return temp;
//     }
//     complex operator-(complex c1){
//         complex temp;
//         temp.real=this->real-c1.real;
//         temp.img=this->img-c1.img;
//         return temp;
//     }
//     complex operator*(complex c1){
//         complex temp;
//         temp.real=this->real*c1.real;
//         temp.img=this->img*c1.img;
//         return temp;
//     }
//     friend complex operator/(complex c1,complex c2);
//     void show(){
//         cout<<this->real;
//         this->img>0?cout<<"+"<<this->img<<"i\n":cout<<"-"<<-1*(this->img)<<"i\n";
//     }
// };
// complex operator/(complex c1,complex c2){
//     complex temp;
//     temp.real=c1.real/c2.real;
//     temp.img=c1.img/c2.img;
//     return temp;
// }
// int main(){
//     complex c1(10,-8),c2(2,4);
//     complex c3;
//     // c3=c1+c2;
//     // c3=c1-c2;
//     // c3=c1*c2;
//     // c3=c1/c2;  // working overload from friend function
//     c3.show();
//     return 0;
// }

// --------------------- Virtual destructors------------------------------------------
// #include <iostream>
// using namespace std;
// class base{
//     public:
//     base(){
//         cout<<"Base class Constructor \n";
//     }
//     virtual ~base(){
//         cout<<"Base class Desstructor \n";
//     }
// };
// class child:public base{
//     public:
//     child(){
//         cout<<"Child class Constructor \n";
//     }
//     ~child(){
//         cout<<"Child class Destructing \n";
//     }
// };
// int main(){
//     base* ptr=new child;
//     delete ptr; // here not any destructor of child class
//     return 0;
// }






//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Important >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// void fun(const int* i){   // overload fine 
//     cout<<"Consta fun() \n";
// }
// void fun(int* i){
//     cout<<"Non Constant fun() \n";
// }
// int main(){
//     int i=5;
//     const int j=10;
//     fun(&i);
//     fun(&j);
//     return 0;
// }
// Explanation:-  
W/*hen normal variable passed in func then every func create a copy of that actual parameter.
The function cannot change original valur to writing const before normal parameters is useless...
But in Pointer case is sensitive because we can change value of that pointer from anywhere in file*/


//================================================== Imp End =======================================================
/// -----------Diamond problem
//#include <iostream>
//using namespace std;
//class person{
//    public:
//    person(){
//        cout<<"Person constructor Called \n";
//    }
//    person(int x){
//        cout<<"Person Parameter constructor Called \n";
//    }
//};
//class student:virtual public person{     // diamond problem solved
//    public:
//    student(int x):person(x){
//        cout<<"student constructor Called \n";
//    }
//};
//class teacher:virtual public person{    // if not use  two member data/function created and amigious error occur    (very imp)
//    public:
//    teacher(int x):person(x){
//        cout<<"teacher constructor Called \n";
//    }
//};
//
//class common:public student,public teacher{
//    public:
//    common(int x):student(x),teacher(x),person(x){    //how to run parameterised grand_parent constructors
//        cout<<"Common constructor Called \n";
//    }
//};
//int main(){
//    common obj(6);
//    // person constructor is called twice means two copies created in obj 1
//    return 0;
}



















