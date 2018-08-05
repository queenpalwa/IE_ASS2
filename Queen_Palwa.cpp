#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int one;
    int two;
    int three;
    int added;
    int average;

    string first;
    cout << "Enter your first name: ";
    cin >> first;

    string last;
    cout << "Enter your last name: ";
    cin >> last;

    string name = first + " " + last;

    cout << "Hi " << name << ", Welcome to this program!" <<endl;

    cout << "EnSciMath are the most important subjects in elementary, junior and senior high school which are often needed to be checked when you enroll for the next school year. This program is designed to calculate your average in EnSciMath."<<endl;

    cout << "To get started, please enter your grade in ENGLISH"<<endl;

    cin>>one;

    cout<<"Your grade in SCIENCE"<<endl;

    cin>>two;

    cout<<"Your grade in MATH"<<endl;

    cin>>three;

    cout<<"Please wait...Calculating the average..." <<endl;
    added = one+two+three;
    average = added / 3;



    cout<<"Thank you for waiting. Your Average in EnSciMath is " << average << endl;
    system("PAUSE");



    return 0;
}
