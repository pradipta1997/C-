#include <iostream>

using namespace std;

//Operator Aritmatika -> +(Tambah), -(Pengurangan), *(Perkalian), /(Pembagian), %(Modulus/Sisa Hasil Pembagian)

int main() {
	
	int a = 6;
	int b = 4;
	int c = 5;
	
	int hasil;
	
	
	//Tambah
	hasil = a + b;
	cout << "Pertambahan-> " << a << " + " << b << " = " << hasil << endl;
	
	//Pengurangan
	hasil = a - b;
	cout << "Pengurangan-> " << a << " - " << b << " = " << hasil << endl;
	
	//Perkalian
	hasil = a * b;
	cout << "Perkalian-> " << a << " * " << b << " = " << hasil << endl;
	
	//Pembagian
	//Jika pembagian,salah satu tipe data harus ada yang "float".Dan untuk variabel "hasil" juga harus "float".
	//Untuk mendapatkan angka dibelakang koma(,)
	hasil = a / b;
	cout << "Pembagian-> " << a << " / " << b << " = " << hasil << endl;
	
	//Modulus
	//Jika modulus,akan error jika variabel menggunakan tipe data "float".Harus menggunakan tipe data "int".
	hasil = a % b;
	cout << "Modulus-> " << a << " % " << b << " = " << hasil << endl;
	
	//Urutan Eksekusi
	//Jika urutan eksekusi,kita harus menambahkan "()" untuk menjalankan yang mana terlebih dahulu yang akan di eksekusi.
	hasil = a + (b * c);
	cout << "Urutan Eksekusi-> " << a << " + " << b << " * " << c << " = " << hasil << endl;
	
	
	cin.get();
	return 0;
}
