#include <iostream> 
using namespace std;


int main(void){
  int a = 1;
  int* b = &a;
  *b = 2;
  a = 3;
  cout << *b << endl;
}
