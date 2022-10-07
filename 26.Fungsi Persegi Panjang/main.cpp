#include <iostream>

//Latihan Fungsi Luas dan Keliling Persegi Panjang

using namespace std;


//Fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l){
	
	double luas = p * l;
	return luas;
}


double hitung_keliling(double p, double l){
	
	double keliling = 2 * (p * l);
	return keliling;
}


void tampilkan_luas(double p, double l){
	
	cout << "[MENGGUNAKAN VOID] \n";
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p,l) << endl;
	cout << "\n\n";
}


void tampilkan_keliling(double p, double l){
	
	cout << "[MENGGUNAKAN VOID] \n";
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(p,l) << endl;
}


int main() {
	
	cout << "Program Menghitung Luas dan Lebar Persegi Panjang" << endl;
	cout << "--------------------------------------------------" << "\n" << endl;
	
	double panjang, lebar;
	cout << "Masukan Nilai Panjang: ";
	cin >> panjang;
	cout << "Masukan Nilai Lebar: ";
	cin >> lebar;
	cout << "\n";
	
	
	tampilkan_luas(panjang,lebar);
	tampilkan_keliling(panjang,lebar);
	
	
	cin.get();
	return 0;
}
