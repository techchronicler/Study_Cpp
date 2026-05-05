//#ifndef BANK_H_
#define BANK_H_
#include <string> 
#include <iostream>
//#include "bank.h"
class Bank {
	private:
  std::string name; 
  std::string number;
  double balans;

  public:
 void open() { //создание объекта и его инициализация
	std::cout<<"Имя вкладчика: ";
    std::cin>>name;
    std::cout<<"Номер счета: ";
	std::cin>>number;
    std::cout<<"Сколько внести: ";
	std::cin>>balans;
  

}
 void show(){ //отображение имени вкладчика, номера счета и баланса
	
    std::cout << "Имя вкладчика: " <<name
              << "Номер счета: " <<number
              << "Баланс: " <<balans;
}
 void popolnenie(float a){ //(добавление на счет суммы денег, переданной в аргументе)
    
	std::cout<<"Введите сумму, которую надо ввести: ";
	std::cin>>a;
    //size=size+n;
    balans+=a;
}
 void snatie(float a){//(снятие суммы денег, переданной в аргументе)
    std::cout<<"Сколько снять: ";
	std::cin>>a;
    if(a>balans) {
    std::cout<<"У вас нет таких средств."; }
	else
    balans-=a;

}
};
//#endif


