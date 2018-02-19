#include "Calculator.h"
#include <conio.h>
int main() {
	double a, b, c, d, n, t, f;
	bool check = true;
	cout << "\nEnter vector A (If you want to multiply a vector by a prime number,\nenter the second coordinate 0)";
	cin >> a >> b;
	cout << "\nEnter vector B (If you want to multiply a vector by a prime number,\nenter the second coordinate 0)";
	cin >> c >> d;
	cout << "\nEnter the prime number" << endl;
	cin >> n;
	cout << "\nEnter the operation: +, -, *,$";
	char op = ' ';
	cin >> op;
	switch (op) {
	case'+':
		t = addx(a, b);
		f = addy(c, d);


			 break;
	case'-':
		t = substractx(a, b);
		f = substracty(c, d);


			 break;
	case'*':
		t = multiplyx(a, n);
		f = multiplyy(c, n);



			 break;
	case'$':
		t = stray(a, b, c, d);

			 break;

	default:
		cout << "ERROR";
    check = false;

			 break;
	}
	if(check)
    {
        printresult(t);
        printresult(f);

    }
    getch();

}
