#include <iostream>
using namespace std;

class MyClass{
public:
    MyClass();
    void MyPrint();
;}

MyClass::MyClass() {
}
void MyClass::MyPrint() {
    cout << "Test 0"<<endl;
}

int main() {
    MyClass obj;
    obj.myPrint();
}