#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        Painting(string x) {
            setColor(x);
        }

        void setColor(string x) {
            color = x;
        }

        string getColor() {
            return color;
        }
    private:
        string color;
        
};

int main() {
    string color;

    Painting paint("Red, Blue");

    cout << paint.getColor() << endl;

    return 0;
}
