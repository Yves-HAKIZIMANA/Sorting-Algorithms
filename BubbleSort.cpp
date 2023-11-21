#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &numbers){
    bool swapped = false;
    int length = (int)numbers.size();
    for(int i = 0; i < length; i++){
        for(int j  = 0; j < length - i - 1; j++ )
            if (numbers[j] > numbers[j + 1])
            {
                swap(numbers[j], numbers[j + 1]);
                swapped = true;
            };
        if(!swapped) break;
    }
}
void swap(int& firstNumber, int & secondNumber){
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

int main(){
    vector<int> numbers = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    bubbleSort(numbers);
    for(int number : numbers)
        cout << number << " ";
    return 0;
}
