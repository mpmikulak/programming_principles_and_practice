#include<iostream>

using namespace std;
int main(){
    char c = 'x';
    int i1 = c;
    int i2 = 'x';

    char c2 = i1;
    cout << c << ' ' << i1 << ' ' << c2 << '\n';

    bool boo = true;
    double hard = boo;
    cout << hard << '\n';

    int a = 20000;
    char d = a;
    int b = d;
    cout << a << " " << d << " " << b << '\n';
    if (a != d)
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters!\n";

    double q = 0;
    while (cin >> q) {
        int i = q;
        char c = i;
        int i2 = c;
        cout << "q == " << q
            << " i == " << i
            << " i2 == " << i2
            << " char(" << c << ")\n";
    }

}
