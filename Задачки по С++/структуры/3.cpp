  #include<iostream>

  struct Candy {
  char comp[1000];//имя компании
  double d;//диаметр пиццы
  double ves;//вес пиццы	
  };
  int main(){
  setlocale(LC_ALL,"RUS");
  using namespace std;
  Candy  quest= 
  {};
   cout<<"Название кампании пиццы: "<<endl;
  cin.getline(quest.comp,1000);
  cout<<"Диаметр 1 пиццы: "<<endl;
  cin>>(quest.d);
  cout<<"Вес 1 пиццы: "<<endl;
  cin>>(quest.ves);
  cout<<"Название кампании пиццы: "<<quest.comp<<endl;
  cout<<"Диаметр 1 пиццы: "<<quest.d<<endl;
  cout<<"Вес 1 пиццы: "<<quest.ves<<endl;
  return 0;
  }
