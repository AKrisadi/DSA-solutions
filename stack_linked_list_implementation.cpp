#include <iostream>
using namespace std;
class Node{
public:
  Node* next ;
  int data;
  Node(int data){
    this-> data = data;
    next = NULL;
  }
};
class Stack{
public:
  Node* head;
  int size;
  int ind;
  Stack(int size){
    this-> size = size;
    ind = 0;
    head = NULL;
  }
  bool isEmpty(){
    return head == NULL;
  }
  bool isFull(){
    return ind == size;
  }
  void push(int data){
    if (ind == size){
      cout << "OverFlow" << endl;
      return;
    }
    Node* n = new Node(data);
    n-> next = head;
    head = n;
    ind++;
  }
  int pop(){
    if (ind == 0){ // if (head == NULL)
      cout << "UnderFlow" << endl;
      return -1;
    }
    Node* newHead = head-> next;
    head-> next = NULL;
    int val = head-> data;
    delete head;
    head = newHead;
    ind--;
    return val;
  }
  int getSize(){
    return ind;
  }
  int getTop(){
    if (ind == 0){ // if (head == NULL)
      cout << "UnderFlow" << endl;
      return -1;
    }
    return head-> data;
  }
};
int main() {
  Stack st(5);
  st.push(100);
  st.push(200);
  st.push(300);
  cout << st.getTop() << endl;
  st.pop();
  cout << st.getTop() << endl;
  cout << st.getSize() << endl;
  cout << st.isEmpty() << endl;
  cout << st.isFull() << endl;
  st.pop();
  st.pop();
  st.pop();
  cout << st.isEmpty() << endl;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  cout << st.pop() << endl;
  cout << st.isFull() << endl;
  cout << st.getTop() << endl;
  st.push(6);
  cout << st.getTop() << endl;
  return 0;
}
