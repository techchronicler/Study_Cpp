// в место объявления массива выделить память с помощью new
//доступ к членам структуры, объем, имя
#include<iostream>
  struct inflatable {
  char sweet[100];
  double ves;//вес конфет дробная часть
  int kol;//kол-во на 100 г конфет, целая часть	
  };
  int main(){
  setlocale(LC_ALL,"RUS");
  int i;
  int const  X=3;
  using namespace std;
  inflatable* ps= new inflatable [3]; 
 for (i=0;i<X;i++){
  cout<<"Название конфет: "<<endl;
  cin.getline(ps[i].sweet,100);//вводим название конфет в массиве
  cout<<"Вес 1 конфеты: "<<endl;
  cin>>ps[i].ves;
  cout<<"Кол-во конфет на 100 грамм: "<<endl;
  cin>>ps[i].kol;
  cin.get(); }
  for (i=0;i<X;i++) {
  cout<<"Название конфет: "<<ps[i].sweet<<endl;//вывод тоже с массовом тк идет цикл
  cout<<"Вес 1 конфеты: "<<ps[i].ves<<endl;
  cout<<"Кол-во конфет на 100 грамм: "<<ps[i].kol<<endl; }
  delete [] ps;
  return 0;
  }
