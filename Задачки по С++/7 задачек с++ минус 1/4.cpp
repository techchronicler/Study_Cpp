//4.матрица 5х5. элементы на главной диаганали.ср арифм этих элем.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const STR=5;//строка
	int const STLB=5;//столбец
	int arr[STR][STLB];
	double sum=0, count=0, sr;
	srand (time(0));
	cout<<"матрица: "<<endl;
	  //ввод массива
	for(int i=0; i<STR; i++){ //строки	
		for(int j=0; j<STLB; j++){//столбцы
			arr[i][j]=-6+rand()%6;		
}} 
    //высчитываем сумму главной диаганали
    sum=0;
    for(int i=0; i<STR; i++){ 
	count+=1;//кол-во нужных элементов
	sum+=arr[i][i];	//сумма этих элементов
	}	
	sr=sum/count;
		//вывод массива
		 for(int i=0; i<STR; i++)
		 {
    	for(int j=0; j<STLB; j++)
		{
		cout<<arr[i][j]<<" ";	
		}
			cout<<endl;	
			}
			cout<<"сумма главной диаганали= "<<sum<<endl;
			cout<<"кол-во чисел на ней= "<<count<<endl;
			cout<<"ср.арифм.гл. диаганали="<<sr<<endl;
	return 0;
}

