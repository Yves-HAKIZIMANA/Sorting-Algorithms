#include <vector>
#include <iostream>
using namespace std;


void selectionSort(vector<int> &arr){
    int length = arr.size();
    int minIndex, i , j;
    for(i = 0; i  < length - 1; i++){
        minIndex = i;
        for(j = i + 1; j < length; j++){
            if(arr[j] < arr[minIndex])  {
                minIndex = j;
            };
        }
        std::swap(arr[i], arr[minIndex]);
        for(int number : arr) cout << number << " ";
        cout << endl;
    }
}



int main(){
    vector<int> numbers = {6, 1, 8, 2, 7, 3, 9, 4, 5};
    selectionSort(numbers);
    for(int number : numbers)
        cout << number << " ";
    return 0;
}