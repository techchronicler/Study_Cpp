  #include<iostream>
  struct Candy {
  char sweet[20];
  double ves;//вес конфет дробная часть
  int kol;//ол-во на 100 г конфет, целая часть	
  };
  int main(){
  setlocale(LC_ALL,"RUS");
  using namespace std;
  Candy  quest= 
  {
  "Hotel Chocolate",
  2.3,
  350
  };
  cout<<"Название конфет: "<<quest.sweet<<endl;
  cout<<"Вес 1 конфеты: "<<quest.ves<<endl;
  cout<<"Кол-во конфет на 100 грамм: "<<quest.kol<<endl;
  return 0;
  }
