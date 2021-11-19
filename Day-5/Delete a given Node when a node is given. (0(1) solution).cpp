#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class node{
    public:
    int data;
    node * next;
};

void printLL(node * head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

void reverseLL(node *&head){
    node *prev=NULL;
    node *current=head;
    node *tmp;
    
    while(current!=NULL){
        tmp=current->next;
        current->next=prev;
        
        prev=current;
        current=tmp;
    }
    head=prev;
    return;
}

node *mergeLL(node *a, node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *c;
    if(a->data<b->data){
        c=a;
        c->next=mergeLL(a->next,b);
    }
    else{
        c=b;
        c->next=mergeLL(a,b->next);
    }
    return c;
}

int middleLL(node *head){
    node *fast=head->next;
    node *slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

node* removeNthFromEnd(node* head, int n){
    node *start= new node;
    start->next=head;
    node * slow=start;
    node * fast=start;
    
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return start->next;
}

void deleteOnlyVal(Node * node){
    node->data=(node->next)->data;
    node->next=(node->next)->next;
}


int main() {
    node * head=new node;
    node * second=new node;
    node * third=new node;
    node * fourth=new node;
    
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    printLL(head);
    cout<<endl;
    cout<<middleLL(head);
    //Call Func
	// your code goes here
	return 0;
}
 