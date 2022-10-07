#include <iostream>

//While Loop / Pengulangan. Metode pengulanngan ini,dilakukan pengecekan terlebih dahulu baru dijalankan
//Jika parameter/syarat tidak terpenuhi maka pengulangan tidak akan dijalankan.

using namespace std;

int main() {
	
	int a = 5;
	
	while(a <= 20){
		
		cout << "Angka ";
		cout << a << endl;
		a++; //atau bisa juga dengan (a += 1;)
	}
	
	cout << "\n";
	cout << "Akhir baris dari angka" << endl;
	
	cin.get();
	return 0;
}
