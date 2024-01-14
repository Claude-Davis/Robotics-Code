#include <iostream>
using namespace std;

//class definition
class Lightbulb {
    //private area
    private:
      int watts;
    //public area
    public:
        //setter function
        void setWatts(int i) {
          watts = i;
          if(i > 60) {
            cout << "Too Much" << endl;
          }
          else {
            cout << "Good" << endl;
          }
        }
        //getter function
        int getWatts() {
          return watts;
        }
};

int main() {
    //getting input
    int watts;
    cin >> watts;
    //creating the object of class Lightbulb
    Lightbulb W;
    //setting the value for private member
    W.setWatts(watts);
    //printing the value of private member
    cout << "Watts = " << W.getWatts() << "W";

  return 0;
}
