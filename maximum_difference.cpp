#include <bits/stdc++.h> 
string maximumDifference(int n, vector<int>& arr)
{
	// Write your code here.
	string s;

    int size = arr.size();

    int a= arr[0];

    int b= arr[0];

    for(int i=0; i<size; i++)

    {

        

        if(arr[i]<a) a=arr[i]; //small number

        if(arr[i]>b) b=arr[i]; //big number

    }

    if((b-a)%2==0) 

    {

        s.push_back('E');

        s.push_back('V');

        s.push_back('E');

        s.push_back('N');

    }

    else 

    {

        s.push_back('O');

        s.push_back('D');

        s.push_back('D');

    }

 

    return s;
}
