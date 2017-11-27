#include <iostream>
#include <cmath>
using namespace std;

void one_step(int discs, int from, int to, int at_move) {

if (discs > 0 && (at_move > 0)) {

		if (at_move <= ((((pow(2, discs) - 1) / 2) + 1))) {
			one_step(discs, from, 6 - from - to, at_move - 1);
			cout << from << " ,> " << to << endl;
			system("pause");

		}


			one_step(discs - 1, 6 - from - to, to, at_move - 1);
			cout << from << " /> " << to << endl;
			system("pause");
		}
/*

	if (at_move == (pow(2, discs) - 1)) {
		cout << from << "-." << to << endl;
	}
	else if (at_move < (pow(2, discs) - 1)) {
		one_step(discs - 1, from, discs - from - to, at_move);
		cout << from << ".." << to << endl;

	}
	else {
		one_step(discs - 1, discs - from - to, to, at_move - (pow(2, discs - 1)));
		
	}
	

	if (at_move == pow(2, discs - 1) && discs > 0) {
		cout << from << ".." << to << endl;
	}
	if (at_move < pow(2, discs - 1) && discs > 0) {
		one_step(discs, from, 6- from - to, at_move);
		cout << from << "ksk" << to << endl;

	}
	one_step(discs, 6 - from - to, to, at_move);
	cout << from << "jsj" << to << endl; 
	*/
}

//at_move > (pow(2, discs) - 1))   
