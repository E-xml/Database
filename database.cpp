#include <iostream>
#include <string>
#include <fstream>
#include "database.hpp"

using namespace std;

Database::Database(string p) : path(p)
{
    cout << "Targeted database locked" << endl;
}

string Database::getPath()
{
    return this->path;
}

void Database::setPath(string p)
{
    this->path = p;
}

bool Database::isExist()
{
    istream fi(this->path);
}
