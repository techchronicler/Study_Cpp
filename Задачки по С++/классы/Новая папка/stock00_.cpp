#include <iostream>
#include "stock00.h"
//#ifndef STOCK00_H_
//#define STOCK00_H_

#include <string> 
 int main () {
 	Stock a;
 	a.acquire('gogo', 2, 0.0);
    a.buy(long num, double price);
    a.sell(long num, double price);
    a.update(double price);
    a.show();
 	
 	
 	
 	
 	return 0;
 }
