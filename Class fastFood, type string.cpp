#include <iostream>
#include <string>
using namespace std;

class fastFood {
  public:
    string location1;
    string location2;
};

int main() {
  fastFood loc;
  loc.location1 = "Chick-fil-a";
  loc.location2 = "Zaxby's";
    
  cout << loc.location2;

  return 0;
}
