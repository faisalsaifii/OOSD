#include<iostream>

using namespace std;

class person {
    string name;
    int id;

    public:
        void setDetails () {
            name = "Faisal";
            id = 1;
        }
        void getdetails(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};

int main() {
    person p1; // p1 is a object
    p1.setDetails();
    p1.getdetails();
    return 0;
}