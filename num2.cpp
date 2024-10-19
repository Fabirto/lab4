#include <iostream>
#include <vector>
#include <limits>
using namespace std;


pair<float, float> minMax(const std::vector<float>numbers){
        pair<float, float> answer;
            float max = numeric_limits<float>::denorm_min( );
    float min = numeric_limits<float>::max( );
        
    if (numbers.empty())
    {
        answer.first=min;
    answer.second = max;
    return (answer);
    }
    
    

    
    
    
    for (int i = 0; i < numbers.size();i++){
        if (min > numbers[i])
            { min = numbers[i]; }
        if (max < numbers[i]) 
            { max = numbers[i];}
    }
    
    
    
    answer.first=min;
    answer.second = max;
    
    
    
    return (answer);
};



int main()
{
std::vector<float> numbers = {1,2,3,4,5};
cout << minMax(numbers).first<< endl;
cout << minMax(numbers).second<< endl;

 return 0;
}

