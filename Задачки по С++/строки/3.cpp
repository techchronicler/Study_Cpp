//3. выводит фамилию запятую пробел имя 
//использовать char #include <cstring>
#include <iostream>
using namespace std;
int main() {
	//setlocale(LC_ALL,"RUS"); 
	const int size=100;//чем больше значение тем больше символов читает
	//если значение меньше чем символов, не дает ничего ввести
	char name[size];//имя, которое мы вводим
	char name2[size];
	cout<<"Enter your first name: "<<endl;
	cin.getline(name,size);//Петров
	cout<<"Enter your last name: "<<endl;
	cin.getline(name2,size); //иван
	cout<<"Here's the information is a single string: "<<name<<", "<<name2<<endl;
	//Петров, Иван
	return 0;
}
