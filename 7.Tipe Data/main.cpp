#include <iostream>

using namespace std;

//Tipe Data Pada Bahasa Pemograman C++

int main() {
	
	int a = 2147483647;
	
	cout << a << endl;
	cout << sizeof(a) << "byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	
	cin.get();
	
	return 0;
}
