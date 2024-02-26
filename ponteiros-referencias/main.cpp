#include <iostream>

using namespace std;

int main()
{
  int *ptr;
  int var = 7;
  int foo = 10;

  cout << "ptr : " << ptr << endl;
  cout << "&ptr : " << &ptr << endl; // seu endereço é sempre o mesmo
  cout << "*ptr : " << *ptr << endl;
  cout << "\n";

  ptr = &var;

  cout << "&var : " << &var << endl;
  cout << "ptr : " << ptr << endl; // aponta pra var
  cout << "*ptr : " << *ptr << endl;
  cout << "\n";

  ptr = &foo;

  cout << "&foo : " << &foo << endl;
  cout << "ptr : " << ptr << endl; // aponta pra foo
  cout << "*ptr : " << *ptr << endl;
}
