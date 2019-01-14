#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[])
{
    int arr[] = {1, 2, 5, 45, 9, 2, 4, 3, 109, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> vect(arr, arr + n);
    
    cout << "Vector is: ";
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    
    cout << endl;
    
    sort(vect.begin(), vect.end());
    
    cout << "Sorted Vector is: ";
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    
    cout << endl;
    
    reverse(vect.begin(), vect.end());
    
    cout << "Reversed Vector is: ";
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    
    cout << endl;
    
    cout << "Maximum value: " << *max_element(vect.begin(), vect.end()) << endl;
    cout << "Minimum value: " << *min_element(vect.begin(), vect.end()) << endl;
    cout << "Summation method " << accumulate(vect.begin(), vect.end(), 0) << endl;
        
    return 0;
}
