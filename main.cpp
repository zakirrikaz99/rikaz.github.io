/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;         // variable to hold a user's age
    
    string name;     // variable to hold a user's name
    
    // prompt the user for the name 
    cout << "what is your name? "; 
    getline(cin, name);     // allows for the user to enter their name with spaces 
    
    // prompt the user for their age
    cout << "how old are you?";
    cin >> age;     // allows for the user o ener their age
    
    
    // display te user's name and age 
    cout << endl << "name: " << name << endl;
    cout << "age: " << age << endl;
    

    return 0;
}