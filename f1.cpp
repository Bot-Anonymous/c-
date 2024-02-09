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


//----------------------------- File Handling --------------------------
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	// creting new file and insertion data using insertion operator
//	ofstream file;
//	file.open("./files/demo1.txt");  // if file is not then will created
////	file<<"Hello this is Yogesh Kumar";  // insertion operator to store data
//	string name="YOgesh Kumar";
//	file<<name;
//	file.close();
//	return 0;
//}

//---
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(){
//	ofstream file;
//	file.open("./files/demo1.txt");
//	string line;
//	while(true){
//		getline(cin,line);
//		if(line=="-1"){
//			break;
//		}
//		file<<line;
//		file<<'\n';  // for newline
//	}
//	file.close();
//	return 0;
//}

//------ reading a file
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	ifstream file;  // input stream object
//	file.open("./files/demo1.txt");
//	char ch;
////	file>>ch;   // read only character
////	cout<<ch;
//	while(!file.eof()){   // eof -- end of file
////	file>>ch;
////	cout<<ch;   // it will not read space or any special character
////	to handle this use get function
//	ch=file.get();
//	cout<<ch;
//}
//	file.close();
//	return 0;
//}
//----------- both simultaneously
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	fstream file;
//	file.open("./files/demo1.txt",ios::app | ios::in);
//	while(true){
//		string line;
//		cin>>line;
//		if (line=="-1"){
//			break;
//		}
//		file<<line;
//		file<<'\n';
//	}
//	while(!file.eof()){
//		cout<<file.get();
//	}
//	file.close();
//	return 0;
//}


//tellg() -- input stream  and tellp() -- output stream

//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
////	ifstream file1;
////	file1.open("./files/demo2.txt");
////	while(!file1.eof()){
////		char ch;
////		cout<<file1.tellg()<<endl;
////		ch=file1.get();
////	}
////	file1.close();
////--- tellp()  function
//	fstream file;
//	file.open("./files/demo2.txt",ios::app);
//	cout<<file.tellp()<<endl;
//	file<<"Hello this is";
//	cout<<file.tellp();
//	file.close();
//	return 0;
//}

//------------------- seekg() and seekp()

//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	ifstream file;
//	file.open("./files/demo2.txt");
//	cout<<file.tellg()<<endl;
//	char ch=file.get();
//	cout<<file.tellg()<<endl;
//	file.seekg(0,ios::beg);   // come to initial pos
//	cout<<file.tellg()<<endl;   
//	char ch1=file.get();
//	cout<<ch1;
//	file.close();
//	return 0;
//}

//>>>>>>>>>>>>>>>>>>>>>>>>> templates <<<<<<<<<<<<<<<<<<<<<<<
//#include <iostream>
//using namespace std;
//template <typename T>
//T max1(T x,T y){
//	return (x>y)?x:y;
//}
//int main(){
//	cout<< max1<int>(5,7);
//	cout<< max1<char>('z','x');   // this is how templates works
//	return 0;
//}
//------------- application
//#include <iostream>
//using namespace std;
//template <typename T>
//void bubble_Sort(T* array,int n){
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=i;j<n;j++){
//			if(array[i]>array[j]){
//				T temp=array[i];
//				array[i]=array[j];
//				array[j]=temp;
//			}
//		}
//	}
//}
//template<typename T>
//void print(T array[],int n){
//	int i;
//	for(i=0;i<n;i++){
//		cout<<array[i]<<endl;
//	}
//}
//int main(){
//	int n=10;
//	int array1[n]={3,7,1,9,4,5,0,11,22,80};
//	char array2[n]={'s','p','q','a','y','d','m','h','o','c'};
//	bubble_Sort<int>(array1,n);
//	bubble_Sort<char>(array2,n);  // working well
//	print<int>(array1,n);
//	print<char>(array2,n);
//	return 0;
//}
//
//
//
//
//--------------- Template Class
//#include <iostream>
//#include <string>
//using namespace std;
//template <typename T>
//class demo{
//	T data;
//	public:
//		demo(T value){
//			this->data=value;
//		}
//		T get(){
//			return this->data;
//		}
//};
//int main(){
//	demo<int> d1(5);
//	demo<float> d2(6.009);
//	demo<char> d3('l');
//	demo<string> d4("Yogesh Kumar");
//	cout<<d1.get()<<endl;
//	cout<<d2.get()<<endl;
//	cout<<d3.get()<<endl;
//	cout<<d4.get()<<endl;
//	return 0;
//}


//-------- Array of nay datatype
//#include <iostream>
//#include <string>
//using namespace std;
//template <typename T>
//class Array{
//	T* data;
//	int size;
//	public:
//		Array(T arr[],int s);
//		void print();
//};
//template<typename T>Array<T>::Array(T arr[],int s){
//	data=new T[s];
//	size=s;
//	int i;
//	for(i=0;i<s;i++){
//		data[i]=arr[i];
//	}
//}
//template<typename T>void Array<T>::print(){
//	int i;
//	for(i=0;i<size;i++){
//		cout<<data[i]<<" ";
//	}
//}
//int main(){
//	int arr1[]={4,6,7,2,4};
//	char arr2[]={'a','b','z','x'};
//	Array<int> array1(arr1,5);
//	Array<char> array2(arr2,4);
//	array1.print();
//	cout<<endl;
//	array2.print();   // wprking properly
//	return 0;
//}

//--------->>>>>>>>more than one dataype as parameter
//#include <iostream>
//#include <string>
//using namespace std;
//template<typename T,typename U =char>   // can be assign default data-type
//class demo{
//	T x;
//	U y;
//	public:
//		demo(T a,U b){
//			x=a;
//			y=b;
//		}
//		void get(){
//			cout<<"First Value is : "<<this->x<<endl;
//			cout<<"Second Value is : "<<this->y<<endl;
//		}
//};
//int main(){
//	demo<int,char> d1(5,'x');
//	d1.get();
//	return 0;
//}

//------------------- templates woth static variable
//#include <iostream>
//using namespace std;
//template <typename T>
//T demo(T value){
//	static int i=0;
//	i++;
//	return i;
//}
//int main(){
//	cout<<demo<int>(1)<<endl;  // 1
//	cout<<demo<int>(1)<<endl;  // 2 as we know
//	cout<<demo<float>(1.1);    // 1 why??
//	return 0;
//}

/*  Explanation :- For different datatypes there is separate copy of static variable
for int static i different for static float 
*/


// -- Template Argument Deducting
// implicit deducting of datatypes
//#include <iostream>
//using namespace std;
//template <typename T>
//T print(T a){
//	return a;
//}
//int main(){
//	cout<< print(5); 
//	cout<< print("H");   // we not explicit tell about data type of arguments
//	return 0;
//}


//--------------------------- Templates Specialization ------
//// used for performing a certain task for defferent data-type
//#include <iostream>
//using namespace std;
//template <typename t>
//void print(t var){
//	cout<<"This is Main Template Function"<<endl;
//}
////-- template specialization
//template<>
//void print(int a){     // both function name should be same
//	cout<<"Int DataType is Passed as Argument"<<endl;
//}
//int main(){
//	print<char>('a');
//	print<int>(5);
//	return 0;
//}

// same for class
//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Standard Template Library <<<<<<<<<<<<<<<<<<<<<<<<
// algorithm given in STL 
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	int arr[]={1,7,90,3,5,2,180};
//	sort(begin(arr),end(arr));
//	for(int i:arr){
//		cout<<i<<" ";
//	}
//	return 0;
//}

//----------------------- Array STL ----------------
//#include <iostream>
//#include <array>   // this header file to  use function of array class
//using namespace std;
//int main(){
//	array<int,8> arr={4,5,6,7,8,9,1,2};
//	cout<<arr.at(0);   // use to access the element of array
//	cout<<get<1>(arr);   // same like above
//	cout<<arr[2]; // normal array method
//	cout<<arr.front();       // return the first element refrence
//	int& lastElement=arr.back();       // return the last element  refrence
//	cout<<endl;
////	--
//	cout<<arr.size();   // return no. of element in aray
//	cout<<arr.max_size();   // return max size of array
//	return 0;
//}



//----------------- vector -----------------
// they are  dynamic array
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//	vector<int> vec={1,2,3,4,5,6};
////	for(int i:vec){
////		cout<<i<<" ";
////	}
////-- to print the vector
//	auto i=vec.begin();
//	while(i!=vec.end()){
//		cout<<*i<<" ";
//		i++;
//	}
////	vec.push_back(10); // insert an element at th enf of vector
////	cout<<*(vec.begin());   // return  the iterator of first element
////	cout<<*(vec.end());   // return  the iterator of last element
//	return 0;
//}
//----------- vector with iterators
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//	vector<int> vec={4,11,6,7,8,9};
//	auto i=vec.begin();  // i is iterator object
//	i++;
//	cout<<*i<<endl;
//	return 0;
//}
//------ methods of vector
// 1). size()
// 2). max_size()
// 3). capacity()
// 4). resize(int)
// 5). empty()  --> 
// 6). shrink_to_fit()
// 7). clear()
// 8). erase()
// 9). push_back()
// 10). pop_back()   // not return the popped element
// 11). ()
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//	vector<int> vec={7,8,9,10,55,77};
//	vector<int> vec1={};
//	vec.resize(10);
//	cout<<vec.size()<<endl;
//	cout<<vec.max_size()<<endl;
//	vec.shrink_to_fit();
//	cout<<vec.max_size()<<endl;
//	cout<<vec.capacity()<<endl;
////	int a=vec.pop_back();  // error
//	return 0;
//}


//>>>>>>>>>>>>>>>>>>>>>> Namespace <<<<<<<<<<<<<<<<<<<
//#include <iostream>
//namespace space1{
//	void fun(){
//		std::cout<<"I am a Fun function of space 1";
//	}
//}
//namespace space2{
//	void fun(){
//		std::cout<<"I am fun function of space 2";
//	}
//}
//using namespace space1;
//int main(){
//	fun();  // or
//	space1::fun();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//namespace first{
//	int value=10;	
//};
//namespace second{
//	double value=20.000059;
//}
//int main(){
//	cout<<first::value<<endl;
//	printf("%lf",second::value);
//	return 0;
//}
////-------------------------- unnamed namespace ----------------
//#include <iostream>
//using namespace std;
//namespace {
//	int x=10;
//}
//
//int main(){
//	int x=20;
////	cout<<::x;       // namespace variable will print
////	cout<<x;      // main function variable will print (override the namespace variabele)
//	
//	return 0;
//}
////	  if not define then namespace variable will print

//#include <iostream>
//using namespace std;
//namespace one{
//	int a=23;
//	namespace two{
//		int value=3;
//	}
//}
//namespace second{
//	inline namespace third{
//	int value=90;
//	}
//}
//int main(){
//	cout<<one::two::value<<endl;
////	cout<<one::value<<endl;   // show error  to handle this use inline
//	cout<<second::value;
//	return 0;
//}

//------------ or 2nd method
//#include <iostream>
//using namespace std;
//namespace ns1{
//	namespace ns2{
//		namespace ns3{
//			int var=60;
//		}
//		using namespace ns3;
//	}
//	using namespace ns2;
//}
//int main(){
//	cout<<ns1::var<<endl;
//	return 0;
//}


























