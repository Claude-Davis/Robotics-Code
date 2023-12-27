#include <iostream>
using namespace std;

int main() {
    int ages[] = {16, 7, 36, 45, 56, 52, 21, 7, 5, 3, 29, 60, 40, 44, 45, 47, 22, 30, 34, 20, 18, 32, 51, 43, 47, 9, 22, 34, 98, 52, 21, 7, 24, 37, 19, 24, 36, 45, 44, 49, 76, 25, 19, 40, 29, 60, 20, 42, 45, 47, 61, 30, 19, 9, 47, 14, 41, 58, 29, 3, 21, 25, 28};
    
    int size = 63;
    
    int *p = ages;
    int sum = 0;        //Variable to store the sum
    
    for(int i=0;i<size;i++) {
       sum += *p;           //Calculate the sum
        p++;                //Move to the next element in the array
    }
    
    int avg = sum / size;   //Calculate the average and store in 'avg'
    cout << avg;
}
