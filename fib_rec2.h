#include <iostream>
using namespace std;


/* second version 
int fib_rec2(int n, int &prev1, int &prev2) {

	if (n < 2) {
		prev1 = 0;
		prev2 = 1;
		return n;
	}
	int helper1;
	prev1 = fib_rec2(n - 1, prev2, helper1);
	return prev1 + prev2;
}
*/

int fib_rec2(int n, int &prev1, int &prev2) {
	if (n < 2) {
		prev1 = 0;

		return n;
	}

	int helper1, helper2;
	prev1 = fib_rec2(n - 1, prev2, helper1);
	return prev1 + prev2;
	fib_rec2(n - 1, helper1, helper2);
	fib_rec2(n - 2, helper1, helper2);

}