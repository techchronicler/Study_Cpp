//6. номер строки, на коттрой сумма элементов максимальна
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const STR=3;//строка
	int const STLB=4;//столбец
	int arr[STR][STLB];
	int sum,j,max,i,a;
	srand (time(0));
	cout<<"матрица: "<<endl;
	  //ввод массива
	for(int i=0; i<STR; i++){	
		for(int j=0; j<STLB; j++){
		//cin>>arr[i][j];
			arr[i][j]=-3+rand()%6;	}	}
			
			//вывод массива
		 for(int i=0; i<STR; i++)
		 {
    	for(int j=0; j<STLB; j++)
		{
		cout<<arr[i][j]<<" ";	
		}
			cout<<endl;	
			}
			
			
	for(int i=0; i<STR; i++){ //строки	
	    sum=0;
	    for(int j=0; j<STLB; j++){
		sum+=arr[i][j];}	// выводится сумма строк ???
	cout<<"строка "<<i<<" , сумма="<<sum<<endl;}
    a = 0;
    max = -1000;
    for(int i=0; i<STR; i++){ 
	   sum = 0;
	   for(int j=0; j<STLB; j++){
	       sum += arr[i][j];}
           if(max < sum){
        max = sum;
		a = i;}}
	cout<<"max сумма строк= "<<max<<"  № строки "<<a<<endl;
	
	return 0;
}

