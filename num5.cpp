#include <vector>
#include <iostream>
using namespace std;

bool remove_first_negative_element(const std::vector<int>&numbers, int& removed_element){
    bool state = false;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i]<0) {
            removed_element = numbers[i];
            state = true;
            break;
        }
        break;
        if (state = false) {
            removed_element = 0;
        }
        
    }
cout << removed_element;
cout << endl;
return(state);

}
int main()
{
    vector <int> numbers = {-22,1,-1};
    int removed_element;
    cout << remove_first_negative_element(numbers, removed_element);
}