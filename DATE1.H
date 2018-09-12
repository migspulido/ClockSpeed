//////////////////////////////////////////////////////////////////////////////////
// Miguel Pulido - Systems Architect
// date1.h 
// Member functions defined in date1.cpp
// Declaration of the Date class       
//////////////////////////////////////////////////////////////////////////////////

             
#ifndef DATE1_H
#define DATE1_H
#include <time.h>
class Date {
public:
   Date();
   void printMMDDYY() const;    // print date in MM/DD/YY format
   void setMonth( int );
   void setDay( int );
   void setYear( int );
   long mytime();
   void printStandard();  // output standard time
private:
   int month;  // 1-12
   int day;    // 1-31 based on month
   int year;   // any year
   int hour;
   int minute;
   int second;
      
};

#endif


