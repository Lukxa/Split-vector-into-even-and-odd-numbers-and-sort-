#include <iostream>
#include <vector>

using namespace std;

void change(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;
}

void sort(vector<int> &V){
  for(int i=0;i<V.size()-1;i++){
    for(int j=0;j<V.size()-1;j++){
      if(V[j]>V[j+1]){
        change(V[j],V[j+1]);
      }
  }
  }
}

int main()
{
    // Prompt the user for the number of elements in the vector
    cout << "Enter the number of elements in the vector: ";
    int num_elements;
    cin >> num_elements;

    // Create an empty vector
    vector<int> vec;

    // Read in the elements of the vector from the user
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < num_elements; i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    // Sort the elements of the vector
    sort(vec);

    // Check if the minimum element of the vector is even or odd
    bool min_is_even = vec[0] % 2 == 0;

    // Split the vector into odd and even elements
    vector<int> evens, odds;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {
            evens.push_back(vec[i]);
        } else {
            odds.push_back(vec[i]);
        }
    }

    // If the minimum element of the vector was even, sort all even
    // elements before all odd elements, otherwise do the opposite
    if (min_is_even) {
        for (int i = 0; i < evens.size(); i++) {
            cout << evens[i] << " ";
        }
        for (int i = 0; i < odds.size(); i++) {
            cout << odds[i] << " ";
        }
    } else {
        for (int i = 0; i < odds.size(); i++) {
            cout << odds[i] << " ";
        }
        for (int i = 0; i < evens.size(); i++) {
            cout << evens[i] << " ";
        }
    }

    return 0;
}
