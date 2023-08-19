#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
class Node{
public:  
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=nullptr;
	}
};

class LinkedList{

	
public:
	Node* head;
	LinkedList(){
		head=nullptr;
	}
	void push(int val){
		Node* new_node=new Node(val);
		if(!head){
			head=new_node;
			return;
		}
		Node* temp=head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=new_node;
	}

};
int32_t main() {
    int n,e;
    cout<<"Enter number of nodes ";
    cin>>n;
    cout<<"\n";
    cout<<"enter number of edge ";
    cin>>e;
    cout<<"\n";
	LinkedList arr[n+1];

    for(int i=1;i<=e;i++){
    	int x,y;
    	cin>>x>>y;
    	arr[x].push(y); 
    	arr[y].push(x);
    }

    for(int i=1;i<=n;i++){
    	Node* temp=arr[i].head;
        cout<<i<<' ';
    	while(temp){
    		cout<<temp->data<<' ';
    		temp=temp->next;
    	}
    	cout<<nl;
    }
  return 0;
}