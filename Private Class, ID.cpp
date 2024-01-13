#include <iostream>
using namespace std;

class idNumber {
  public:
    void setID(int x) {
      id = x;
    }
  private:
    int id;
}

int main() {
  idNumber num;
  num.setID(001101);

  return 0;
}
