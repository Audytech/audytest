#include <string>
#include <iostream>

using namespace std;

// GradeBook class defitions

class GradeBook
{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();

private:
    string courseName;
}; // end class GradeBook
