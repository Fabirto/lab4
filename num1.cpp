#include <iostream>
#include <vector>
using namespace std;


float mean(const std::vector<float>numbers){
int sum = 0;
for (int i = 0; i < numbers.size();i++){
    sum = sum + numbers[i];
}
return (sum/numbers.size());
};



int main()
{
std::vector<float> numbers = {1,2,3};
cout << mean(numbers);

 return 0;
}

