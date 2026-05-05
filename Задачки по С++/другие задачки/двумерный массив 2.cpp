//1. с клавиатуры ввести двумерный массив по сторкам. сумма элементов столбцов
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const STR=3;//строка
	int const STLB=4;//столбец
	int arr[STR][STLB];
	int sum,j;
	srand (time(0));
	cout<<"двумерный массив: "<<endl;
	  //ввод массива
	for(int i=0; i<STR; i++){ //строки	
		sum=0;
		for(int j=0; j<STLB; j++){//столбцы
		//cin>>arr[i][j];
			arr[i][j]=0+rand()%6;
			for(int j=0; j<STLB; j++){
			
		sum+=arr[i][j];	}// выводится сумма первой строки ???
}}
		//вывод массива
		 for(int i=0; i<STR; i++)
		 {
    	for(int j=0; j<STLB; j++)
		{
		cout<<arr[i][j]<<" ";	
		}
			cout<<endl;	
			}
			cout<<"сумма столбцов="<<sum<<endl;
	
	
	
		
	return 0;
}

