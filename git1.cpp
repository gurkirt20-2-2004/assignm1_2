#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    float total = 0.0, avg;

    cout << "Enter the number of integers: ";
    cin >> count;

    vector<int> values(count);

    cout << "Enter " << count << " integers:\n";
    for (int i = 0; i < count; ++i) {
        cin >> values[i];
        total += values[i];
    }

    avg = total / count;

    cout << "The average is: " << avg << endl;

    return 0;
}
