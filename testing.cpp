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
  //Jim.add_Avalibility_Block(THURSDAY, 500, 12000);
  cout << "Num Avalability Blocks: " << Jim.num_aval_blocks() << endl;
  Jim.view_Avalibility();

  Timeblock gg(1000, 2000, MONDAY);
  cout << gg;
  return 0;
}
