//случайным образом заполнить массив от 0 до 10, 10 чисел без повторений
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {
	setlocale(LC_ALL,"RUS");	

	int const SIZE=10;
	int arr[SIZE];
	int i,j,k;
	srand (time(0));
	  cout<<"вывод чисел от 0 до 10: "<<endl;
	for(int i=0; i<SIZE; i++){
		k:arr[i]=0+rand()%11;//рандом
		 for (int j=0; j<i; j++)
            if (arr[j]==arr[i]) goto k;//проверка на одинаковые числа
		}
	for(int i=0; i<SIZE; i++){
			cout<<" "<<arr[i]<<" ";}//вывод массива 

	return 0;
}

