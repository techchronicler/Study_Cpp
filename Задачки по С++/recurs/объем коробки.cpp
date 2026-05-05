//задание 1. с помощью recurs 
//функцию принимающую box по значению и отображающую все ее члены
//ввод данных в структуру с клавы и для вывода использовать эту функцию
//+вычислить объем
#include <iostream>	
using namespace std;
//структура
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
//функция
void name(box p) { //засовываем структуру в функцию
  cout<<"Производитель: "<<p.maker<<endl;
  cout<<"Высота: "<<p.height<<endl;
  cout<<"Ширина: "<<p.width<<endl;
  cout<<"Длина: "<<p.length<<endl;
  cout<<"Объем: "<< p.volume<<endl;
}
 void volume_box(box);
//объем коробки это высота*ширина*длина
int main() {
setlocale(LC_ALL,"RUS");
using namespace std;
//структура, ввод в нее с клавы
  box  b;
  cout<<"Введите производителя: "<<endl;
  cin.getline(b.maker,40);
  cout<<"Высота: "<<endl;
  cin>>(b.height);
  cout<<"Ширина: "<<endl;
  cin>>(b.width);
  cout<<"Длина: "<<endl;
  cin>>(b.length);

 void volume_box(box);{
	 if ((b.height<0) || (b.width<0) || (b.length<0)) { //ограничения для рекурсии
  	  cout<<"все значения должны быть положительным"<<endl;
		return 0;} else //если ограничения истина, то выход из цикла, иначе высчитываем объем
	b.volume=(b.height*b.width*b.length);//
}
    name(b);//вывод структуры с помощью функции на экран
   return 0; } 
  

  
