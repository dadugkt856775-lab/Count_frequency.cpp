#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool visited[n] = {false};

    cout << "\nFrequency of elements:\n";

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << a[i] << " -> " << count << " times" << endl;
    }

    return 0;
}
