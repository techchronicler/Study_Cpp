//вывести на экран сумму чисел фибоначчи до n-го включительно
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"RUS");
int n;
    int i,i1=1,i2=1;
    std::cout << "n=";
    std::cin >> n;
    int sum = 1;
    for (int k = 0; k < n-1; k++)
    { 
        i = i1 + i2;
        i1 = i2;
        i2 = i;
        sum += i;
    }
    std::cout << sum;
    return 0;
 
}
