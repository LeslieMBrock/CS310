//This program is written with with weekly progressions--week 1 and week 2 will run together//
/*void is a return type--function performs action--gives back no results, it just doing something, not calculating or return a value*/
//define it first--then function main()//
// 3 hours to learn the importance of files names--Im leaving it to reinforce the lesson in stupidity ./'1stC++'.//
#include <iostream> //combo of i and the o//
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
    cout >> "Enter a number: ";//incorrect operator direction, should be cout<<//
    cin << num;//incorrect operator directon, should be cin>>//
    cout << "You entered: " << num << endl;
}
int main() { 
    week1();//comment out to run without// 
    week2();// comment out to run without//
    return 0;//only need the one here//
}