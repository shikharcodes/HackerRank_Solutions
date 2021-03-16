#include <vector>
#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, size, value, arr, index;
    cin >> n >> q;
    vector<vector<int>> ov;
    for (int i = 0; i < n; i++) {
        cin >> size;
        vector<int> iv;
        for (int j = 0; j < size; j++) {
            cin >> value;
            iv.push_back(value);
        }
        ov.push_back(iv);
    }
    for (int k = 0; k < q; k++) {
        cin >> arr >> index;
        cout << ov[arr][index] << endl;
    }
    return 0;
}
