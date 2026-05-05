//1. ввод с клавы. дробные числа. 5 элементов. вывод кол-ва нулевых элементов.
//перед вводом подсказка какой по счету элемент вводится
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const SIZE=5;//5
	double arr[SIZE];
	int count=0;
	srand (time(0));
	  cout<<"введите дробные числа и нули: "<<endl;
    for(int i=1; i<=SIZE; i++){
    	cout<<i<<" элемент: ";
		cin>>arr[i];
	}
	for (int i=1; i<SIZE; i++) {
		if (arr[i]!=0)
	count+=1;
	}
			 cout<<endl;	
			 cout<<"кол-во ненулевых элементов: "<<count<<endl;
	return 0;
}

