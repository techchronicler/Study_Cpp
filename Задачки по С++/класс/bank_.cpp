#include <iostream>
#include <conio.h>
#include "bank.h"
#include "bank.cpp"
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

