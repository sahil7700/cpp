/*  Primitive data types :
int --  > 4 bytes 
char -- > 1 bytes
float --> 4 bytes
bool -- > 1 bytes
double--> 8 bytes 
etc........
*/ 
// 1 bytes == 8 bits 
// variable are same as c language

#include <iostream>
using namespace std;

int main(){
    
    int age = 20;
    
    cout << "age" << endl;
    cout << age << endl;
    cout << sizeof(age) << endl;
    // sizeof() funct tell the size or byte it is occupying
    
    char letter = 's';

    cout << letter << endl;
    cout << sizeof(letter) << endl;

    float PI = 3.14f;
    
    cout << PI << endl;
    cout << sizeof(PI) << endl;

    bool isSafe = false;
    
    cout << isSafe << endl; // true --> 1 & false -- > 0
    cout << sizeof(isSafe) << endl;

    double z = 100.99;

    cout << z << endl;
    cout << sizeof(z) << endl;


    return 0;
}