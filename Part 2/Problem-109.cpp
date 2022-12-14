/*
  You are responsible for your groupmates' grades so your SSD teacher give you all points and asked you to sort the grades in decreasing order.
  But your teacher gave you only the final points and the students' bar-codes.
  Note: Pointers, dynamic arrays and structures have to be used by default.
  struct Student {
    int ID;
    double grade;
  };
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
  int ID;
  double grade;
};

int main () 
{
  int size, index = 0;

  cin >> size;

  Student *school = new Student[size];

  for (int i = 0; i < size; i++)
    cin >> (school+i)->ID >> (school+i)->grade;

  for (int i = 0; i < size * size; i++) {
    if (index == size - 1) index = 0;

    if (school[index].grade < school[index + 1].grade) swap(school[index], school[index + 1]);
    if (school[index].grade == school[index + 1].grade)
      if (school[index].ID > school[index + 1].ID) swap(school[index], school[index + 1]);

    index++;
  }

  for (int i = 0; i < size; i++)
    cout << (school+i)->ID << " " << (school+i)->grade << endl;

  delete []school;

  return 0;
}
