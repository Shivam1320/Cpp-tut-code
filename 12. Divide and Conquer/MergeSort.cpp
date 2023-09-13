// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge two sorted subarrays into a single sorted array
// void merge(vector<int>& arr, int left, int middle, int right) {
//     int n1 = middle - left + 1;
//     int n2 = right - middle;

//     vector<int> leftArray(n1);
//     vector<int> rightArray(n2);

//     for (int i = 0; i < n1; ++i)
//         leftArray[i] = arr[left + i];
        
//     for (int j = 0; j < n2; ++j)
//         rightArray[j] = arr[middle + 1 + j];

//     int i = 0;
//     int j = 0;
//     int k = left;

//     while (i < n1 && j < n2) {
//         if (leftArray[i] <= rightArray[j]) {
//             arr[k] = leftArray[i];
//             ++i;
//         } else {
//             arr[k] = rightArray[j];
//             ++j;
//         }
//         ++k;
//     }

//     while (i < n1) {
//         arr[k] = leftArray[i];
//         ++i;
//         ++k;
//     }

//     while (j < n2) {
//         arr[k] = rightArray[j];
//         ++j;
//         ++k;
//     }
// }

// // Merge Sort function
// void mergeSort(vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int middle = left + (right - left) / 2;
//         mergeSort(arr, left, middle);
//         mergeSort(arr, middle + 1, right);
//         merge(arr, left, middle, right);
//     }
// }

// int main() {
//     vector<int> arr = {12, 11, 13, 5, 6, 7};
//     int arrSize = arr.size();

//     cout << "Original array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     mergeSort(arr, 0, arrSize - 1);

//     cout << "Sorted array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// // function to print array
// void printArray(vector<int> arr) {
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // function to merge the two sorted arrays
// void merge(vector<int>& arr, int si, int mid, int ei) {
//     vector<int> temp;
//     int i = si;
//     int j = mid + 1;
    
//     while (i <= mid && j <= ei) {
//         if (arr[i] < arr[j]) {
//             temp.push_back(arr[i]);
//             i++;
//         } else {
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }

//     while (i <= mid) {
//         temp.push_back(arr[i++]);
//     }

//     while (j <= ei) {
//         temp.push_back(arr[j++]);
//     }

//     for (int k = 0; k < temp.size(); k++) {
//         arr[si + k] = temp[k];
//     }
// }

// // function for merge sort --> using recursion
// void mergeSort(vector<int>& arr, int si, int ei) {
//     if (si < ei) { // base case corrected
//         int mid = si + (ei - si) / 2;

//         mergeSort(arr, si, mid);
//         mergeSort(arr, mid + 1, ei);

//         merge(arr, si, mid, ei);
//     }
// }

// int main() {
//     vector<int> arr{4, 6,-2, -4, 2, 7, 1, 9, 12};
//     mergeSort(arr, 0, arr.size() - 1); // corrected ending index
//     printArray(arr);
//     return 0;
// }
#include <iostream>
using namespace std;

// function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to merge the two sorted arrays
void merge(int arr[], int si, int mid, int ei) {
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    int leftArray[n1];
    int rightArray[n2];

    for (int i = 0; i < n1; ++i) {
        leftArray[i] = arr[si + i];
    }

    for (int j = 0; j < n2; ++j) {
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = si;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            ++i;
        } else {
            arr[k] = rightArray[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        ++i;
        ++k;
    }
    while (j < n2) {
        arr[k] = rightArray[j];
        ++j;
        ++k;
    }
}

// function for merge sort --> using recursion
void mergeSort(int arr[], int si, int ei) {
    if (si < ei) { // base case corrected
        int mid = si + (ei - si) / 2;

        mergeSort(arr, si, mid);
        mergeSort(arr, mid + 1, ei);

        merge(arr, si, mid, ei);
    }
}

int main() {
    int arr[] = {4, 6, -2, -4, 2, 7, 1, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1); // corrected ending index
    printArray(arr, size);
    return 0;
}
