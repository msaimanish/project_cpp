#include <iostream>

using namespace std;

struct Employee{
    int n;
    float m;
    char o;
};

int main(){

    char c[12];
    fgets(c, sizeof(c), stdin);
    cout << c ;
    return 0;
}