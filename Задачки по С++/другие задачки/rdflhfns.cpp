// 1. квадрат первых 10 чисел
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int a,b;
	for(a=1; a<=10;a++) {
	b=a*a;		
	cout<<a<<"^2="<<b<<endl;
	}
	
	return 0;
}

