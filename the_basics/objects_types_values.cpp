#include<iostream>
#include<cmath>

using namespace std;

int main() {
    cout << "Please enter your first name followed by your age:\n";
    string first_name = "???"; // "???" means don't know name
    double age = -1; // age value of -1 means "don't know age"
    cin >> first_name >> age;
    age *= 12;
    cout << "Hello, " << first_name << " (age: " << age << " months)\n";

    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << '\n';

    int a = 3;
    int b = 7;
    if (a/b*b+a%b==a) cout << "Yes\n";

    cout << "Please enter your first and second name: ";
    string first, second;
    cin >> first >> second;
    string name = first + ' ' + second;
    cout << "Hello, " << name << '\n';

    if (first == second) cout << "That's the same name twice!\n";
    if (first < second) cout << first << " is alphabetically before " << second << '\n';
    if (second < first) cout << second << " is alphabetically before " << first << '\n';

    string previous;
    string current;
    int wordCount = 0;
    while (cin>>current){
        ++wordCount;
        if (previous == current)
            cout << "Word number " << wordCount <<
            " repeated: " << current << '\n';
        previous = current;
    }

    return 0;
}
