#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace std_db
{
  void createNewDatabase(string filename)
  {
      ofstream file(filename + ".dat");
      if (file.is_open())
      {
        file << "Table0";
        file.close();
      }
      else
      {
        cerr << "Unable to open file";
      }
  }
  
  string ReadBrutAll(string filename)
  {
    string base_content;
    string line;
    ifstream file(filename + ".dat");
    if (file.is_open())
    {
      while (getline(file, line))
      {
        base_content += "\n" + line;
      }
    }
    else
    {
      cerr << "Unable to open file";
    }
  
    return base_content;
  }
  
  void WriteBrutAll(string filename, string content)
  {
    ofstream file(filename + ".dat");
    if (file.is_open())
    {
      file << content;
    }
    else
    {
      cerr << "Unable to open file";
    }
  }
};

int main()
{
  std_db::createNewDatabase("test");
  return 0;
}