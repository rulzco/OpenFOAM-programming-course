#include <iostream>
using namespace std;
int main()
{
	int myInteger;
	const int constantInteger=5;
	const float constantFloat=5.1;
	cout << "Please type an integer!" << endl;
	cin >> myInteger;
	cout << myInteger << " + " << constantInteger << " = "
	<< myInteger+constantInteger << endl;
	cout << myInteger << " + " << constantFloat << " = "
	<< myInteger+constantFloat << endl;
	return 0;
}

// g++ basic1.C -o basic1; ./basic1