#include <iostream>

//Increment(Pertambahan) & Decrement(Pengurangan).
//Didalam Increment ada yang namanya "Preincrement" dan "Postdecrement".

using namespace std;

int main() {
	
	int a = 5;
	int b = 5;
	
	//Post Increment --> yang paling sering digunakan
	cout << "Nilai (a) awal --> " << a << endl;
	cout << "Di print terlebih dahulu baru ditambahkan setelahnya --> " << a++ << endl;
	cout << "Baru ditambahkan (1+) --> " << a << "\n\n" << endl;
	
	cout << "-----------------------------------------------------------\n\n" << endl;
	
	cout << "Nilai (b) awal --> " << b << endl;
	cout << "Di tambahkan terlebih dahulu baru diprint --> " << ++b << endl;
	cout << "Diprint --> " << b << endl;
	
	
	cout << "-----------------------------------------------------------\n\n" << endl;
	
	cout << "TEKAN TOMBOL ENTER 2X UNTUK KELUAR" << "\n" << endl;
	
	
	cin.get();
	return 0;
}
