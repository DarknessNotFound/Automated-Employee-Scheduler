#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
//employee() sets the employee's name and makes the .dat file for the employee.

//is_avalibility_block_valid() checks if an input avalibility block is valid.
//Pre: Inputs are any integers
//Post: Returns true if valid.

//Employee() generates a new .dat file (if one doesn't already exist) with the
//first number being the amount of avalibility blocks and the resting being the
//avalibility blocks (3 numbers: day, start, end)
//Pre: First and last name should be the employee's name
//Post: New .dat file generated to hold avalibility.

//view_Avalibility() prints the avalibility blocks to the terminal
//Pre: None
//Post: text to terminal.

//add_Avalibility_Block() adds the avalibility block to the employee's
//avalibility file. Format: Day(0-6, see above), Time Start, Time Stop
//Pre: Day is 0-6; Start is less than end; Start and End less than 2359(11:59pm)
class Employee
{
  private:
    string m_first_name;
    string m_last_name;
    string m_file_data;
    short m_num_aval_blocks;

    void update_num_avalibility_blocks();
  public:
    //Constructors and Deconstructors
    Employee(const string last_name, const string first_name);

    short num_aval_blocks() {return m_num_aval_blocks;}

    //Viewing Avalibility
    void view_Avalibility()const;

    //Modifing Avalibility
    bool add_Avalibility_Block(short day, short start, short end);

};

#endif
