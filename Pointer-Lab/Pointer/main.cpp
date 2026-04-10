#include <iostream>
using namespace std;
// test
// void addStuff(int* y){
// *y += 3;
// }


// int main(){

// int x = 5;

// int* ptr = &x;
// cout <<  x << endl;
// cout << &x << endl;
// cout << ptr << endl;
// cout << *ptr << endl;

// *ptr = 67;
// cout << *ptr << endl;
// cout <<  "x = " << x << endl;
// addStuff(&x);

// cout << "new x = " << x << endl; 


// }

// Warp Up
// int main() {
//     int num = 10;
//     int* ptr = &num;

//     cout << "num = " << num << endl;
//     cout << "Address of num = " << &num << endl;
//     cout << "ptr = " << ptr << endl;
//     cout << "Value pointed to by ptr = " << *ptr << endl;
//     return 0;
// }

//Part 1

int main(){
    int x = 50;
    int* ptr = &x;
    cout << "x = " <<  x << endl;

    *ptr += 25;
    cout << "Dereferenced pointer: " << *ptr << endl;

//Part 2

char letter = 'A';

char* fletter = &letter;

cout << "Letter: " << *fletter << endl;

cout << "Memory Address: " << static_cast<void*>(fletter) << endl;

*fletter = 'B';

cout << "Changed letter: " << *fletter << endl;

}




