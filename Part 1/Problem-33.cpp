/*
  Time sorting.

  From input your program have to read N (1 <= N <= 100) - the total number of time interval than have to be sorted. 
  Each line contains data in following format HH MM SS.
  HH (hours) - from 0 to 23.
  MM (minutes) - from 0 to 60.
  SS (seconds) - from 0 to 60.

  The output have to contain time intervals in nondescending order in given format.
*/

#include <algorithm>
#include <iostream>

using namespace std;

int main ()
{
	int size, i, n;

	cin >> size;
	int x[3][size], sec[2][size];

	if (size >= 1 && size <= 1000) {
		n = 0;

		for (i = 0; i <= (size - 1); i++) {
			while (n <= 2) {
				cin >> x[n][i];
				n++;
      }
			n = 0;
		}

		for (i = 0; i <= (size - 1); i++) {
			sec[0][i] = (x[0][i] * 60 + x[1][i]) * 60 + x[2][i];
			sec[1][i] = i;
		}

		n = size - 1;

		while (n >= 0) {
			for (i = (size - 1); i >= 0; i--) {
				if (sec[0][i] <= sec[0][n]) {
					swap(sec[0][i], sec[0][n]);
					swap(sec[1][i], sec[1][n]);
				}
			}
			i = (size - 1);
			n--;
		}

		n = 0;

		for (i = 0; i <= (size - 1); i++) {
			n = sec[1][i];
			cout << x[0][n] << " " << x[1][n] << " " << x[2][n];
			cout << endl;
		}
	}
	
	return 0;
}
