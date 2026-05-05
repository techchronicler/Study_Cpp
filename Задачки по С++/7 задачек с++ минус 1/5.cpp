//5.квадратная матрица.среднее арифм  главной диаган. 
//кол-во положительных элементов, которые больше ср. арифм
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const STR=3;//строка
	int const STLB=3;//столбец
	int arr[STR][STLB];
	double sum, count=0, countt, sr;
	int i,j;
	srand (time(0));
	cout<<"матрица: "<<endl;
	  //ввод массива
	for(int i=0; i<STR; i++){ //строки	
		for(int j=0; j<STLB; j++){//столбцы
			arr[i][j]=-2+rand()%6;	
}} 
    //высчитываем сумму главной диаганали
    sum=0;
    for(int i=0; i<STR; i++){ 
	count+=1;//кол-во нужных элементов
	sum+=arr[i][i];	//сумма этих элементов
	}	
	sr=sum/count;

	countt=0;
    for(int i=0; i<STR; i++){	
	for(int j=0; j<STLB; j++){
	if(((arr[i][j])>0) && ((arr[i][j])>sr))	{
		countt+=1; }
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
cout<<"ср.арифм.гл. диаганали="<<sr<<endl;
cout<<"положительные элементы больше"<<sr<<"= "<<countt<<endl;
return 0;
}

