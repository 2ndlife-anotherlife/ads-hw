#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int partition(vector<int>& v, int low, int high) {
    int pivot = v[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;
    while (true) {
        do { i++; } while (v[i] < pivot);
        do { j--; } while (v[j] > pivot);
        if (i >= j) return j;
        swap(v[i], v[j]);
    }
}

void quickSort(vector<int>& v, int low, int high) {
    if (low < high) {
        int p = partition(v, low, high);
        quickSort(v, low, p);      
        quickSort(v, p + 1, high); 
    }
}
void unit_tests() {
    vector<int> v1 = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    vector<int> res1 = {1, 1, 2, 3, 4, 5, 5, 6, 9};
    quickSort(v1, 0, v1.size() - 1);
    assert(v1 == res1);
    cout << "Test 1 passed" << endl;

    vector<int> v2 = {};
    quickSort(v2, 0, -1); 
    assert(v2.empty());
    cout << "Test 2 passed" << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> res3 = {1, 2, 3, 4, 5};
    quickSort(v3, 0, v3.size() - 1);
    assert(v3 == res3);
    cout << "Test 3 passed" << endl;

    vector<int> v4 = {5, 4, 3, 2, 1};
    vector<int> res4 = {1, 2, 3, 4, 5};
    quickSort(v4, 0, v4.size() - 1);
    assert(v4 == res4);
    cout << "Test 4 passed" << endl;

    vector<int> v5 = {0, -10, 5, -2, 3};
    vector<int> res5 = {-10, -2, 0, 3, 5};
    quickSort(v5, 0, v5.size() - 1);
    assert(v5 == res5);
    cout << "Test 5 passed" << endl;
}

int main() {
    run_sorting_tests();
    return 0;
}