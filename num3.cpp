#include <iostream>
#include <vector>
#include <limits>
using namespace std;


int argmax(const std::vector<float>numbers){
    if (numbers.empty()){
        return(-1);
    }
int arg = 0;
float max = numeric_limits<float>::denorm_min( );
for (int i = 0; i < numbers.size();i++){
  if (numbers[i]>max) {
      arg = i;
      max = numbers[i];
  }
}
  return(arg);
};



int main( )
{
vector<float> numbers = {};
cout << argmax(numbers);

 return 0;
}