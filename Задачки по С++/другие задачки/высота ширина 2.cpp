#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int b,i;
    cout<<"введите число:  ";
	cin>>b;//кол-во символов по ширине и вертикале
	for (int i=0;i<b;i++){ //повторить b раз следующие действия
	for ( int j=0;j<(b-i-1);j++){ //вывести точки от b раз до 0 и каждый уменьшая их
	cout<<"."; }  
	for ( int k=0;k<(i+1);k++){//вывести звездочки увеличивая от 0 до b раз	
	cout<<"*";}
	cout<<endl;}
	return 0;
}

