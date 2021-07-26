#include <iostream>
#include <fstream>
#include "employee.h"
using namespace std;

bool is_military_time(short time)
{
  bool is_valid = true;
  if ( (time % 100) > 59)
    is_valid = false;
  if(time < 0 | time > 2359)
    is_valid = false;

  return is_valid;
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
  bool is_valid = true;
  if(!is_day_of_week(day))
    is_valid = false;
  if(!is_military_time(start))
    is_valid = false;
  if(!is_military_time(end))
    is_valid = false;
  if(start > end)
    is_valid = false;
  return is_valid;
}

void Employee::update_num_avalibility_blocks() {
  short cur_num_blocks = 0;
  short temp_data;
  ifstream data;
  data.open(m_file_data);
  while(data >> temp_data)
  {
    cout << temp_data << endl;
    cur_num_blocks++;
  }
  data.close();

  cout << cur_num_blocks << endl;
  cur_num_blocks /= 3;
  m_num_aval_blocks = cur_num_blocks;

  return;
}

Employee::Employee(const string last_name, const string first_name):
      m_last_name(last_name), m_first_name(first_name)
{
  m_file_data = m_last_name + "-" + m_first_name + ".dat";
  ofstream data_file (m_file_data, ios::app);
  data_file << MONDAY << ' ';  //Add single avalibility block
  data_file << 800 << ' ';
  data_file << 1600 << endl;
  data_file.close();
  m_num_aval_blocks = 0;
  return;
};

void Employee::view_Avalibility()const
{
  ifstream data_file;
  data_file.open("m_file_data");
  short temp;
  for(int i = 0; i < m_num_aval_blocks; i++)
  {
    for(int i = 0; i < 3; i++)
    {
      data_file >> temp;
      cout << temp << " ";
    }
    cout << endl;
  }
  data_file.close();
  return;
}

bool Employee::add_Avalibility_Block(short day, short start, short end)
{
  bool valid_input = is_avalibility_block_valid(day, start, end);

  if (valid_input)
  {
    ofstream data_file (m_file_data, ios::app);
    data_file << day << ' ';
    data_file << start << ' ';
    data_file << end << endl;
    data_file.close();
  }
  //reduce_avaliblity_blocks
  update_num_avalibility_blocks();
  return valid_input;
}
