#include <iostream>
#include <string>
#include "database.hpp"

using namespace std;

int main()
{
	Database d{"Hi"};
	cout << d.getPath() << endl;
	d.setPath("Hello");
	cout << d.getPath() << endl;
	return 0;
}