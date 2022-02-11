#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0, a = 0;

    do{
        n += a;

        cout << "Add number:" << endl;

        cin >> a;
    }while(a > 0);

    cout << "Result: " << n << endl;

    return 1;
}