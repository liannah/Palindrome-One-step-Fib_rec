#include <iostream>
using namespace std;

bool palindrome(int a[], int length) {

	if (length < 2) {
		return true;
	}
	if (a[0] == a[length - 1] && palindrome(a + 1, length - 2)) {
		return true;
	};


}