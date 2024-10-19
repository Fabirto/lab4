# lab4
https://github.com/bmstu-iu8-cpp-sem-1/lab-04-functions


#include <iostream>
using namespace std;





 struct node{
    int data;
    node* next = nullptr;
 };




int main () {
 node* nd = new node {4,nullptr};
 node* nd1 = new node {5,nullptr};
 node* nd2 = new node {6,nullptr};
 nd -> next = nd1;
 cout << nd -> next->data;


}
