#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
//employee() sets the employee's name and makes the .dat file for the employee.

class Employee
{
  private:
    string m_first_name;
    string m_last_name;
    string m_file_data;
  public:
    //Constructors and Deconstructors
    Employee(const string last_name, const string first_name);

};

#endif
