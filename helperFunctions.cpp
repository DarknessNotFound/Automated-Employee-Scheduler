#include <iostream>
using namespace std;

#include "constants.h"
#include "helperFunctions.h"

bool is_day_of_week(short day_to_test)
{
  bool is_a_day = true;
  if (day_to_test < MONDAY | day_to_test > SUNDAY) //Monday is 0, Sunday is 6
    is_a_day = false;
  return is_a_day;
}

bool is_military_time(short time)
{
  bool is_valid = true;
  if ( (time % 100) > 59)
    is_valid = false;
  if(time < 0 | time > 2359)
    is_valid = false;

  return is_valid;
}

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
