#include <iostream>

//Fungsi Prototipe

using namespace std;

//Ini adalah Prototipe,fungsi "hitung_luas" dan "println" akan diabaikan tanpa prototipe diatas "int main"
double hitung_luas(double p, double l);
void println(double x);


//Yang pertama kali dijalankan pada program (int main)
int main() {
	
	double panjang,lebar,luas;
	cout << "Masukan Nilai Panjang: ";
	cin >> panjang;
	cout << "Masukan Nilai Lebar: ";
	cin >> lebar;
	cout << "\n";
	
	luas = hitung_luas(panjang,lebar);
	
	println(luas);
	
	cin.get();
	return 0;
}

//Fungsi
double hitung_luas(double p, double l){
	return p * l;
}

//Fungsi.Bisa menggunakan "double" atau "void"
void println(double x){
	cout << "Hasil: " << x << endl;
}
