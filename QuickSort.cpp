#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int partition(vector<int> & arr, int start, int high){
    // Generating the pivot element, boundary
    int pivot = arr[high];
    int boundary = start - 1;

    for(int i = start ; i <= high ; i++ )
        if(arr[i] <= pivot) swap(arr[i], arr[++boundary]);
    return boundary;
}

void quickSort(vector<int>& arr, int start, int end){
    if(start >= end ) return;
    // knowing the index of the pivot
    int pivotIndex = partition(arr, start, end );
    quickSort(arr, start, pivotIndex -1);
    quickSort(arr, pivotIndex + 1, end);
}


int main(){
    vector<int> arr = {45, 23, 67, 12, 89, 34, 56, 78, 90, 31, 10, 76, 43, 54, 87, 98, 21, 65, 32, 78, 99, 11, 55, 66, 88, 24, 46, 77, 13, 57, 79, 91, 25, 58, 80, 14, 68, 33, 92, 44, 59, 81, 15, 69, 35, 93, 45, 60, 82, 16, 70, 36, 94, 46, 61, 83, 17, 71, 37, 95, 47, 62, 84, 18, 72, 38, 96, 48, 63, 85, 19, 73, 39, 97, 49, 64, 86, 20, 74, 40, 98, 50, 65, 87, 21, 75, 41, 99, 51, 66, 88, 22, 76, 42, 100};
    auto start_time = chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size() - 1);
    auto end_time = chrono::high_resolution_clock::now();

    // Calculate the elapsed time
    auto elapsed_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    cout << "Elapsed time: " << elapsed_time << " microseconds" << endl;
    for(int i : arr) cout << i << " ";
}