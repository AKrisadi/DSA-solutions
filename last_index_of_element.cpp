// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118787/offering/1381277
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int lastOcc(int arr[], int n, int key){

    

    for(int i = n - 1; i >= 0; i--){

        if(arr[i] == key){

            return i;

        }

    }

    return -1;

}
int main() {
    //Write your code here
     int n;

    cin >> n;

    int arr[n];

 

    for(int i=0;i<n;i++){

    cin >> arr[i];

    }

 

    int key;

    cin >> key;

    cout << lastOcc(arr, n, key);

 

    return 0;
}
