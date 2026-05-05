//2.вывод по строкам с клавы. сумму элементов по столбцам
//j выводит строки, а не столбцы
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const STR=3;//столбец
	int const STLB=4;//стока
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
			
	for(int j=0; j<STLB; j++){ 	
	    sum=0;
	    for(int i=0; i<STR; i++){
		sum+=arr[i][j];}	
	cout<<"столбец "<<j+1<<" , сумма="<<sum<<endl;}	
	return 0;
}
