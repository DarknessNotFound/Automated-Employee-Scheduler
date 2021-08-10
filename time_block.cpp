#include<iostream>
#include "constants.h"
#include "helperFunctions.h"
#include "time_block.h"

bool Timeblock::is_valid(short day, short start,
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

ostream& operator << (ostream & os, const Timeblock& tb)
{
  os << day_id_to_text(tb.m_day_of_week) << ", " << tb.m_start_time << " to "
     << tb.m_end_time;
  return os;
}
