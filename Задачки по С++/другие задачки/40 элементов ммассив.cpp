//2. от - 100 до 100 вкл, пар произведение которых положительно, а сумма кратна 7
//кол-во пар элем вывести
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
	int const SIZE=10;//40
	int count=0;
	int arr[SIZE];
	srand (time(0));
	  cout<<"вывод чисел от -100 до 100: "<<endl;
    for(int i=0; i<=SIZE; i++){
		arr[i]=-100+rand()%101;//-100 100
	}	
	for(int i=0; i<SIZE; i++){
			cout<<" "<<arr[i]<<" ";}
	for (int i=0; i<SIZE-1; i++) {
		if (((arr[i]*arr[i+1])>0) && ((arr[i]+arr[i+1])%7==0)) {
	count+=1;
	cout<<endl;
	cout<<arr[i]<<" и "<<arr[i+1]<<endl;
		}
	}
	cout<<endl;
	cout<<" олличество пар= "<<count<<endl;
	
			
	return 0;
}

