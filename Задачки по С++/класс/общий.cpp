#include <iostream>
using namespace std;
class Bank {
	private:
  string name; 
  string number;
  double balans;
  
  	public:
 void open() { //создание объекта и его инициализация
	cout<<"Имя вкладчика: ";
    cin>>name;
    cout<<"Номер счета: ";
	cin>>number;
    cout<<"Сколько внести: ";
	cin>>balans;
	if (balans<0) {
	balans=0;
	}
	cout<<"Баланс: "<<balans<<endl;
   

}

 void show(){ //отображение имени вкладчика, номера счета и баланса
	
	
    cout<<endl<< "Имя вкладчика: " <<name
              <<endl<<"Номер счета: " <<number
              <<endl<< "Баланс: " <<balans<<endl;
}
 void popolnenie(){ //(добавление на счет суммы денег, переданной в аргументе)
    float b;
	cout<<endl<<"Пополнить счет: ";
	cin>>b;
	
	if (b<0) {
	b*=-1;
	}
    else
    balans+=b;
    cout<<"Баланс: "<<balans<<endl;
    
}
 void snatie(){//(снятие суммы денег, переданной в аргументе)
    float c;

	cout<<"Снять со счета: ";
	cin>>c;
	if (c<0){
	c*=-1;	
	} else
    if (c>balans) {
    cout<<"У вас нет таких средств"<<endl; 
	 }
	else
    balans-=c;
    cout<<"Баланс: "<<balans;	
    
}
};
using namespace std;
int main () {
	setlocale(LC_ALL,"RUS");
	Bank i;
    i.open();//ввести данные
    i.snatie(); //снять денег
	i.popolnenie();//поплнить счет
	i.show();//вывод общий
	return 0;
}

