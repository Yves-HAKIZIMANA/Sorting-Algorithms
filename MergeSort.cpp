#include <iostream>
using namespace std;
#include <vector>
#include <valarray>

void merge(vector<int>& left, vector<int> &right, vector<int> &result){
    int i  = 0, j = 0, k = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]) result[k++] = left[i++];
        else result[k++]  = right[j++];
    }
    while(i < left.size()) result[k++]  = left[i++];
    while(j < right.size()) result[k++] = right[j++];
}

void sort (vector<int>&arr){
    // Base case for the algorithm
    if(arr.size() < 2) return;

    //Dividing the array into two
    int middleIndex = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + middleIndex);
    vector<int> right(arr.begin()+ middleIndex , arr.end());

    // Sorting recursively the partitions being made;
    sort(left);
    sort(right);
    merge(left, right, arr);
}


int main(){
    vector<int> arr = {10, 1, 9, 2, 7, 3, 6, 4, 5};
    sort(arr);
    for(int i : arr) cout << i << " ";
}


