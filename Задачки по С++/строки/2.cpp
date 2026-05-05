//2. в место массивов char использовать string
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	//setlocale(LC_ALL,"RUS");
	string name;
	string dessert;
	cout<<"Enter your name:\n";
	getline(cin,name);//ввести имя
	cout<<"Enter your fevorite dessert:\n";
	getline(cin,dessert);// ввести десерд
	cout<<"I have some delicious "<<dessert;
	cout<<" for you "<<name<<endl;
    //cin.get();
	return 0;
}
//getline(cin,переменная) позволяет в string вводить слова с пробелами
