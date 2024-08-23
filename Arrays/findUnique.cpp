#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int odd[5] = {1, 2, 3, 2, 1};
    int unique = findUnique(odd, 5);
    cout << "Unique element: " << unique << endl;
    return 0;
}
