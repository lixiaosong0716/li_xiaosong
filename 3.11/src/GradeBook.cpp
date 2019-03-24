


#include <iostream>
#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course );
   setInstructorName( instructor );
}
void GradeBook::setCourseName( string name )
{
   courseName = name;
} // end function setCourseName


string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName


void GradeBook::setInstructorName( string name )
{
   instructorName = name;
} // end function setInstructorName


string GradeBook::getInstructorName()
{
   return instructorName;
} // end function getInstructorName


void GradeBook::displayMessage()
{

   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;


   cout << "This course is presented by: " << getInstructorName() << endl;
} // end function displayMessage

