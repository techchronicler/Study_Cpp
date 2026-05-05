//интерфейс класс Stock
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>  
//объ€вление класса, им€ класса становитс€ именем типа ( тип объ€вил пользователь)
class Stock  // class declaration
//позвол€ет объ€вить переменные типа Stock
{
//идентифицирует члены класса, которые могут быть доступны только
//через функции-члены public. размещаютс€ еденицы данных
private: 
    std::string company;//название компании —алли
    //члены класса могут быть типами данных или функци€ми
    long shares;//кол-во долей общего пакета акций компании —алли
    double share_val;//объем каждой доли общего пакета акций компании
    double total_val;////общий объем всех долей
    void set_tot() { total_val = shares * share_val; }
    
//идентифицирует члены коасса, которые образуют открытый интерфейс класса
public://размещаютс€€ функции-члены, образующие интерфейс класса
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // обратите внимание на точку с зап€той в конце

#endif
