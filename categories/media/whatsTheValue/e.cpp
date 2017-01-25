#include <iostream> 
using namespace std;


int main(void){
  int a = -10;
  int* b = &a;
  int* c;
  a = 10;
  *b++;
  c = &a;
  cout << ++*c++ << endl;
}
