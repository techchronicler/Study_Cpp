//3.вывод по строкам с клавы. сумму элементов по строкам
//j выводит строки, а не столбцы
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
	cout<<"матрица: "<<endl;
	  //ввод массива
	for(int i=0; i<STR; i++){	
		for(int j=0; j<STLB; j++){
		//cin>>arr[i][j];
			arr[i][j]=0+rand()%6;} }	
			
			//вывод массива
		 for(int i=0; i<STR; i++)
		 {
    	for(int j=0; j<STLB; j++)
		{
		cout<<arr[i][j]<<" ";	
		}
			cout<<endl;	
			}
			
	for(int i=0; i<STR; i++){ 	
	    sum=0;
	    for(int j=0; j<STLB; j++){
		sum+=arr[i][j];}
	cout<<"строка "<<i+1<<" , сумма="<<sum<<endl;}	
	return 0;
}

