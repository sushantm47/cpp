/*Create a super class Search and sub-classes BinarySearch and SequentialSearch.
i) members of  Search class array of integer and key to be searched with following 
    functions int getarray(),void getkey(), virtual int searchElement()
ii) Define the virtual function  SequentialSearch and binerySearch class
v) Write a test program to create objects both the sub-classes. Then perform sorting,
    searching and displaying for both objects using only one reference of superclass    */

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int sizea;
    cout<<"enter the size of array";
    cin>>sizea;
    int arr[sizea];    
    for(int i=0;i<sizea;i++)
        cin>>arr[i];
}