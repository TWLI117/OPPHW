#include <iostream>
using namespace std;

int main() {
    int x1 =5+3;
    int x2 =5-3;
    int x1 =5*3;
    int x3 =5/3;
    int x4 =5/3,0;
float x5 =5/3,0;
    int x6=5%3;
    // 將 x1 到 x6 逐一輸出
    cout << "x1 (5+3)  = " << x1 << endl;
    cout << "x2 (5-3)  = " << x2 << endl;
    cout << "x3 (5*3)  = " << x3 << endl;
    cout << "x4 (5/3)  = " << x4 << endl;
    cout << "x5 (5/3.0)= " << x5 << endl;
    cout << "x6 (5%3)  = " << x6 << endl;

    return 0;
}
