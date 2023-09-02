#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
};

// Finding Max and Min elements in a single scan
// Time Complexity:O(n)
void FindMaxMin(struct Array arr) {
    int max = arr.A[0];
    int min = arr.A[0];

    for (int i = 1; i < arr.size; i++) {
        if (arr.A[i] < min)
            min = arr.A[i];
        else if (arr.A[i] > max)
            max = arr.A[i];
    }
    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;
}

int main() {
    struct Array arr = {{8,6,5,25,8,4,8,25,5,8}, 10};
    FindMaxMin(arr);
    return 0;
}
