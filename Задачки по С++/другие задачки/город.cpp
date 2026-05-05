
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int m,r,km;
	cout<<"масштаб карты"<<endl;
	m=m/100000;
cin>>m;
cout<<"растояние между точками"<<endl;
cin>>r;
cout<<"растояние между пунктами"<<endl;
km=m*r;
cout<<""<<km<<"км"<<endl;
return 0;
}

