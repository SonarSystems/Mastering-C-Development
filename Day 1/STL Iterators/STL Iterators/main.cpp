#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> v = {1, 34, 56, 78, 23, 0};
    
    vector<int>::iterator itr;
    
    for (itr = v.begin(); itr < v.end(); itr++)
    {
        cout << *itr << " ";
    }
    
    cout << endl;
    
    vector<int>::iterator itr2 = v.begin();
    advance(itr2, 4);
    
    cout << "Advance: " << *itr2 << endl;
    
    return 0;
}
