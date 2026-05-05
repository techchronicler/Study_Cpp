//4. выводит фамилию запятую пробел имя string #include <string>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	//setlocale(LC_ALL,"RUS"); 
	//const int size=100;//чем больше значение тем больше символов читает
	//если значение меньше чем символов, не дает ничего ввести
	string name;//имя, которое мы вводим
	string name2;
	cout<<"Enter your first name: "<<endl;
	getline(cin,name);//Петров
	cout<<"Enter your last name: "<<endl;
	getline(cin,name2);//Иван
	cout<<"Here's the information is a single string: "<<name<<", "<<name2;
	//Петров, Иван
	return 0;
}
