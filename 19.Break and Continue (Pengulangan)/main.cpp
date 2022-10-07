#include <iostream>

//Break & Continue. Berfungsi untuk "Menghentikan" dan "Mengskip" suatu nilai didalam looping.

using namespace std;

int main() {
	
	for(int i = 0; i <= 10; i++){
		
		if(i == 5){
			
			//break;	//Menghentikan
			continue;	//Mengskip
		}
		
		cout << "Looping ke : " << i << endl;
	}
	
	cout << "\n\n";
	cout << "Akhir dari baris Looping" << endl;
	
	cin.get();
	return 0;
}
