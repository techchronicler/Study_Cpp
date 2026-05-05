  #include<iostream>
  struct Candy {
  char sweet[100];
  double ves;//вес конфет дробная часть
  int kol;//ол-во на 100 г конфет, целая часть	
  };
  int main(){
  setlocale(LC_ALL,"RUS");
  int i;
  int const  X=3;
  using namespace std;
  Candy  q[3]= 
 for (i=0;i<X;i++)
 {
  cout<<"Название конфет: "<<endl;
  cin.getline(q[i].sweet,100);
  cout<<"Вес 1 конфеты: "<<endl;
  cin>>(q[i].ves);
  cout<<"Кол-во конфет на 100 грамм: "<<endl;
  cin>>(q[i].kol);
  cin.get(); 
}
  for (i=0;i<X;i++)
 {
  cout<<"Название конфет: "<<q[i].sweet<<endl;
  cout<<"Вес 1 конфеты: "<<q[i].ves<<endl;
  cout<<"Кол-во конфет на 100 грамм: "<<q[i].kol<<endl;}
  return 0;
  }
