#include <iostream>
#include <vector>

using namespace std;

template<typename T>

vector<vector<T>> cart_product (const vector<vector<T>> input) 
{
	vector<vector<T>> output = {{}};
	for (auto layer : input) 
	{
		vector<vector<T>> temp_output;
		for (auto x : output) 
		{
			for (auto col : layer) 
			{
				temp_output.push_back(x);
				temp_output.back().push_back(col);
			}
		}
		output.swap(temp_output);
	}
	return output;
} 

int main()
{
    vector<vector<int>> test{{1,2}, {1,2,3}, {1,2}};
    vector<vector<int>> cartprodResult; // result
    cartprodResult = cart_product(test); // Cartesian Product

    for (auto row : cartprodResult)
    {
        for (auto col : row)
        {
            cout << col << "\t";
        }
        cout << endl;
    }
    return 0;
} 
