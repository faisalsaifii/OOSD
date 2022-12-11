# Introduction

## Object Oriented Programming

- Uses objects in programming
- Implements real world entities like inheritence, hiding, polymorphism, etc.
- **Aim of OOPs:** Bind together data and functions that operate on them so that no other part of code can access this data except that function

![OOPs Conecpts](./assets/OOPs%20Concepts.svg)

### Class

- Building block of C++ that leads to OOPs
- User defined data type
- holds its own data members and member functions accessible through an instance of that class
- Like a blueprint for an object

```cpp
// Class Example
class person {
    // Private Members
    // Data Members
    string name;
    int id;

    // Public Members
    public:
        // Functions
        void setDetails () {
            name = "Faisal";
            id = 1;
        }
        void getdetails(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};
```

### Object

```cpp
int main() {
    person p1; // p1 is a object
    p1.setDetails();
    p1.getdetails();
    return 0;
}
```

### Encapsulation

### [Polymorphism](/Objects%26Classes/Polymorphism/README.md)

### [Inheritence](/Objects%26Classes/Inheritence/README.md)
