#include <iostream>
#include <fstream>
#include "employee.h"
using namespace std;

is_military_time(short time)
{
  is_valid = true;
  if ( (time % 100) > 59)
    is_valid = false;
  if(time < 0 | time > 2359)
    is_valid = false;
}

bool Employee::is_day_of_week(short day_to_test)const
{
  bool is_a_day = true;
  if (day_to_test < MONDAY | day_to_test > SUNDAY) //Monday is 0, Sunday is 6
    is_a_day = false;
  return is_a_day;
}

bool Employee::is_avalibility_block_valid(short day, short start,
  short end)const
{
  is_valid = true;
  if(!is_day_of_week(day))
    is_valid = false;
  if(is_valid & )
}

Employee::Employee(const string last_name, const string first_name):
      m_last_name(last_name), m_first_name(first_name)
{
  m_file_data = m_last_name + "-" + m_first_name + ".dat";
  ofstream data_file (m_file_data, ios::app);
  data_file << 0 << endl;  //Add num of avalibility blocks
  data_file.close();
};

bool Employee::add_Avalibility_Block(short day, short start, short end)
{
  if (is_avalibility_block_valid(day, start, end))
  {

  }
}
