#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    int total = h*3600 + m*60 + s;
    cout << total;
}
