#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your full name:- " << endl;
    getline(cin, name);

    cout << "Enter your age:- " << endl;
    cin >> age;

    cout << "Hey there my name is " << name << " and I am " << age << "years old" << endl;

    return 0;
}