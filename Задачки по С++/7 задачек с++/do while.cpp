//6.сумма всех целых нечетных чисел в диапазоне, вводимом с клавиатуры
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	double A,B;
	 int sum, b, a;
	sum=0;
	cout<<"введите диапазон: "<<endl;
	do {
    cout<<"от:";
    cin>>A;
    cout<<"до:";
    cin>>B; 
	A=(int)a;
    B=(int)b;}
    while(a<=b); {
    
        if(a%2!=0)
        sum+=a++;
        a++; }
    cout<<"сумма целых нечетных чисел в диапазоне= "<<sum<<endl;
    return 0;
}
