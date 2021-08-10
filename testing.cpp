#include <iostream>
using namespace std;

#include "constants.h"
#include "helperFunctions.h"
#include "time_block.h"
#include "employee.h"
int main()
{
  Employee Jim("Jimmy", "Newtron");
  Jim.add_Avalibility_Block(TUESDAY, 100, 300);
  Jim.view_Avalibility();

  Timeblock gg(MONDAY, 1000, 2000);
  cout << gg << endl;
  return 0;
}
