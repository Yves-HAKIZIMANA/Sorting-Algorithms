//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void countingSort(vector<int>& arr){
//    int max = 0;
//    for(int i : arr)
//        if (i > max)
//            max = i;
//
//    vector<int> newArray(max + 1, 0);
//
//    // This is the algorithm of increasing the occurence of each element in the array
//    for(int i : arr)
//        newArray[i]++;
//
//    int lastIndex = 0;
//    for(int i = 0; i < max + 1; i++){
//        while(newArray[i] > 0){
//            arr[lastIndex++] = i;
//            newArray[i]--;
//        }
//    }
//}
//
//int main(){
//    vector<int> data = {2, 5, 1, 8, 3, 7, 0, 4, 9, 2, 6, 1, 8, 3, 5, 7, 0, 4, 9, 6};
//    countingSort(data);
//    for(int i : data) cout << i << " ";
//}
