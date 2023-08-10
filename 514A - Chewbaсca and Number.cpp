

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    vector<int> arr;  // Use a vector to store dynamic elements
    cin>>a;
    if (a == '9') arr.push_back(int(a-'0'));
    else arr.push_back(min(int(a - '0'), 9 - int(a - '0')));
    
    while (cin.peek() != '\n') {  // Continue until Enter is pressed
        cin>>a;
        arr.push_back(min(int(a - '0'), 9 - int(a - '0')));  // Convert character to integer
        
    }

    // Print the elements in the vector
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }

    return 0;
}

