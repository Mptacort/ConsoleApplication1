#include <iostream>
using namespace std;


int main()
{
	int int1 = 15;
	int int2 = 20;
	int int3 = 15;
	int int4 = 20;


	cout << "int1 " << int1 << " int2 " << int2 << endl;
		while (int1!=int2) {
			int1++;
		}
		cout << "int1 " << int1 << " int2 " << int2 << endl;
	int int5 = 44;
	int int6 = 35;
	cout << "int5 " << int5 << " int6 " << int6 << endl;
		while (int5>int6) {
			int6++;
		}
		cout << "int5 " << int5 << " int6 " << int6 << endl;


		cout << "int3 " << int3 << " int4 " << int4 << endl;
		while (int3<int4) {
			int3++;
		}
		cout << "int3 " << int3 << " int4 " << int4 << endl;

		int int7 = 30;
		int int8 = 23;
		cout << "int7 " << int7 << " int8 " << int8 << endl;
		while (int7>=int8) {
			int8++;
		}
		cout << "int7 " << int7 << " int8 " << int8 << endl;

		int int9 = 15;
		int int10 = 20;

		cout << "int9 " << int9 << " int10 " << int10 << endl;
		while (int9<=int10) {
			int9++;
		}
		cout << "int9 " << int9 << " int10 " << int10 << endl;


}