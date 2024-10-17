#include <iostream>
#include <string>
#include <fstream>
#include "database.hpp"

using namespace std;

Database::Database(string p)
{
    this->path = CheckExtension(p, "dat");

    cout << "Targeted database locked" << endl;
}

string Database::getPath()
{
    return this->path;
}

void Database::setPath(string p)
{
    this->path = CheckExtension(p, "dat");
}

bool Database::isExist()
{   
    ofstream fo(this->path);
    return fo.good();
}

//Just some internal methods
string CheckExtension(string file, string extension)
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