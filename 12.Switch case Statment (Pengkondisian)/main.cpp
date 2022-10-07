#include <iostream>

//Switch Case / Pengkondisian dengan metode switch case.

using namespace std;

int main() {
	
	int a;
	
	cout << "Silahkan Masukan Angka Dari (1 - 5) = ";
	cin >> a;
	
	cout << "----------------------------------------\n\n" << endl;
	
	
	switch(a){
		
		case 1:
			cout << "Anda Memperoleh Nilai--> a = 1 \n\n" << endl;
		break;
		
		case 2:
			cout << "Anda Memperoleh Nilai--> a = 2 \n\n" << endl;
		break;
		
		case 3:
			cout << "Anda Memperoleh Nilai--> a = 3 \n\n" << endl;
		break;
		
		case 4:
			cout << "Anda Memperoleh Nilai--> a = 4 \n\n" << endl;
		break;
		
		case 5:
			cout << "Anda Memperoleh Nilai--> a = 5 \n\n" << endl;
		break;
		
		default:
			cout << "Nilai Default! \n\n" << endl;
				
	}
	
	
	cout << "Terima Kasih Telah Berpartisipasi :)" << endl;
	
	
	cin.get();
	return 0;
}
