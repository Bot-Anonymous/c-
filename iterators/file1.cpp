#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec={1,2,3,4,5,6,7};
	auto i=vec.begin();
	i+=3;
	cout<<i-vec.begin();
	return 0;
}