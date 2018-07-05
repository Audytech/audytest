//Member-function definitions for class GradeBook.h

#include <iostream>
#include <conio.h>
#include "GradeBook.h"

using namespace std;

//Constructor initializes courseName with string supplied as argument

GradeBook::GradeBook(string name){

  setCourseName (name); //validate and store course name
}

void GradeBook::setCourseName(string name){
  if (name.legth()<= 25)
      courseName = name ;
  else {
    courseName  = name.substr(0,25);
    cout << "Name \"" cout << name << "\" exeeds maximum length.\n";

  }// if..else

}//  end setcourName function

// functino to retriev getCourseName
string GradeBook::getCourseName(){
  return courseName;
}// end function getCourseName


//Display a welcome messgeae to the GradeBook user
voice GradeBook::displayMessage(){

  cout <<"Welcome to the grade book for \n" << getCourseName() <<"!\n";
}// end displayMessage functions


//determine class average based on 10 grades entered by users

void GradeBook::determineClassAverage(){

  int total;
  int gradeCounter;
  int grade;
  int avarage;

  // initialization phases

  total = 0;
  gradeCounter = 1 ;

  //processing phase

  while(gradeCounter <= 10){

    cout <<" Enter grade";
    cin>> grade;
    total += grade;
    gradeCounter += 1;
  }// end while

  //termination phases
  avarage = total/10;

  // display total and average grades
  cout<<"\n Total of all 10 grade is : " << total << endl;
  cout<<"\n class average is " << average << endl;

  getchar();

}// end function termincation class
