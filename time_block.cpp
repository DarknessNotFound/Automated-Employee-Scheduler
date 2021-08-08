#include<iostream>
#include "constants.h"
#include "time_block.h"

string day_id_to_text(const short day_of_week_id)
{
  string text = ""; //the text to be returned
  switch(day_of_week_id)
  {
    case MONDAY:
      text = "Monday";
      break;
    case TUESDAY:
      text = "Tuesday";
      break;
    case WEDNESDAY:
      text = "Wednesday";
      break;
    case THURSDAY:
      text = "Thursday";
      break;
    case FRIDAY:
      text = "Friday";
      break;
    case SATURDAY:
      text = "Saturday";
      break;
    case SUNDAY:
      text = "Sunday";
      break;
  }
  return text;
}

ostream& operator << (ostream & os, const Timeblock& tb)
{
  os << day_id_to_text(tb.m_day_of_week) << ", " << tb.m_start_time << " to "
     << tb.m_end_time;
  return os;
}
