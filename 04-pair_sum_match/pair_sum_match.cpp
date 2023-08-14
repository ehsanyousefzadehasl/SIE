
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int string_to_integer(string s) {
	
	stringstream geek(s);
	int x = 0;
	geek >> x;
	
	return x;	
}
 
void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++) 
    {
        int temp = sum - arr[i];
 
        if (s.find(temp) != s.end())
            cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl;
        s.insert(arr[i]);
    }
}
 
/* Driver Code */
int main()
{
    int A[10000] = {0};
    int n = 0;
    int arr_size = 0;
    
    string s;
    
    cout << "Enter the size of the array:" << endl;
    cin >> arr_size;
    cout << "Enter the desired sum:" << endl;
    cin >> n;
    
    cin.ignore();
    
    cout << "Enter the list of numbers:" << endl;
    getline (std::cin, s);
    
    std::string delimiter = " ";
	
	int temp_index = 0;
	int start_index_of_token = 0;
	int length_of_token = 0;
	int end_index_of_token = 0;
	int length_of_string = 0;
	
	for (int i = 0; i < arr_size; i++) {
		int temp = s.find(delimiter);
		std::string token = s.substr(0, temp);
		
		A[i] = string_to_integer(token);
		
		start_index_of_token = s.find(token);
		length_of_token = token.length();
		end_index_of_token = start_index_of_token + length_of_token;
		length_of_string = s.length();
		s = s.substr(end_index_of_token + 1, length_of_string);
 
 		if (i == (arr_size - 2)) {
//			cout << "@@@" << s << endl;
			A[arr_size - 1] = string_to_integer(s);
//			cout << "@@@" << arr[9] << endl;
			break;
		}
	}
	
	
    // Function calling
    printPairs(A, arr_size, n);
 
    return 0;
}

