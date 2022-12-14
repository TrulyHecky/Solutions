/*
  Write a function that will check if the substring "AITU" can be found in the given line.
  Note. The program have to use pointer.
  
  Samples:
  
  1	hgdfjgkdghkdjgkgkdAITUgjdlgkdjlg	YES
  2	A=I T=U	                          NO
  3	AitU	                            YES
*/

#include <iostream>
#include <cstring>

using namespace std;

const int N = 1000;
char s[N];

bool check (char l[])
{
  bool A = false, I = false, T = false, U = false;
  for (int i = 0; i < strlen(l); ++i) {
    if (toupper(*(l + i)) == 'A') A = true;
    if (toupper(*(l + i)) == 'I') I = true;
    if (toupper(*(l + i)) == 'T') T = true;
    if (toupper(*(l + i)) == 'U') U = true;
  }
  return (A && I && T && U);
}

int main ()
{
  cin >> s;
  if (check(s)) cout << "YES";
  else cout << "NO";
  return 0;
}
