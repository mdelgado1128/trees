#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
  // empty container
  set<int> s1;

  // insert elements into the container
  s1.insert(4);
  s1.insert(3);
  s1.insert(6);
  s1.insert(2);
  s1.insert(5);

  // print set s1

  set<int>::iterator itr;
  cout << "set s1 \n";

  for (itr = s1.begin(); itr != s1.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;

  return 0;
}