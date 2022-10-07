#include <iostream>
#include <cstdlib>  // <-- Mengandung Fungsi Random / rand()

using namespace std;

//Laihan Membuat Dadu Acak

int main() {
	
	char lanjut;
	
	while(true){
		
		cout << "Apakah Ingin Melempar Dadu ? (y/n)";
		cin >> lanjut;
		cout << "\n";
		
		
		if(lanjut == 'y'){
			
			cout << "Anda Mendapatkan Angka --> " << 1 + (rand() % 6) << endl;
			cout << "-----------------------------\n" << endl;
		}
		
		else if(lanjut == 'n'){
			
			break;
		}
		
		else{
			
			cout << "Statment yang Anda Masukan Salah, Silahkan Pilih y / n" << endl;
		}
		
	}
	
	
	cin.get();
	return 0;
}
