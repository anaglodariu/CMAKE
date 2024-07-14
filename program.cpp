#include <iostream>

using namespace std;
int function(void *);
int main()
{
  int a = 9;
  int *ptr = &a;
  function((void *)a);
  cout << "Hello world kittens!" << endl;
  cout << "configurated ssh" << endl;
}


int function(void *ptr) {
  void *sth;
  sth = malloc(sizeof(int)*4);
}
