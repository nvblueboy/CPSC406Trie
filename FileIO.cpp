#include "FileIO.h"

vector<string> readFile(char* filename)
{
  vector<string> output;
  ifstream infile(filename);
  if (infile.is_open())
  {
    string line;
    while(getline(infile,line))
    {
      line = cleanString(line);
      output.push_back(line);
    }
  }
  return output;
}

string cleanString(string s)
{
  string out = "";
  for (int i = 0;i<s.length(); ++i)
  {
    if (s[i] != '\n' && s[i] != '\r')
    {
      out+=s[i];
    }
  }
  return out;
}
