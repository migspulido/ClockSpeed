//////////////////////////////////////////////////////////////////////////////////
// Miguel Pulido - Systems Architect
// This application uses a Date class to find the time it takes to run
// a for loop with different values for MAXTIME. Time (t1) is taking at the start of the for loop
// and compared against the time (t2) taken when the for loop operations are completed.
// "for(long j=0;j<MAXTIME;j++);"
//////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using std::cout;
using std::endl;

#include "date1.h"
#include <time.h>

long MAXTIME;

int main()
{
    int j;
    long t1,t2;

    cout << "*************************" << endl;
    cout <<"" << endl;
    cout << "CPU for loop timer program" << endl;
    cout <<"" << endl;
    cout << "*************************" << endl;

   Date a1;
   cout << "Today's date: ";
   a1.printMMDDYY();
   a1.mytime();
   cout << "   Current Time: ";

   a1.printStandard();
   cout << endl;

   MAXTIME = 1000000;  // 1 million for loop operations
   cout<<"\nAt MAXTIME = 1 million";
   t1 = a1.mytime();
   cout << "\nt1 = "<<t1<<endl;
   for(long j=0;j<MAXTIME; j++);
   t2 = a1.mytime();
   cout << "t2 = "<<t2<<endl;
   cout<<"difference = "<<t2-t1<<endl;



   MAXTIME = 10000000;  // 10 million for loop operations
   cout<<"\nAt MAXTIME = 10 million";
   t1 = a1.mytime();
   cout << "\nt1 = "<<t1<<endl;
   for( j=0;j<MAXTIME; j++);
   t2 = a1.mytime();
   cout << "t2 = "<<t2<<endl;
   cout<<"difference = "<<t2-t1<<endl;



   MAXTIME = 100000000;  // 100 million for loop operations
   cout<<"\nAt MAXTIME = 100 million";
   t1 = a1.mytime();
   cout << "\nt1 = "<<t1<<endl;
   for( j=0;j<MAXTIME; j++);
   t2 = a1.mytime();
   cout << "t2 = "<<t2<<endl;
   cout<<"difference = "<<t2-t1<<endl;



   MAXTIME = 1000000000;  // 1 billion for loop operations
   cout<<"\nAt MAXTIME = 1 billion";
   t1 = a1.mytime();
   cout << "\nt1 = "<<t1<<endl;
   for( j=0;j<MAXTIME; j++);
   t2 = a1.mytime();
   cout << "t2 = "<<t2<<endl;
   cout<<"difference = "<<t2-t1<<endl;

   return 0;
}
