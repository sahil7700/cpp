#include <iostream>
using namespace std;

int main(){
    // type conversion --> implicit --> auto
    char grade = 'A'; // ascii value --> 65
    int value = grade;

    cout << value << endl;

    // type casting --> explicit --> manually
    double rank = 100.99;

    int roundOff = (int)rank;

    cout << roundOff << endl;

    rank = 100.01;
    roundOff = (int)rank;
    cout << roundOff << endl;

    
    return 0;
}