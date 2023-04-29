#include <ST_source_code.cpp>
#include <iostream>
#include <algorithm>
using namespace std;

int longest_valid_prantethis(string s)
{
  Stack<char>st;
  int score = 0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i] == '(')st.push('(');
    else if(!st.isEmpty())
    {
      score++;
      st.pop();
    }
  }
  return score;
}