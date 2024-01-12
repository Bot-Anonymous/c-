//#include <iostream>
//using namespace std;
//int main(){
//	return 0;
//}

//----------------------------------- Multiple Inheritence
// ---------- Multiple Inheritence
// #include <iostream>
// using namespace std;
// class base1{
//     public:
//     base1(){
//         cout<<"Constructor of Base1 Called \n";
//     }
// };
// class base2{
//     public:
//     base2(){
//         cout<<"Constructor of Base2 Called \n";
//     }
// };
// class sub:public base1,public base2{
//     public:
//     sub(){
//         cout<<"Constructor of sub class called \n";
//     }
// };
// int main(){
//     sub obj;
//     return 0;
// }









//--------------------------------------------------- Multilevel Inheritence----------------
// Diamond problem
// #include <iostream>
// using namespace std;
// class person{
//     public:
//     person(){
//         cout<<"Person constructor Called \n";
//     }
//     person(int x){
//         cout<<"Person Parameter constructor Called \n";
//     }
// };
// class student:public person{
//     public:
//     student():person(){     // student must contain the properties of parent class
//         cout<<"student constructor Called \n";
//     }
// };
// class teacher:public person{
//     public:
//     teacher():person(){
//         cout<<"teacher constructor Called \n";
//     }
// };
// class common:public student,public teacher{
//     public:
//     common():student(),teacher(){
//         cout<<"Common constructor Called \n";
//     }
// };
// int main(){
//     common obj;
//     // person constructor is called twice means two copies created in obj 1
//     return 0;
// }

//----------------------------------------- Que 1
//#include<iostream>
//using namespace std;
//
//class A
//{
//int x;
//public:
//A(int i) { x = i; }
//void print() { cout << x; }
//};
//
//class B: virtual public A
//{
//public:
//B():A(10) { }
//};
//
//class C: virtual public A 
//{
//public:
//C():A(10) { }
//};
//
//class D: public B, public C {
//};
//
//int main()
//{
//	D d;
//	d.print();
//	return 0;
//}

