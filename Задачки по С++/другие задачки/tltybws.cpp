#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int a,ed,des,sot;
	cout<<"введите трехзначное число: ";
	cin>>a;
		cout<<"еденицы числа: ";
		ed=a%10;
		cout<<ed<<endl;
			cout<<"десятки числа: ";
		des=a/10%10;
		cout<<des<<endl;
		cout<<"сотни числа: ";
		sot=a/100;
		cout<<sot<<endl;
	return 0;
}
