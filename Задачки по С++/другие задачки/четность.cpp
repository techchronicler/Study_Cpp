#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int a;
	cout<<" введите число "<<endl;
	cin>>a;
	if (a%2==0) 
	cout<<" число четное"<<endl;
	else
	cout<<" число нечетное"<<endl; 
	if (a%3==0) 
	cout<<" число делится на 3"<<endl;
	else
	cout<<" число не делится на 3"<<endl; 
	if (a%5==0)
	cout<<" число делится на 5"<<endl;
	else
	cout<<" число не делится на 5"<<endl; 
	if (a%2==0 && a%3==0 && a%5!=0)
	cout<<" число подходит"<<endl;
	else
	cout<<" число частично подходит"<<endl;
	if (a%2!=0 && a%3!=0 && a%5==0)
	cout<<" число не подходит"<<endl;
	return 0;
}

