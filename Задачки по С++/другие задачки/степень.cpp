//2. x^n
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int x,n,a;
    for(x=1; x<=10;x++) {
    cout<<"введите число: ";
	cin>>x;
    cout<<"введите степень числа: ";
	cin>>n;  	
	cout<<x<<"^"<<n<<"="<<pow(x,n)<<endl; }
	return 0;
}
