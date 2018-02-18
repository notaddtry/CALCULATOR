#include"Calculator.h"
int main() {
	double a, b, c, d, n, t, f;
	cout << "Введите значения : a, b - это x; c, d - это y, n это простое число(Если хотите умножить вектор на простое число,введите b, d = 0)" << endl;
	cin >> a >> b >> c >> d >> n;
	cout << "Выберите операци.: +, -, *,$" << endl;
	char op = ' ';
	cin >> op;
	switch(op) {
	      case'+': {
			  t = addx(a, b);
			  f = addy(c, d);

	      }
				   break;
		  case'-': {
			  t = substractx(a, b);
			  f = substracty(c, d);

		  }
				   break;
		  case'*': {
			  t = multiplyx(a, n);
			  f = multiplyy(c, n);

		  }
				   break;
		  case'$': {
			  t = stray(a, b, c, d);
		  }
				   break;

		  default: {
			  cout << "ERROR";

		  }
				   break;
	}
	printresult(t);
	printresult(f);
	system("pause");
	
}
