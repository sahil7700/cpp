#include <iostream>
using namespace std;

int main(){
    // Arthmetic operators

    int a = 2 , b = 3;
    int c = 4;
    int d = 10;

    int sum = a + b;

    cout << sum << endl << (c + d) << endl;

    cout << "difference " << (d-a) << endl;
    cout << "multiply " << (d*c) << endl;
    cout << "divide " << (d/a) << endl;
    cout << "reminder " << (d%a) << endl;


    // problem with division
    int e = 5;
    cout << (e/a) << endl; // 2.5 --> 2
    cout << (e/(double)a) <<  endl; // type casting

    /* relational operators ;
<
>
<=
>=
==
!=
*/  

cout << (3 < 5) << endl;// true --> 1
cout << (3 > 5) << endl;// false --> 0


/* Logical Operators:
OR --> || --> pipe
AND --> && 
NOT --> !
*/

cout << !(3 < 5) << endl; // true --> false --> 0
cout << ((3 < 5) || (3 > 5)) << endl; // either one is true -- > 1
cout << ((3 < 5) && (3 > 5)) << endl; // both needs to be true -- > 0


/* unary operators ;
++
--
*/
int test = 1;
cout << ++test << endl; //update then kaam -- a + 1
cout << test-- << endl; // kaam then update -- a
cout << test << endl; // a - 1

int n = 10;
int q = n++; //update , kaam
cout << q << endl;
cout << n << endl;

    return 0;
}

