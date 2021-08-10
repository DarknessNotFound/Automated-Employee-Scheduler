#ifndef TIMEBLOCK_H
#define TIMEBLOCK_H
using namespace std;

class Timeblock
{
  private:
    short m_start_time;
    short m_end_time;
    short m_day_of_week;
  public:
    //Constructors / Deconstructors
    Timeblock(const short day, const short start_time, const short end_time):
      m_day_of_week(day), m_start_time(start_time), m_end_time(end_time) {};

    bool is_valid(short day, short start, short end)const;

    friend ostream& operator << (ostream & os, const Timeblock& tb);
};

#endif
