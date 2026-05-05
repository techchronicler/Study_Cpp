//функцию принимающую box по значению и отображающую все ее члены
//ввод данных в структуру с клавы и для вывода использовать эту функцию
#include <iostream>	
using namespace std;
//структура
struct box {
	char maker[40];
	float height;
	float width;
	float length;
};
//функция
void name(box p) { //засовываем структуру в функцию
  cout<<"Производитель: "<<p.maker<<endl;
  cout<<"Высота: "<<p.height<<endl;
  cout<<"Ширина: "<<p.width<<endl;
  cout<<"Длина: "<<p.length<<endl;
}

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
  
  if ((b.height<0) || (b.width<0) || (b.length<0)) {
  	cin.clear();
  	  cout<<"все значения должны быть положительным"<<endl;} 
		else
  name(b);//вывод структуры с помощью функции на экран
  return 0;  }
