#include <iostream>
#include <vector>
using namespace std;

void sort(std::vector<float>&numbers) {
    for (int i = 0; i< numbers.size();i++){
        for (int j = 0; j< numbers.size()-1;j++){
            if (numbers[j] < numbers[j+1]) {
               int x = numbers[j];
               numbers[j] = numbers[j+1];
               numbers[j+1]=x;
                
            }
        }

    }
    
};



int main () {
    vector<float> numbers = {1,2,3,4,5};
    sort(numbers);
    for (int i = 0; i< numbers.size();i++){
        cout << numbers[i];
    }
}