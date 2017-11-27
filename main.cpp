#include "palyndrome.h";
#include "fib_rec2.h";
#include "one_step.h";

void main() {

	int a;
	int b;
cout << fib_rec2(24, a, b) << endl;
cout << a << endl << b << endl;
 

int d[3] = { 2, 5, 3 };

if (palindrome(d, 3) == true)
cout << "is palindrome" << endl;
else
cout << "is not palindrome" << endl;



	one_step(2, 1, 3, 3);
	system("pause");


}