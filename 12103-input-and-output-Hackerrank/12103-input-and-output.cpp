#include <iostream>
// Include the standard namespace to simplify code (optional, but common)
using namespace std;

int main() {
    // 1. Declare three integer variables to store the input numbers.
    int a, b, c;

    // 2. Read the three space-separated integers from Standard Input (stdin).
    // The >> operator automatically reads the first token into 'a', 
    // the second into 'b', and the third into 'c'.
    cin >> a >> b >> c;

    // 3. Calculate the sum and print it to Standard Output (stdout).
    // The result is printed on a single line.
    cout << a + b + c << endl;

    // 4. Return 0 to indicate successful execution.
    return 0;
}
