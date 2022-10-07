#include <iostream>

//Latihan Membuat Kalkulator Sederhana

using namespace std;

int main() {
	
	float nilai1, nilai2, hasil;
	char aritmatika;
	
	cout << "Selamat Datamg di Program Kalkulator Sederhana" << endl;
	cout << "-----------------------------------------------\n\n" << endl;
	
	
	//Memasukan Input Dari User
	cout << "Masukan Nilai Pertama : ";
	cin >> nilai1;
	cout << "\n";
	
	cout << "Masukan Operator (+, -, *, /) : ";
	cin >> aritmatika;
	cout << "\n";
	
	cout << "Masukan Nilai Kedua : ";
	cin >> nilai2;
	cout << "\n";
	
	cout << "-----------------------------------------------\n" << endl;
	
	cout << "Hasil Perhitungan : ";
	cout << nilai1 << aritmatika << nilai2;
	
	
	//Pengkondisian Dengan Metode if... else if.. else
	if(aritmatika == '+'){
		
		hasil = nilai1 + nilai2;
		cout << " = " << hasil << endl;
	}
	
	else if(aritmatika == '-'){
		
		hasil = nilai1 - nilai2;
		cout << " = " << hasil << endl;
	}
	
	else if(aritmatika == '*'){
		
		hasil = nilai1 * nilai2;
		cout << " = " << hasil << endl;
	}
	
	else if(aritmatika == '/'){
		
		hasil = nilai1 / nilai2;
		cout << " = " << hasil << endl;
	}
	
	else{
		
		cout << "Operator Aritmatika yang Anda Input Salah" << endl;
	}
	
	
	cin.get();
	return 0;
}
