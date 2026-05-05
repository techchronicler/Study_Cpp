//1. ввести 2 имени и возраст, потом программа должна вывести имя 2, имя 1 возраст
#include <iostream>
using namespace std;
int main() {
	//setlocale(LC_ALL,"RUS"); УБРАЛА ЕЕ И ВСЕ ЗАРАБОТАЛО???????????
	const int size=2;//чем больше значение тем больше символов читает
	//если значение меньше чем символов, не дает ничего ввести
	char name[size];//имя, которое мы вводим
	char name2[size];
	int age;
	cout<<"What is your first name?"<<endl;
	cin.getline(name,size); //cin.getline позволяет вводить больше 1 слова
	//cin>>name;//Бэтти Сью
	cout<<"What is your last name?"<<endl;
	cin.getline(name2,size);
	cout<<"What is your age?"<<endl;
	cin>>age;//22
	cout<<"Name: "<<name2<<", "<<name<<endl;
	cout<<"Age:"<<age;
	return 0;
}

