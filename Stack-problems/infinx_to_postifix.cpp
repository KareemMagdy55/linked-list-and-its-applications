#include <ST_source_code.cpp>
#include <iostream>
#include <algorithm>
using namespace std;


bool stronger(char ope1, char ope2)
{
  if(ope2 == '(')return true;
  if((ope1 == '/' || ope1 == '*' )&& (ope2 == '+' || ope2 == '-'))return true;
  return false;
}


string infinx_to_postifix(string s)
{
  Stack<char>st;

  string ans = "";
  for(int i=0;i<s.length();i++)
  {
    if(isdigit(s[i]))ans+=s[i];

    else if(s[i] == '(')st.push('(');
    else if(s[i] == ')')
    {
      while (st.top()!='(')
      {
        ans+=st.top();
        st.pop();
      }
      st.pop();
    }
    else
    {
      while(!st.isEmpty() && !stronger(s[i],st.top()))
      {
        ans += st.top();
        st.pop();
      }
      st.push(s[i]);
    }
  }
  while (!st.isEmpty())
  {
    ans+=st.top();
    st.pop();
  }
  return ans;
}
