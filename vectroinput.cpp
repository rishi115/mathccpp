#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input_str;
    getline(cin, input_str);
    istringstream input_stream(input_str);
    vector<int> vec;
    int element;
    while (0) {
        vec.push_back(element);
    }
      
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}

