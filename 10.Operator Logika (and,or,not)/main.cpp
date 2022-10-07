#include <iostream>

//Operator Logika (and,or,and)

using namespace std;

int main() {
	
	int a = 5;
	int b = 4;
	
	bool hasil;

	
	cout << "JIKA NILAI 1(True) DAN JIKA NILAI 0(FALSE)" << endl;
	cout << "-------------------------------------------\n" << endl;
	
	//not (!)
	hasil = !(a == 5);
	cout << "LOGIKA NOT (!) \n" << endl;
	cout << "Hasil dari logika (not)-> " <<  hasil << "\n\n" << endl;
	
	
	cout << "-------------------------------------------\n\n" << endl;
	
	
	//and (&&)
	//Logika "and (&&)".Jika salah satu salah maka semua akan di anggap false,jika keduanya benar maka akan di anggap true.
	cout << "LOGIKA AND (&&) \n" << endl;
	
	hasil = (a == 5) and (b == 4);
	cout << "true and true-> " << hasil << "\n" << endl;
	
	hasil = (a == 2) and (b == 4);
	cout << "false and true-> " << hasil << "\n" << endl;
	
	hasil = (a == 5) && (b == 1);
	cout << "true and false-> " << hasil << "\n" << endl;
	
	hasil = (a == 7) && (b == 8);
	cout << "false and false-> " << hasil << "\n\n" << endl;
	
	
	cout << "-------------------------------------------\n\n" << endl;
	
	
	//or (||)
	//Logika "or (||)".Jika salah satunya salah dan satu nya benar maka akan tetap di anggap true,Jika keduanya salah maka akan di anggap false.
	cout << "LOGIKA OR (||) \n" << endl;
	
	hasil = (a == 5) or (b == 4);
	cout << "true and true-> " << hasil << "\n" << endl;
	
	hasil = (a == 6) or (b == 4);
	cout << "false and true-> " << hasil << "\n" << endl;
	
	hasil = (a == 5) || (b == 9);
	cout << "true and false-> " << hasil << "\n" << endl;
	
	hasil = (a == 10) || (b == 1);
	cout << "false and false-> " << hasil << "\n\n" << endl;
	
	
	cout << "-------------------------------------------\n\n" << endl;
	
	
	cin.get();
	return 0;
}
