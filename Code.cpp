#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt(a * b / c);
    int y = sqrt(b * c / a);
    int z = sqrt(a * c / b);
    cout << 4 * (a + b + c);

    
    return 0;
}
