#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	char c;
	double t;
	cout<<"min: ";
	cin>>t;
		cout<<"kod: ";
	cin>>c;
	switch (c) {
	case 123:
	cout<<"Сложение: "<<t*2;
	break;
		case 154:
	cout<<"Вычитание: "<<t*3;
	break;
		case 458: 
		cout<<"Деление: "<<t*5;	
	break;	
		case 456:
	cout<<"Умножение: "<<t*4;
	break;
	default:
		cout<<"нет такой команды";
		break;
	}

	return 0;
}
