#include <iostream> 
using namespace std;


int main(void){
  int a = 2;
  int* b = &a;
  *b = 2;
  a = 3;
  cout << *b*a << endl;
}
