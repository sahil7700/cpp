#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "give us the character : ";
    cin >> ch;
    // cout << ch << endl;
    // int num_value = ch;
    // cout << check << endl;
    // cout << int('z') << endl; 

    if (int('a') <= int(ch) && int('z') >= int(ch)) {
        cout << "lowercase" << endl;
    } else if (int('A') <= int(ch) && int('Z') >= int(ch)) {
        cout << "uppercase" << endl;
    } else {
        cout << "wrong input" << endl;
    }
    // implicite type conv

    // ternary statement
    int t = 9;
    cout << (t>0? "positive" : "negative ") << endl ;
    return 0;
}