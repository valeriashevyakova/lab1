#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(int argc, char * argv[])
{
	double sum, a, b;
	char op;
	char *error = 0;
	op = *argv[2];
	a = strtod(argv[1], &error);
	b = strtod(argv[3], &error);
	if (*error != '\0')
	{
		cout << "Error 1 - incorrect data entry" << endl;
		exit(1);
	}
	else if (op == '+')
		sum = a + b;
	else if (op == '-')
		sum = a - b;
	else if (op == '*')
		sum = a * b;
	else if (op == '/' &b != 0)
		sum = a / b;
	else
	{
		cout << "Error 2 - incorrect operathion or division by zero operation" << endl;
		exit(0);
	}
	cout << a << op << b << "=" << sum << endl;
	return 0;
}