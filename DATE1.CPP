//////////////////////////////////////////////////////////////////////////////////
// Miguel Pulido - Systems Architect
// date1.cpp
//Member function definitions for Date class
//////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using std::cout;
using std::endl;


#include "date1.h"
#include <time.h>



Date::Date()  {

	struct tm *clockPtr;
	time_t temp1 = time(0);
	clockPtr = localtime( &temp1);
	setYear(clockPtr ->tm_year + 1900);
	setMonth (clockPtr -> tm_mon + 1);
	setDay (clockPtr -> tm_mday );
}

long Date::mytime() {
	//int hour,minute,second;
	struct tm *Ptr;
    time_t temp1 = time(0);
	Ptr = localtime( &temp1);
	hour = Ptr -> tm_hour;
	minute = Ptr -> tm_min;
	second = Ptr -> tm_sec;
    long timesec = hour*3600 + minute*60 + second;


	return timesec;
}




void Date::setMonth( int m) {month =m;}

void Date::setDay( int d )  {day = d;}

void Date::setYear( int y ) {year = y;}


// Print Date object in form  MM/DD/YY
void Date::printMMDDYY() const
{ cout << (month <10 ? "0" : "" ) << month <<'/'
	   << (day <10 ? "0" : "" ) << day <<'/';
  if(year>=1900 && year<2000)
	   cout << (year % 1900);
  if(year>=2000 && year<3000)
	   cout << "0" << (year % 2000);
}

// Print time in standard format
void Date::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << ( minute < 10 ? "0" : "" ) << minute
        << ":" << ( second < 10 ? "0" : "" ) << second
        << ( hour < 12 ? " AM" : " PM" );
}
