//2. массив 30 элементов ср. арифм. нечетных элем.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const SIZE=5;//30
	int arr[SIZE];
	double sum=0, count=0, sr;
	srand (time(0));
	  cout<<"вывод чисел от 0 до 1000: "<<endl;
    for(int i=0; i<=SIZE; i++){
		arr[i]=0+rand()%101;//1001
	}
	for (int i=0; i<SIZE; i++) {
		if (arr[i]%2!=0) {
	count+=1;
	sum+=arr[i];	
	}	
	sr=sum/count;
	}
		for(int i=0; i<SIZE; i++){
			cout<<" "<<arr[i]<<" ";}
			 cout<<endl;	
			 cout<<"среднее арифмитическое этих чисел: "<<sr<<endl;
			
	return 0;
}

