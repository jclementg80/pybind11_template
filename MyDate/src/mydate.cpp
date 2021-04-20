#include "mydate.hpp"

// Date constructor
MyDate::MyDate(int year, int month, int day)
{
    SetDate(year, month, day);
}
 
// Date member function
void MyDate::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}



int MyDate_add(int i, int j) {
    return i + j;
}