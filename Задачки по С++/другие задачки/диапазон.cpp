//3. всех целых нечетных чисел в диапазоне, вводим с клавиатуры
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	double a,b;
	int A, B,c;
	cout<<"введите диапазон: "<<endl;
	cout<<"от ";
    cin>>a;
    cout<<"до ";
    cin>>b;
    cout<<"целые нечетные числа в диапазоне: "<<endl;
    A=(int)a;
    B=(int)b;
	for (int c=A; c<=B; c++)
	if(c%2!=0) 
	cout<<c++<<" ";
	return 0;
}

