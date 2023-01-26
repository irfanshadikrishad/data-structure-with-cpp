#include <iostream>
using namespace std;

int main(){
    struct student {
        string id;
        string name;
        string department;
    } p1, p2;

    p1.id = "0182210012101087";
    p1.name = "Irfan Shadik Rishad";
    p1.department = "CSE";
    p2.id = "0182210012101078";
    p2.name = "R. A. Motiur Rahman Rafi";
    p2.department = "CSE";

    student p3;
    p3.id = "0182210012101084";
    p3.name = "Roni Das (neloy)";
    p3.department = "CSE";

    cout << p1.id << endl << p1.name << endl << p1.department << endl;
    cout << p2.id << endl << p2.name << endl << p2.department << endl;
    cout << p3.id << endl << p3.name << endl << p3.department << endl;

    return 0;
}