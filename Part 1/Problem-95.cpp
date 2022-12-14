/*
  Write a function that will replace all "!" symbols with dot "." .
  The prototype of the function have to be the following: void replace (char *source, char *dest)
  In char *dest your program have to return formatted text.
  Note. The program have to use pointer.
*/

#include <iostream>
#include <cstring>

using namespace std;

const int N = 1000;
char s[N], res[N];

void replace (char* source, char* dest) 
{
  for (int i = 0; i < strlen(source); ++i) {
    if (*(source + i) == '!') *(dest + i) = '.';
    else *(dest + i) = *(source + i);
  }
}

int main () 
{
  cin.getline(s, N);
  replace(s, res);
  cout << res;
  return 0;
}
