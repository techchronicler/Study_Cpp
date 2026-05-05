/*вычислить величину дохода по вкладу
годовая процентная ставка
время хранения(в месяцах)
сумма
задаются пользователем
*/
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int P,t,S,D;
	cout<<"сумма: "<<endl;
	cin>>S;
	cout<<"годовая процентная ставка: "<<endl;
	cin>>P;
	cout<<"время хранения (в месяцах): "<<endl;
	cin>>t;
	cout<<"величина дохода по вкладу: "<<endl;
	t=t/12;
	D=S*P/100*t;
	cout<<D;
	return 0;
}

