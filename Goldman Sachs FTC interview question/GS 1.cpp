// Question 1:
// There are n students sitting in a circle, and the teacher is going to sing a song of size k.
// The teacher will keep singing, and where she stops singing that students will be out, and then she will agian start singing 
// from the next student and this will keep going until one student is left. And that one person is elected as the president. Return the number of that student.

// Example 1 -> n=4,k=2 OUTPUT-> 1
// Example 2-> n=6,k=8  OTPUT->3

//Intution -> Deleting the kth node from the circular singly linkedlist every time until 1 element left.

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next = NULL;
    } 
};

node * deleteK(node * head, int k) {
  if (head == NULL) return NULL;
  if (k == 1) {
    head -> data = head -> next -> data;
    node * temp = head -> next;
    head -> next = head -> next -> next;
    delete temp;
    return head;
  }
  node * current = head;
  for (int i = 0; i < k - 2; i++) {
    current = current -> next;
  }
  node * temp = current -> next;
  current -> next = current -> next -> next;
  delete temp;
  return head;
}
void printCll(node * head) {
  node * current = head;
  do {
    cout << current -> data << " ";
    current = current -> next;
  } while (current != head);
  cout<<endl;
}

int main() {
  node * head = new node(10);
  head -> next = new node(20);
  head -> next -> next = new node(30);
  head -> next -> next -> next = new node(40);
  head -> next -> next -> next -> next = head;
  cout<<"Before deleting the kth node in the circular linked list"<<endl;
  printCll(head);
  head = deleteK(head, 3);
  cout<<"After deleting the kth node in the circular linked list"<<endl;
  printCll(head);
}
