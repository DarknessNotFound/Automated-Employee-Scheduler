#include <iostream>
#include <fstream>
#include "constants.h"
#include "employee.h"
#include "time_block.h"
#include "helperFunctions.h"
using namespace std;

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
  Timeblock starter_time(800, 1600, MONDAY);
  data_file << starter_time << endl;
  data_file.close();
  m_num_aval_blocks = 0;
  return;
};

void Employee::view_Avalibility()const
{
  ifstream data_file;
  data_file.open(m_file_data);
  short temp;
  for(int i = 0; i < m_num_aval_blocks; i++)
  {
    for(int i = 0; i < 3; i++)
    {
      data_file >> temp;
      if(!i)
      {
        switch(temp)
        {
          case MONDAY:
            cout << "Monday    ";
            break;
          case TUESDAY:
            cout << "Tuesday   ";
            break;
          case WEDNESDAY:
            cout << "Wednesday ";
            break;
          case THURSDAY:
            cout << "Thursday  ";
            break;
          case FRIDAY:
            cout << "Friday    ";
            break;
          case SATURDAY:
            cout << "Saturday  ";
            break;
          case SUNDAY:
            cout << "Sunday    ";
            break;
        }
      }
      else
        cout << temp << " ";
    }
    cout << endl;
  }
  data_file.close();
  return;
}

bool Employee::add_Avalibility_Block(short day, short start, short end)
{
  //Eventually will use the time_block class
  bool valid_input = true;

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
