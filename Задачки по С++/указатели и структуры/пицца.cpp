//использование ссылок на структуру
#include <iostream>
#include <string>

using namespace std;

struct pizza { // структура
    char* name; //указатель
    double ves;//значение
    int diametr;//значение
};

/* 1 фун-я: ссылка на структуру, указатель на char, значение на double и int.
так же значения по умолчанию {"Margarita", 0.85, 35}
*/
void fun_1(pizza & x, char* a="Margarita", double  b=0.85,int c=35);

/* 2 фун-я: отображает содержимое структуры, в качестве аргументов лишь ссылка на структуру pizza
где необходимо успользуйте const
*/
void fun_2(const pizza & x)//; //ссылка на структуру
 {
    cout << "Название: " << x.name<<endl;	  //вывод переменных
    cout << "Вес: " <<x.ves<<endl;		
    cout << "Диаметр: " <<x.diametr<<endl;
}


int main()
{
	setlocale(LC_ALL,"RUS");
/*обращаемся к членам структуры и заполняем ее
меняем при вызове функции
если вызвали функцию со структурой и новыми значениями,  то знач меняются
*/

	pizza one;
    fun_1(one, "Pizza",5.6,23);
    
    
    fun_2(one);
    return 0;
}

void fun_1(pizza & x, char* a, double  b,int c)
{
using namespace std;
x.name=a;
x.ves=b;
x.diametr=c;
}
 

