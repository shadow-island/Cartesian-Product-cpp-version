#include <iostream>
#include <vector>

using namespace std;

template<typename T>

vector<vector<T>> cart_product (const vector<vector<T>>& v) 
{
	vector<vector<T>> s = {{}};
	for (auto& u : v) 
	{
		vector<vector<T>> r;
		for (auto& x : s) 
		{
			for (auto y : u) 
			{
				r.push_back(x);
				r.back().push_back(y);
			}
		}
	s.swap(r);
	}
	return s;
} 

int main()
{
    vector<vector<int>> test{{2,5,4}, {3,7,8,9}, {5,5,7,8,9,10}};
    vector<vector<int>> cartprodResult; // result
    cartprodResult = cart_product(test); // Cartesian Product

    for (auto& x : cartprodResult)
    {
        for (auto y : x)
        {
            cout << y << "\t";
        }
        cout << endl;
    }
    return 0;
} 