//случайным образом заполнить массив от 375 до 1000 найти минимум и максимум
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const SIZE=5;
	int arr[SIZE];
	int max,min;
	srand (time(0));
	  cout<<"вывод чисел от 375 до 1000: "<<endl;
	for(int i=0; i<=SIZE; i++){
		arr[i]=375+rand()%624;//1000-375-1
	}
	for(int i=0; i<=SIZE; i++){
			cout<<arr[i]<<endl;}
			max=arr[0];
			min=arr[0];
			for(int i=0; i<=SIZE; i++){
		if (arr[i]>max) max=arr[i];
		if (arr[i]<max) min=arr[i];}
			cout<<"max число= "<<max<<endl;
			cout<<"min число= "<<min<<endl;	


	return 0;
}

