#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& v, int low, int high) {
    int pivot = v[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;
    while (true) {
        do { i++; } while (v[i] < pivot);
        do { j--; } while (v[j] > pivot);
        if (i >= j) return j;
        std::swap(v[i], v[j]);
    }
}

void quickSort(vector<int>& v, int low, int high) {
    if (low < high) {
        int p = partition(v, low, high);
        quickSort(v, low, p);      
        quickSort(v, p + 1, high); 
    }
}

int main() {
    vector<int> v = {64, 34, 25, 12, 22, 11, 90};
    quickSort(v, 0, v.size() - 1);
    for (int i : v)
        cout << i << " ";
    return 0;
}