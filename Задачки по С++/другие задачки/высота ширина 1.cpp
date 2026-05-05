//ввести высоту и ширину, выведится в звездочках
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int h,b,i,j;
    cout<<"введите ширину:  ";
	cin>>b; 
	cout<<"введите высоту:  ";
	cin>>h;
	for (j=1; j<=h;j++) {
	for ( int i=0;i<=b;i++) 
	{
	cout<<"*";}
		cout<<endl;}
	return 0;
}

