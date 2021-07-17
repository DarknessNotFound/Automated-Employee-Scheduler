#include <iostream>
#include <fstream>
#include "employee.h"
using namespace std;

Employee::Employee(const string last_name, const string first_name):
      m_last_name(last_name), m_first_name(first_name)
{
  m_file_data = m_last_name + "-" + m_first_name + ".dat";
  ofstream data_file (m_file_data);
  data_file << "B--p" << endl;
  data_file.close();
};
