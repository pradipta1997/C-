#include <iostream>

//Komparasi Boolean adalah yang berisikan nilai "True (1)" dan nilai "false (0)"
//Dan akan di kompilasi dengan (OPERATOR ASSIGNMENT)

using namespace std;

int main() {
	
	int a = 5;
	int b = 5;
	
	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;
	
	
	cout << "JIKA NILAI 1(True) DAN JIKA NILAI 0(False)" << endl;
	cout << "-------------------------------------------\n" << endl;
	
	//Sebanding (==)
	hasil1 = (a == b);
	cout << "Hasil sebanding-> " << hasil1 << "\n" << endl;
	
	//Tidak Sebanding (!=)
	hasil2 = (a != b);
	cout << "Hasil tidak sebanding-> " << hasil2 << "\n" << endl;
	
	//Kurang Dari (<)
	hasil3 = (a < b);
	cout << "Hasil kurang dari-> " << hasil3 << "\n" << endl;
	
	//Lebih Dari (>)
	hasil4 = (a > b);
	cout << "Hasil lebih dari-> " << hasil4 << "\n" << endl;
	
	//Kurang Dari Sama Dengan (<=)
	hasil5 = (a <= b);
	cout << "Hasil kurang dari sama dengan-> " << hasil5 << "\n" << endl;
	
	//Lebih Dari Sama Dengan (>=)
	hasil6 = (a >= b);
	cout << "Hasil lebih dari sama dengan-> " << hasil6 << "\n" << endl; 
	
	
	cin.get();
	return 0;
}
