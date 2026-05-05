//4. вести N различных чисел, найти кол-во положительных чисел
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	double  n, a,kol;
	cout<<"ведите числа:"<<endl;	
	kol=0;
	for (;a=n;) {
		cin>>a;		
		   kol+=(a>0);	
		   if (a==0)
		   n=0;		
		   }
		   cout<<"кол-во положительных чисел= "<<kol<<endl;	
return 0;
}
