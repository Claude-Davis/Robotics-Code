#include <iostream>
#include <string>
using namespace std;

class Forensics {
  public:
    void setField(string x) {
      field = x;
    }
    string getField() {
    return field;
  }
  private:
    string field;
};

int main() {
  Forensics fore;
  fore.setField("digital forensics");
  cout << fore.getField();

  return 0;
}
