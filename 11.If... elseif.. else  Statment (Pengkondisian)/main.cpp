#include <iostream>

//If Statment / Pengkondisian dengan metode "if"

using namespace std;

int main() {
	
	int a;
	
	cout << "SILAHKAN MASUKAN ANGKA DARI 1 SAMPAI 30 = ";
	cin >> a;
	
	cout << "------------------------------------------\n\n" << endl;
	
	if(a >= 1 && a <= 15){
		
		cout << "Anda memasukan angka yang berkisar dari (1) - (15) dengan nilai --> " << a << endl; 
	}
	
	else if(a >= 16 && a <= 30){
		
		cout << "Anda memasukan angka yang berkisar dari (16) - (30) dengan nilai --> " << a << endl;
		
	}
	
	else{
		
		cout << "Anda memasukan angka di bawah (1) atau di atas (30) dengan nilai --> " << a << endl;
		;
	}
	
	cin.get();
	return 0;
}
