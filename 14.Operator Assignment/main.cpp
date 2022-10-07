#include <iostream>

//Operator Assignment

using namespace std;

int main() {
	
	//assignment
	int a = 10;
	
	cout << "Nilai awal dari (a) adalah : " <<  a << "\n" << endl;
	
	a += 3;
	cout << "Ditambah (+) 3 menjadi   --> " << a << endl;
	
	a -= 3;
	cout << "Dikurang (-) 3 menjadi   --> " << a << endl;
	
	a *= 3;
	cout << "Dikali (*) 3 menjadi     --> " << a << endl;
	
	a /= 3;
	cout << "Dibagi (/) 3 menjadi     --> " << a << endl;
	
	a %= 3;
	cout << "Dimodulus (%) 3 menjadi  --> " << a << endl;
	
	

	//Nilai awal (a)=10, ditambah 10+3=13, dikurang 13-3=10, dikali 10x3=30, dibagi 30/3=10, dimodulus 10%3=1
	
	cin.get();
	return 0;
}
