//(создание объекта и его инициализация)
//(отображение имени вкладчика, номера счета и баланса)
//(добавление на счет суммы денег, переданной в аргументе)
//(снятие суммы денег, переданной в аргументе)
#include <iostream>
#include "bank.h" 
using namespace std;
 void Bank::open() { //создание объекта и его инициализация
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

 void Bank::show(){ //отображение имени вкладчика, номера счета и баланса
	
	
    cout<<endl<< "Имя вкладчика: " <<name
              <<endl<<"Номер счета: " <<number
              <<endl<< "Баланс: " <<balans<<endl;
}
 void Bank::popolnenie(){ //(добавление на счет суммы денег, переданной в аргументе)
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
 void Bank::snatie(){//(снятие суммы денег, переданной в аргументе)
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
