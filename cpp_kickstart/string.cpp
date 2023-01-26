#include <iostream>
#include <string>
using namespace std;

int main(){
    string f_name = "John", l_name = "Doe", fu_name = f_name + " " + l_name;

    // Concatation 
    cout << "full name : " << f_name + " " + l_name << endl;
    // Append
    cout << "full name : " << f_name.append(l_name) << endl;
    // length
    cout << "length    : " << fu_name.length() << endl;
    // Indexes in string
    cout << "Index 6 is: " << fu_name[6] << endl;
    fu_name[6] = '-';
    cout << "Changed In: " << fu_name << endl;
    // Special Charecter
    cout << "this is \t tab" << endl;
    cout << "this is \n new line" << endl;
    cout << "this is \' single quote, this is \\ single slash" << endl;
    // User Input in CPP
    string name, nameWithGetLine;
    // cout << "Enter your name : ";
    // cin >> name;
    // cout << "\n\n Welcome, " << name << endl; // This will take only one word as input

    cout << "Enter your full name: ";
    getline(cin, nameWithGetLine); // It takes full line as input
    cout << "\n\n Greetings, " << nameWithGetLine << endl;

    return 0;
}