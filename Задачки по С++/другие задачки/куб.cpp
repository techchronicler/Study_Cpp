// по заданному ребру куба определить его объем, площадь грани, площадь поверхности.
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int a, V, Sg, Sp;
	cout<<" ребро куба= ";
	cin>>a;
	cout<<" объем куба= ";
	V=a*a*a;
	cout<<V<<endl;
	cout<<" площадь грани куба= ";
	Sg=a*a;
	cout<<Sg<<endl;
	cout<<" площадь поверхности куба= ";
	Sp=6*a*a;
	cout<<Sp<<endl;
	return 0;
}

