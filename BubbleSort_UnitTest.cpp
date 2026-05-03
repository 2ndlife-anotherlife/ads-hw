#include <iostream>
#include <vector>
#include <cassert>
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

void unit_tests() {
    vector<int> v1 = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    vector<int> res1 = {1, 1, 2, 3, 4, 5, 5, 6, 9};
    bubble_sort(v1);
    assert(v1 == res1);
    cout << "Test 1 passed" << endl;

    vector<int> v2 = {};
    bubble_sort(v2); 
    assert(v2.empty());
    cout << "Test 2 passed" << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> res3 = {1, 2, 3, 4, 5};
    bubble_sort(v3);
    assert(v3 == res3);
    cout << "Test 3 passed" << endl;

    vector<int> v4 = {5, 4, 3, 2, 1};
    vector<int> res4 = {1, 2, 3, 4, 5};
    bubble_sort(v4);
    assert(v4 == res4);
    cout << "Test 4 passed" << endl;

    vector<int> v5 = {0, -10, 5, -2, 3};
    vector<int> res5 = {-10, -2, 0, 3, 5};
    bubble_sort(v5);
    assert(v5 == res5);
    cout << "Test 5 passed" << endl;
}

int main() {
    unit_tests();
    return 0;
}