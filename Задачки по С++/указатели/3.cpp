//в место объявления структуры выделить память с помщью new
 #include<iostream>
  struct inflatable {
  char comp[100];//имя кaмпании
  double d;//диаметр пиццы
  double ves;//вес пиццы	
  };
  int main(){
  setlocale(LC_ALL,"RUS");
  using namespace std;
  inflatable* ps=new inflatable;//выделение памяти
  cout<<"Название кампании пиццы: "<<endl;
  cin.getline(ps->comp,100);
  cout<<"Диаметр 1 пиццы: "<<endl;
  cin>>ps->d;
  cout<<"Вес 1 пиццы: "<<endl;
  cin>>(*ps).ves;
  cout<<"Название кампании пиццы: "<<ps->comp<<endl;
  cout<<"Диаметр 1 пиццы: "<<ps->d<<endl;
  cout<<"Вес 1 пиццы: "<<(*ps).ves<<endl;
  delete ps;//освободить память
  return 0;
  }
