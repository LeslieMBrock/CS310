//This program is written with with weekly progressions//

#include <iostream> 

using namespace std;

//week 1 function//
void week1 () {
    cout << "Hello, C++!" << endl;
}

/*This program demostrates basic input and output operations in C++ using cin and cout*/
/*This program will contain two syntax errors as per assignment deliverables.*/
//week 2 function//

void week2 () {
    int num;
    cout << "Enter a number: ";
    cin >> num;>
    cout << "You entered: " << num << endl;
}

//Week 3 selection function synax errors using if/else/while//
void week3 () {
    //hint: You're stuck...//
    int choice;
    cout << "Enter a number other than 1: ";
    cin >> choice;
    if (choice = 1) {
        while (true) {
            cout << "You are stuck!\n"
}
else {
        cout << "You are free!\n" <<endl;
    }
}

void week4 () {
    //This program demonstrates a simple for loop in C++ using the repetition structure using for //
    for (int i = 1; i <= 5; i++) {
        cout << "Count to 5 " << i << endl;
    }
}
int main() { 
    //week1();//comment out to run without// 
    //week2();// comment out to run without//
    //week3();//comment out to run without//
    week4();//comment out to run without//
}
    return 0;