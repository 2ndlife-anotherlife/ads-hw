#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}

int main() {
    vector<int> v = {4,3,6,7,5,8,1,3,9,0,3,4,6};
    bubble_sort(v);
    for (int i : v)
        cout << i << " ";
    return 0;
}