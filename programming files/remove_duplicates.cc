#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//remove_duplicates returns a vector<int>
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    //initialize a new vector
    vector<int> unique_arr;
    //sort initial vector
    sort(arr.begin(), arr.end());
    int n = arr.size();
    //iterate through the vector
    for(int i=0; i<n; i++){
        //check if two adjacent elements in a sorted vector are the same
        //if not push onto the unique_array
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        //else push onto remove_element vector
        else{
            removed_elements.push_back(arr[i]);
        }
    }
    //return unique vector
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    //initialize vector
    vector<int> removed_elements;
    //call function
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    //print out the resulting vector
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
