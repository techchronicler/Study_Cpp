//магический квадрат
//сумма чисел в каждой строке и слбце одинаковая с др. матрицей
//сумма диаганалей одинаковая
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	//ввод  первой матрицы
	int const STR=3;//строка
	int const STLB=3;//столбец
	int arr[STR][STLB]; 
	double sumd1,sumd2,sumstr,sumst,i,j,sum1=0, sum2=0;
	
	
	//ввод второй матрицы
	int const STR1=3;//строка
	int const STLB1=3;//столбец
	int ar[STR1][STLB1]; 
	double sumd11,sumd21,sumstr1,sumst1,k, h,sum11=0, sum21=0;
	
	srand (time(0));
	cout<<"матрица1: "<<endl;{
	
	  //ввод массива
	for(int i=0; i<STR; i++){ //строки	
		for(int j=0; j<STLB; j++){//столбцы
			arr[i][j]=-6+rand()%6;	}}	
 
    //вывод массива
	for(int i=0; i<STR; i++){
	for(int j=0; j<STLB; j++){
	cout<<arr[i][j]<<" ";}
	
	cout<<endl;}	
	
	// матрица 2
	
		cout<<"матрица2: "<<endl; {

	 //ввод массива
	for(int k=0;k<STR1;k++){ //строки	
		for(int h=0; h<STLB1; h++){//столбцы
			ar[k][h]=-6+rand()%6;	}}	
 
    //вывод массива
	for(int k=0; k<STR1; k++){
	for(int h=0;h<STLB1; h++){
	cout<<ar[k][h]<<" ";}
	cout<<endl;}	}
	
		cout<<endl;
	cout<<"матрица1: "<<endl;

    //высчисляем сумму главной диаганали
    sumd1=0;
    for(int i=0; i<STR; i++){ 
	sumd1+=arr[i][i];}	//сумма этих элементов
	cout<<"сумма главной диаганали= "<<sumd1<<endl;
	cout<<endl;
	
	//высчисляем сумму побочной диаганали
	sumd2=0;
	for(int i=0; i<STR; i++){ 
	sumd2+=arr[i][STR-i-1];	}	
	cout<<"сумма побочной диаганали= "<<sumd2<<endl;
	cout<<endl;
	
	//cумма элементов каждого столбца
    for(int j=0; j<STLB; j++){ 	
	sumstr=0;
	for(int i=0; i<STR; i++){
	sumstr+=arr[i][j];}
	cout<<"столбец "<<j+1<<", сумма="<<sumstr<<endl;}
	cout<<endl;
	
	//cумма элементов каждой строки
	for(int i=0; i<STR; i++){ 	
	sumst=0;
	for(int j=0; j<STLB; j++){
	sumst+=arr[i][j];}
	cout<<"строка "<<i+1<<", сумма="<<sumst<<endl;}		
	cout<<endl;	
	

	
	
	
	//вторая матрица
	
	cout<<"матрица2: "<<endl;	
	
    //высчисляем сумму главной диаганали
    sumd11=0;
    for(int k=0; k<STR1; k++){ 
	sumd11+=ar[k][k];}	//сумма этих элементов
	cout<<"сумма главной диаганали= "<<sumd11<<endl;
	cout<<endl;
	
	//высчисляем сумму побочной диаганали
	sumd21=0;
	for(int k=0; k<STR1; k++){ 
	sumd21+=ar[k][STR1-k-1];	}	
	cout<<"сумма побочной диаганали= "<<sumd21<<endl;
	cout<<endl;
	
	//cумма элементов каждого столбца
    for(int h=0; h<STLB1; h++){ 	
	sumstr1=0;
	for(int k=0; k<STR1; k++){
	sumstr1+=ar[k][h];}
	cout<<"столбец "<<h+1<<", сумма="<<sumstr1<<endl;}
	cout<<endl;
	
	//cумма элементов каждой строки
	for(int k=0; k<STR1; k++){ 	
	sumst1=0;
	for(int h=0; h<STLB1; h++){
	sumst1+=ar[k][h];}
	cout<<"строка "<<k+1<<", сумма="<<sumst1<<endl;}	
	cout<<endl;	
	
	/*
	if (){
		cout<<"матрица является магическим квадратом"<<endl;
	} else
	cout<<"матрица не является магическим квадратом"<<endl;

	*/


	
	return 0;
}

