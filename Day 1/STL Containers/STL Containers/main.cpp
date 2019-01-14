#include <iostream>
#include <array>
#include <tuple>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    array<int, 10> arr = {1, 2, 3, 4, 5, 67, 34, 23, 0, 9};
    array<int, 10> arr2 = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    
    cout << "Print using .at method: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    
    cout << endl;
    
    // get method for accessing array elements
    cout << get<0>(arr) << endl;
    cout << get<1>(arr) << endl;
    cout << get<4>(arr) << endl;
    cout << get<9>(arr) << endl;
    
    cout << "Access using [] operator: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    // front
    cout << "Front: " << arr.front() << endl;
    // back
    cout << "Back: " << arr.back() << endl;
    
    cout << "arr Before Swap: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    cout << "arr2 Before Swap: ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    
    arr.swap(arr2);
    
    cout << "arr After Swap: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    cout << "arr2 After Swap: ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(9372);
    v.push_back(445);
    v.push_back(-90);
    v.push_back(0);
    v.push_back(10);
    
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    
    cout << endl;
    
    v.pop_back();
    v.push_back(45);
    
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    
    cout << endl;
    
    return 0;
}
