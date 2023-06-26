/*
Create stack class
1. Push elements 
2. Pop Elements 
3. Peak Element 
4. Is Empty 
5. Size 
6. isFull
*/
#include <iostream>
using namespace std;
class Stack{
  int ind;
  int* arr;
  int size;
public:
  Stack(int s){
    size = s;
    ind = -1;
    arr = new int[size];
  }
  void push(int data){
    if (ind < size - 1){
      ind++;
      arr[ind] = data;
    }
    else cout << "OverFlow" << endl;
  }
  void pop(){
    if (ind >= 0) ind--;
    else cout << "UnderFlow" << endl;
  }
  int getTop(){
    if (ind >= 0) return arr[ind];
    else return -1;
  }
  bool isEmpty(){
    return ind < 0;
  }
  int currentSize(){
    return ind+1;
  }
  bool isFull(){
    return ind == size - 1;
  }
};
int main() {
  Stack st(5);
  cout << st.isEmpty() << endl;
  st.push(100);
  cout << st.currentSize() << endl;
  st.push(200);
  st.push(300);
  cout << st.getTop() << endl;
  st.pop();
  cout << st.getTop() << endl;
  st.push(300);
  st.push(400);
  st.push(500);
  cout << st.isFull() << endl;
  st.push(600);
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  cout << st.isEmpty() << endl;
  st.pop();
  return 0;
}
