#include <iostream>
    int SIZE;//кол-во матчей
	int b_arr(double arr[], int SIZE); //массив ввести баллы матча
	void s_arr(double arr[],int SIZE); // массив все результаты в строку
	double sredne(double arr[], int SIZE);// массив вывести среднее значение
	using namespace std;
	int main() {	
		setlocale(LC_ALL,"RUS");
		
		
		cout<<"Кол-во матчей: ";
		cin>>SIZE;
		if ((!cin) || (SIZE<=0)) { //если введено неположительное число, то конец программы
		cout<<"вводить можно только положительные числа";	
	 	 return 0;} else
	 	 
	 	 
		cout<<endl;
        //позволяет вывести все на экран
 		double proper[SIZE];
		cout<<"Результаты матчей: "<<endl;
		cout<<endl;
		int size=b_arr(proper,SIZE);//приравняли переменную к массиву
//если массив больше 0, то в итоге вывести на экран баллы и срде значение
		if (size>0) { //если массив больше нуля, то выводим все значение
		s_arr(proper,size);//вывод всех баллов на экран
		cout<<endl;
		cout<<sredne(proper, size);//вывод средних баллов на экран
		} 
    return 0;
}


	//ввод данных в массив с клавиатуры 
	int b_arr(double arr[], int SIZE) {//баллы матча
	using namespace std;
	double a;//баллы
	int i;
		for (i=0; i<SIZE; i++) {
			cout<<"Матч № "<<(i+1)<<": ";//номер матча 
			cin>>a;//вводим баллы матча
			if ((!cin) || (a<0)) { //если ввели неправильное значение (букву)
				cin.clear();
				cout<<endl;
				cout<<"вводить можно только положительные числа";
				cout<<endl;
				break;
				}//если все введено правильно, введенные числа становятся масиивом и вычисляются след действия
				else 
			arr[i]=a;
			}
			return i;
		}
		
		
		//вывод массива в одну строку
		void s_arr(double arr[],int SIZE){
		cout<<endl;
		cout<<"все результаты: ";
		for (int i=0; i<SIZE; i++) {
//чтобы надпись не появлялась столько раз как идет цикл, она должна быть вне цыкла		for (int i=0; i<SIZE; i++) {
		cout<<arr[i]<<"  ";	}
		//подсчитывает как вывести результаты массива
		cout<<endl;
		}
		
		
		//нахождение среднего
		double sredne(double arr[], int SIZE){
		double sred=0;
		for (int i=0; i<SIZE; i++) 
		sred+=arr[i];
		cout<<"среднее значение: ";
		return sred/SIZE;
		
	return 0;	}


