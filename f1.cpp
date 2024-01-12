//#include <iostream>
//using namespace std;
//int main(){
//	int x=10;
//	
//	cout << "Hello \n"<< x<<"hoiasdfioasfj";
//	return 0;
//}


//------------ scoping  (Scope Resolution Operator)
//#include <iostream>
//using namespace std;
//int a=10;   // global scope
//int main(){
//	int a=20;  // local scope
//	cout <<a;     // local > global 
//	cout <<::a;   // global 
//	return 0;
//}


//------- wide characters
//#include <iostream>
//using namespace std;
//int main(){
////	char x='a';
//	wchar_t var1=L"ellloh";   
//	cout <<var1<< endl;
//	return 0;
//}




//------------------------- integer promotion                                   (imp)
//#include <iostream>
//using namespace std;
//int main(){
//	char a=30,b=40,c=10;
//	char d=(a*b)/c;  // in calculation a*b = 1200 but char only upto 256(max) it means 
//	                // while calculating char is promoted to int or unsigned int
////	cout <<+d;     // to print numbers
//	cout <<d;
//	return 0;
//}


//-------    2nd example                                                                   (v.imp)
//#include <iostream>
//using namespace std;
//int main(){
//	char a=0xfb;   // using hexa-decimal literal
//	unsigned char b=0xfb;  // in calculation a*b = 1200 but char only upto 256(max) it means 
//	                // while calculating char is promoted to int or unsigned int
////	cout <<+d;     // to print numbers
//	cout <<"a is "<<a <<endl<<"b is "<<b << endl;   // a and b are same characters
//	cout <<"a is "<<+a <<endl<<"b is "<<+b;   // a and b have diff values
//}
//---------------------------------------- Typecasting ------------------------------------------
//1). implicit like as in C
//2). Explicit
//---------------------- 1st  static_cast
// syntax static_cast <new_datatype> (expression);
//#include <iostream>
//using namespace std;
//int main(){
//	float a=2.5;
//	int b=a*3;
////	int c=(int)a*3;  // working ??
//	int c=static_cast <int> (a)*3; // working well
//	cout << b <<endl;
//	cout << c <<endl;
//	return 0;
//}
//------------------------ 2nd Dynamic Cast
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> pending


//------------------------ 3rd const_cast
// used to remove constancy of const variable
// const_cast <new_type> (expression)
//#include <iostream>
//using namespace std;
//int main(){
//	const int a=5;
////	int b=a;       // possible
////	b=40;
//	const int* ptr=&a;
////	int* ptr1=ptr;              // not possible that is why ???
//	int* temp=const_cast<int*> (ptr);     // const_cast is introduce
//	*temp=20;
//	cout <<*temp;
//	return 0;
//}
//------------------------ 4th reinterpret_cast                                                  (imp)
//used to convert the pointer to any other type of pointer
//#include <iostream> 
//using namespace std;
//int main(){
//	int a=5;
//	char ch=1;
//	cout <<ch;
//	int* ptr1=&a;
////	char* ptr2=&a;  // not possible
//	char* ptr2=reinterpret_cast <char*> (ptr1);
//	cout <<*ptr2; 
//	return 0;
//}

//-------------------- if-else -----same as in C
// ------------------------------------------- Range in switch case ----------------------------
//#include <iostream>
//using namespace std;
//int main(){
//	int a=5;
//	int n;
//	cout<<"Enter a number : ";
//	cin >>n;
//	switch(a){
//		case 1:{
//			cout <<"Number is 1";
//			break;
//		}
//		case 2 ... 6:{          // also in C
//		cout <<"Number is between 2 and 6";
//		break;
//		}
//	}
//	return 0;
//}

// ------------------------------------------- Range in for loop ----------------------------
//#include <iostream>
//using namespace std;
//int main(){
//	int x[]={11,22,33,44};
//	for(int i:x){
//		cout<<i<<'\n';        // work on latest compilers
//	}
//	return 0;
//}
//--------------------------------------------- function
//#include <iostream>
//using namespace std;
//int fun(int a,int b){
//	cout<<a+b;
//}
//int main(){
//	int (*ptr)(int,int)=&fun;   // function pointer
//	(*ptr)(3,5);
//	return 0;
//}



//--- function overloading
//#include <iostream>
//using namespace std;
//int sum(int a,int b){
//	cout<<a+b<<'\n';
//}
//int sum(int a,int b,int c){
//	cout<<a+b+c<<'\n';
//}
//int main(){
//	sum(1,2);
//	sum(1,2,3);   // automatic detect via arguments
//	return 0;
//}
//--------------------------------------------- Inline funtion ----------------
//#include <iostream>
//using namespace std;
//inline void sum(int a,int b){   // inline function
//    cout<<a+b<<endl;
//}
//int main(){
//    sum(1,3);
//    return 0;
//}
//--------------------------------------------- Lambda funtion ----------------                (imp ????)







//------------------------------------------------------ Pointers in C++
//#include <iostream>
//using namespace std;
//// illustrating void pointer                                   Appliaction of void pointer
//void increase(void* data,int size){
//    if(size==sizeof(char)){
//        cout << "*Data Contains Character \n";
//        char* new_ptr;
//        new_ptr=(char*)data;           // primitive type_casting like in C
//        (*new_ptr)++;
//    }
//    else if(size==sizeof(int)){
//        cout << "*Data Contains Integer \n";
//        int* new_ptr;
//        new_ptr=reinterpret_cast<int*>(data);  // typecasting methods
//        (*new_ptr)++;
//    }
//}
//int main(){
//    char i='a';
//    int j=10;
//    increase(&i,1);
//    cout << "New Value is "<<i<<endl;
//    increase(&j,1);
//    cout << "New Value is "<<j<<endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int* ptr = 0;
//	int* ptr = null;   // null pointers
//}
//----------------------------------------------- Refrences
//#include <iostream>
//using namespace std;
//int main(){
//	int x=20;
//	int& ref=x;  // no address pass unlike pointer
//	
//	x=30;
//	cout<<x<<"and "<<ref<<endl;  // value change in both 
////	-
//	ref=60;
//	cout<<x<<"and "<<ref<<endl;
////	--
//	
//	return 0;
//}
// // ------------ 1). to modify value in func
// void inv(int& x,int& y){     // no copies of actual parameters
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int a=5,b=7;
//     cout<< "The value of a and b : "<< a<<" "<< b<<'\n';
//     inv(a,b);
//     cout<< "The value of a and b : "<< a <<" "<< b;
//     return 0;
// }
// --------- 2). avoiding copies (large structures)
// struct parent{
//     int age;
// }boy,girl;
// // void data(struct parent baby){// here if we call function then first it creat a copy of full structure then use it
// //     // ...
// // }
// void data(struct parent &baby){  // we use original data no copies
//     cout<< "Child with age : "<<baby.age;
// }
// int main(){
//     boy.age=10;
//     girl.age=12;
//     data(boy);
//     return 0;
// }

// ------------- 3). modify/avoid to make copies object in for each loops
//int main(){
//    int num[]={1,2,3,4,5};
//    for(int& i:num){
//        i*=2;
//    }
//    for(int& i:num){
//        cout<<i<<endl;
//    }
//    return 0;
//}


//--------------------------- string ------------
// string in C++(can also create like in C)
//#include <iostream>
//using namespace std;
//int main() {
//    string str1("Helli this is Yogesh Kumar");  // method 1
//    string str2="hi";                           // method 2
//    cout<< str1;
//    cout<< endl<<str2;
//    return 0;
//}

//---------------------------- string as input 
// cin
// int main() {
//     string str1;
//     cin>>str1;       // like scanf untill space
//     cout<<str1;
//     return 0;
// }
// --- getline
// int main() {
//     string str1;
//     getline(cin,str1);       // like gets untill newline
//     cout<<str1;
//     return 0;
// }

// --------- string_stream
//It is used to take multiple strings as input at once. 
//#include <sstream>  // header file
//int main(){
//    string str1="hello this is Yogesh Kumar";
//    stringstream obj(str1);
//    string temp;
//    obj>>temp;   // extract word (in each run) form str1
//    cout<<temp;
//    return 0;
//}


//---------------- string functions 
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string s1="hello this is Yogesh Kumar";
//	string s2="yogesh kuamr";
//	cout<<s1.length()<< "|"<<s2.length();  // for length
//	return 0;
//}


//------------------------------------------------   Structures in C++ -----------------------
// all definition is like C
//#include <iostream>
//using namespace std;
//struct parent{
//    int age=0;   // error in C but 
//    int id=0;    // considered as default value in C++
//    void detail(){  // in C++ can create member function
//        cout<<endl<<"Age is : "<<age<<" and id : "<<id;
//    };
//};
//int main(){
//    struct parent boy={17,987240};
//    struct parent girl;  // default value print
//    boy.detail();
//    girl.detail();
//    return 0;
//}

//------------Structures support access modifiers
//#include <iostream>
//using namespace std;
//struct car{
//    private:
//    int price=2000;
//    public:
//    int model;
//    int mfd;
//    void price_d(void){
//        cout<<"Enter Price of car : ";
//        cin>>price;
//        cout<<"Price of Car "<<model<< "is "<<price; // can be access internally  (this function is internal)
//    }
//};
//int main(){
//    struct car bmw;
//    bmw.model=333;  // can be accessed or modify
//    // bmw.price=222222; // Error !!cannot accessed externally
//    cout<<bmw.model<<endl;
//    bmw.price_d();  // can be accessed 
//    return 0;
//}
//--------------
// ---------------- Enumerators
//#include <iostream>
//using namespace std;
// enum values{val1,val2,val3,val4};
// // is not assigned value then starting value is 0
// // the value of next is previous+1;
// enum values1{value1=5,value2};
// int main(){
//     int i;
//     cout<<val1<<endl
//     <<val2<<endl
//     <<val3<<endl
//     <<val4<<endl;
//     cout<< value2;
//     return 0;
// }
// -------------- application
// enum Gender{Male,Female};
// int main(){
//     Gender gender=Male;
//     if(gender==Male){
//         cout<<"Male is here";
//     }
//     return 0;
// }

// ---------- year function
//enum year{
//    jan,feb,mar,apr,may,june,
//    july,aug,sep,oct,nev,Dec};
//int main(){
//    int i;  // jan is name representing a integer
//    for(i=jan;i<=Dec;i++){
//        cout<<i<<endl;
//    }
//    return 0;
//}


// -----------------------Dynamic memory allocation in C++ -----------------------
// new and delete operators
// syntax  new d_type(value)  -- create only single block and store value in it
// new d_type[n] -- create n block
//#include <iostream>
//using namespace std;
//int main(){
//    // int* ptr=new int;  //an int block is created
//    // *ptr=45;
//    // cout<<*ptr;     // work
//    // int* ptr=new int(50);
//    // cout<<*ptr;
//    // ------------- block of memory
//    // int *ptr = new int[5]; //an dynamic array;
//    // ptr[0]=1; ptr[1]=2; ptr[2]=3; ptr[3]=4; ptr[4]=5;
//    // cout<< ptr[3];    // working
//// ----  delete keyword for free memory
//    int *ptr1=new int;
//    int *ptr2=new int[10];
//    delete ptr1 // delete only one block
//    delete[] ptr2 // delete entire block or array
//    return 0;
//}






//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Part IInd <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<,

//------------------- Exception Handling ------------------------





