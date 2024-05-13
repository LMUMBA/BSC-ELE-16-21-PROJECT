#include <iostream>
using namespace std;

int main(){

int x = 30;
int* p = &x;
cout << *p << endl;
int y = 40;
p = &y;
cout << *p << endl;

return 0;
}