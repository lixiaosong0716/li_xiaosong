#ifndef DATE_H
#define DATE_H



class Date
{
public:
   Date( int, int, int );
   void setMonth( int );
   int getMonth();
   void setDay( int );
   int getDay();
   void setYear( int );
   int getYear();
   void displayDate();
private:
   int month;
   int day;
   int year;
};
#endif // DATE_H
