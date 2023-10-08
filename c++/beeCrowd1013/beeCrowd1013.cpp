#include <iostream>

using namespace std;

int main() {

    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a>=b&&a>=c) cout << a << " eh o maior" << endl;
    else if(b>=a&&b>=c) cout << b << " eh o maior" << endl;
    else if(c>=b&&c>=b) cout << c << " eh o maior" << endl;


    return 0;
}