#include <iostream>
using namespace std;

int main(){

char* city = "Dallas";
cout << city[0] << endl;
char* cities[] = {"Dallas", "Atlanta", "Houston"};
cout << cities[0] << endl;
cout << cities[0][0] << endl;

return 0;
}