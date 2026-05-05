#include <iostream>

struct Pizzastruct
{
char* name;
double weight;
int diametr;
};

void show(const Pizzastruct &pz);
void input(Pizzastruct & pz,char* a= "Margarita",double b= 0.85,int c =35);

using namespace std;

int main()
{
setlocale(LC_ALL,"Rus");

Pizzastruct pizza;
input(pizza,"name",15,32);


show(pizza);
return 0;
}
void show(const Pizzastruct & pz)
{
using namespace std;
cout<<"Name"<<pz.name<<endl<<"Weight "<<pz.weight<<endl<<"Diametr "<<pz.diametr<<endl;
}
void input(Pizzastruct & pz,char* a,double b,int c)
{
using namespace std;
pz.name=a;
pz.weight=b;
pz.diametr=c;
}
 
