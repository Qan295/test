#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int ops = 0;
        int rev = 0;
        ops++;

        while (true) {
            ops++;
            if (n == 0) {
                break;
            }

            int remainder = n % 10;
            ops++;

            rev = rev * 10 + remainder;
            ops++;

            n /= 10;
            ops++;
        }

        cout << ops << endl;
    }
    return 0;
<<<<<<< HEAD
}
hello
=======
}
>>>>>>> e729375784d93aab71506cb2279052aada3dcf0e
