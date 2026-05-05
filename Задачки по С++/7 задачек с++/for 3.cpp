//3.сумма всех целых нечетных чисел в диапазоне, вводимом с клавиатуры
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int A, B, sum;
	cout<<"введите диапазон: "<<endl;
	do {
	cout<<"от ";
    cin>>A;
    cout<<"до ";
    cin>>B;	
   	}
	while(A<=B);
        if(A%2!=0)
        sum+=A++;
    cout<<"сумма чисел в диапазоне= "<<sum<<endl;	
	return 0;
}
