
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;
 
int preIndex = 0;

int string_to_integer(string s) {
	
	stringstream str_tmp(s);
	int x = 0;
	str_tmp >> x;
	
	return x;	
}
 
int search(int arr[], int startIn, int endIn, int data) 
{ 
    int i = 0; 
    for (i = startIn; i < endIn; i++) 
    { 
        if (arr[i] == data) 
        { 
            return i; 
        } 
    } 
    return i; 
} 
void printPost(int arr[], int pre[],int inStrt, int inEnd) 
{ 
    if (inStrt > inEnd) 
    { 
        return; 
    } 
 
    int inIndex = search(arr, inStrt, inEnd,pre[preIndex++]); 
 
    printPost(arr, pre, inStrt, inIndex - 1); 

    printPost(arr, pre, inIndex + 1, inEnd); 
 
    cout << arr[inIndex] << " "; 
} 
 
 
// Driver code 
int main() 
{ 	
    int arr[10000] = {0}; 
    int pre[10000] = {0};

	string s1, s2;
    int num_of_nodes = 0;
    cin >> num_of_nodes;
	cin.ignore();
	getline (std::cin, s1);
	getline (std::cin, s2);
 
	std::string delimiter = " ";
	
	int temp_index = 0;
	int start_index_of_token = 0;
	int length_of_token = 0;
	int end_index_of_token = 0;
	int length_of_string = 0;
	
	for (int i = 0; i < num_of_nodes; i++) {
		int temp = s1.find(delimiter);
		std::string token = s1.substr(0, temp);
		
		arr[i] = string_to_integer(token);
		
		start_index_of_token = s1.find(token);
		length_of_token = token.length();
		end_index_of_token = start_index_of_token + length_of_token;
		length_of_string = s1.length();
		s1 = s1.substr(end_index_of_token + 1, length_of_string);
		
		if (i == (num_of_nodes - 2)) {
			arr[num_of_nodes - 1] = string_to_integer(s1);
			break;
		}
	}

	temp_index = 0;
	start_index_of_token = 0;
	length_of_token = 0;
	end_index_of_token = 0;
	length_of_string = 0;
	
	for (int i = 0; i < num_of_nodes; i++) {
		int temp = s2.find(delimiter);
		std::string token = s2.substr(0, temp);
		
		pre[i] = string_to_integer(token);
		
		start_index_of_token = s2.find(token);
		length_of_token = token.length();
		end_index_of_token = start_index_of_token + length_of_token;
		length_of_string = s2.length();
		s2 = s2.substr(end_index_of_token + 1, length_of_string);
		
		if (i == (num_of_nodes - 2)) {
			pre[num_of_nodes - 1] = string_to_integer(s2);
			break;
		}
	}

	cout << "Post-Order Traversal" << endl;
	printPost(arr, pre, 0, num_of_nodes - 1);
}

