#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Generate a random number between 1 and 10
    int x = rand() % 10 + 1;
    cout << "Random number: " << x << endl;
    
    // Calculate the square root of the number
    double y = sqrt(x);
    cout << "Square root: " << y << endl;
    
    return 0;
}
