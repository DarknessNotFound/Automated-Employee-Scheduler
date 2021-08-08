#ifndef TIMEBLOCK_H
#define TIMEBLOCK_H
using namespace std;

string day_id_to_text(const short day_of_week_id);

class Timeblock
{
  private:
    short m_start_time;
    short m_end_time;
    short m_day_of_week;
  public:
    //Constructors / Deconstructors
    Timeblock(const short start_time, const short end_time, const short day):
      m_start_time(start_time), m_end_time(end_time), m_day_of_week(day) {};
      
    friend ostream& operator << (ostream & os, const Timeblock& tb);
};

#endif
