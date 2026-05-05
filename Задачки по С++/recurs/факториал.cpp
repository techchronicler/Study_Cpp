//задание2
#include <iostream>	
int factorial(int n) {//обх€вление функции. n-сколько раз вызываетс€ фу-€
	if (n<=1) {    //если введенное число =>1
		return 1;  //возвращаем значение 1
	} 
	return (n*factorial(n-1)); //иначе высчитываем факториал
}
using namespace std;
int main() {
setlocale(LC_ALL,"RUS");
int a;//число, от которого будем искать факториал
cout<<"введите число:";
cin>>a;
cout<<a<<"!="<<factorial(a);//функци€ факториал от введенного числа.
  return 0;}
