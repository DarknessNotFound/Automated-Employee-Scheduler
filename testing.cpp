#include <iostream>
using namespace std;

#include "employee.h"

int main()
{
  Employee Bob("Bob", "Dillian");
  Employee Jim("Jimmy", "Newtron");
  Jim.add_Avalibility_Block(TUESDAY, 100, 300);
  Jim.add_Avalibility_Block(THURSDAY, 500, 12000);
  return 0;
}
