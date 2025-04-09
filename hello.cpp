#include <iostream>
using namespace std;


int count_digits(int n){
    int x = 0;
    while (n > 0){
        n/=10;
        x++;
    }
    return x;
}

int power(int n, int m){

    int x=1;
    for (int i=0; i< m; i++){
        x*=n;
    }
    return x;
}


int armstrong(int n){

    int x=0;
    int length = count_digits(n);
    int n1 = n;
    for (int i=0; i < length; i++){
        x+=power(n1 % 10, length);
        n1/=10;
    }
    return x==n;
}


int main(){
    int n;
    cout << "Give a number: ";
    cin >> n;
    if (armstrong(n)) cout << "It is an armstrong number" << endl;
    else cout << "It is not an armstrong numver";
    return 0;
}