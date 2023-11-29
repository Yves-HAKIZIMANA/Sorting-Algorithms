#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

tuple<int, int> countOccurence(vector<int>& arr){
    int max = 0;
    for(int i : arr)
        if( i > max) max = i;
    vector<int> counts(max + 1, 0);
    for(int i : arr)
        counts[i]++;

    int occurence = counts[0];
    int currentIndex;
    for(int i = 0; i < max + 1; i++){
        if(counts[i] > occurence) occurence = counts[i];
        currentIndex = i;
    }

    return make_tuple(currentIndex, occurence);

}

int main(){
    vector<int> data  = { 3, 7, 1, 4, 2, 6, 3, 8, 1, 5, 2, 9, 4, 0, 7, 5, 8, 0, 6, 9, 9};
    auto [currentIndex, occurrence] = countOccurence(data);
    cout << "Current Index : " << currentIndex << " , Occurrence : " << occurrence << endl;
}
