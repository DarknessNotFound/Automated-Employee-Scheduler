#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H
using namespace std;

//is_day_of_week() checks if a day is valid
//Pre: None
//Post: Returns true if the day of the week exists
bool is_day_of_week(short day_to_test);

//is_military_time() checks if the inputed time is valid military time
//Pre: Any positive integer
//Post: True if valid.
bool is_military_time(short time);

//day_id_to_text() converts the id of each day of the week (see constants.h)
//into its respective string.
//Pre: Any integer 0-6, inclusive
//Post: the respective string is returned
string day_id_to_text(const short day_of_week_id);

#endif
