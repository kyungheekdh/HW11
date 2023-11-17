#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main() 
{
   LoL l1(5, 10, 2, 3, -5, 0.1, 10);
   LoL l2(7, 100, -3.5, 4, 100, 10, 15);
   LoL l3(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
   LoL l4(10, 20, 4.2, -5.3, 2.1, 0.2, 5);
   
   l1.f0("alkali.dat");
   l1.f1();  
   l1.f2();
   l2.f0("amumu.dat");
   l2.f1();   
   l2.f2();
   l3.f0("annie.dat");
   l3.f1();  
   l3.f2();
   l4.f0("ashe.dat");
   l4.f1();   
   l4.f2();

   return 0;
}
