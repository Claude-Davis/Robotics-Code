#include <iostream>
using namespace std;

class Evidence {
    public:
        void photos() {
            cout << "flashdrive 1 = 270, flashdrive 2 = 98" << endl;
        }
        void financial() {
            cout << "exchange = 3 persons, banks = JP Morgan Chase and Wells Fargo" << endl;
        }
        void location() {
            cout << "Atlanta = 9 days, Marietta = 35 days, Stockbridge = 15 days" << endl;
        }
};

int main() 
{
    Evidence test;
    test.financial();
}
