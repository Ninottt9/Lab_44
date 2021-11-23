#include <iostream>
#include "include/Grade.h"
#include "include/Student.h"

int main() {
  using std::cout;

  cout<<"DENIS\n";
  const Student denis (2);
  denis.print();

  const Grade denisMath (4, denis);
  denis.print();

  const Grade denisPhysics (5, denis);
  denis.print();

  /*denisPhysics.print();


  cout<<"MARK\n";
  const Student mark (3);
  mark.print();

  const Grade markPhysics (3, mark);
  mark.print();
  markPhysics.print();

  cout<<"Denis and Mark\n";
  mark.print();
  denis.print();

  return 0;*/
}

/* //OUTPUT: ./Lab08
DENIS
Student print ID=2 grades:
Student print ID=2 grades: 4
Student print ID=2 grades: 4 5
Grade print value=5 studentID=2
MARK
Student print ID=3 grades:
Student print ID=3 grades: 3
Grade print value=3 studentID=3
Denis and Mark
Student print ID=3 grades: 3
Student print ID=2 grades: 4 5
*/