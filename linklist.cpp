// #include<bits/stdc++.h>
// using namespace std;

// class node
// {
//     public:
//         int data;
//         node* next;

//     node(int data)
//     {
//         this->data =data;
//         this->next =NULL;

//     }
// };
// void insertAtHead(node* &head, int d)
// {
//     node*  temp = new node(d);
//     temp->next =head;
//     head = temp;   

// }
// void insertAtTail(node* &tail,int d)
// {
//     node* temp = new node(d);
//     tail->next=temp;
//     tail=tail->next;
// }
//     void print(node* &head)
//     {
//         node* temp =head;

//         while(temp!=NULL)
//         {
//             cout<<temp->data<<endl;
//             temp=temp->next;
//         }
//     }
//     int main()
//     {
//         node* node1=new node(10);
//         cout<<node1->data<<endl;

//         node* head =node1;
//         node* tail=node1;
//         insertAtTail(tail,5);
//         insertAtHead(head,12);
//         print(head);
//     }
#include<bits/stdc++.h>
using namespace std;
// const int N =1e3+10;
// int graph1[N][N];

// vector< pair<int,int>>g2[N];
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++)
//     {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph1[v1][v2]=1;
//         graph1[v2][v1]=1;

//         g2[v1].push_back({v2,wt});
//         g2[v2].push_back({v1,wt});//0()
//     }



// }

class Node{
    public:
    int data ;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};
class Linklist{
    private:
    Node* head;
    public:
        Linklist()
        {
            head =nullptr;
        }
        void insertionatend(int data )
        {
            Node* new_node =new Node(data);
            if(!head)
            {
                head=new_node;
            }
            else{
            Node* temp=head;
            while(temp->next)
            {
                temp =temp->next;
            }
            //if null then program exit the loop then 
            //temp next 
            temp->next=new_node;
            }
            
        }
        void insertatfirst(int data)
        {
            Node* new_node =new Node(data);
            if(!head)
            {
                head =new_node;
            }
            else
            {
                new_node->next=head;
                head=new_node;

            }
        }
        void checkout(int data){
            Node* temp =head;
            while(temp)
            {
                if(temp->data==data)
                {
                    cout<<"WE found it"<<endl;
                    return;
                }
                temp=temp->next;
            }
            cout<<"can not found it"<<endl;
        }
        void deletenode(int data)
        {
            Node* temp =head ;
            while(temp)
            {
                
            }
        }
        void display()
        {
            Node* temp =head;
            while(temp)
            {
                cout<<temp->data<<" "<<endl;
                temp=temp->next;
            }
        }
};

int main()
{
    Linklist ll;
    ll.insertionatend(10);
    ll.insertionatend(10);
    ll.insertionatend(10100);
    ll.display();
    ll.insertatfirst(15);
    ll.display();

}