#include <iostream>
#include <string>
#include <fstream>
#include "database.hpp"

using namespace std;

Database::Database(string p)
{
    this->path = CheckExtension(p, "dat");
    if (this->isExist())
    {
        cout << "Database already exists" << endl;
    }
    else
    {
        ofstream file(this->path);
        file.close();
    }

    cout << "Targeted database locked" << endl;
}

string Database::getPath()
{
    return this->path;
}

void Database::setPath(string p)
{
    this->path = CheckExtension(p, "dat");
    if (this->isExist())
    {
        cout << "Database already exists" << endl;
    }
    else
    {
        ofstream file(this->path);
        file.close();
    }
}

bool Database::isExist()
{   
    ifstream fi(this->path);
    return fi.good();
}

string Database::CheckExtension(string file, string extension)
{
    if(file.length() > extension.length()+1 and file.substr(file.length()-(extension.length()+1)) == "." + extension)
    {
        return file;
    }
    else
    {
        return file + "." + extension;
    }

}