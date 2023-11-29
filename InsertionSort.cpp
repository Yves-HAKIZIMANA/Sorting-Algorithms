#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int size =  arr.size();
    int key, j;
    for(int i = 1; i < size; i++){
        for(int number : arr) cout << number << " ";
        cout << endl;
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1 ] = arr[j];
            j-- ;
            for(int number : arr) cout << number << " ";
            cout << endl;
        }
        cout << "----------" << endl;
        arr[j + 1] = key;
    }

}


int main(){
    vector<int> data = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    insertionSort(data);
//    for(int number : data ) cout << number << " ";
}
