#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
    Node(int data1){                                                          
        data=data1;                                                          
        next=nullptr;
    }
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};
    Node* convertArr2LL(vector<int> &arr){
        Node* Head=new Node(arr[0]);
        Node* mover=Head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]); 
            mover->next=temp;
            mover=temp;          
        }
        return Head;
    }
    int lengthofLL(Node* Head){
        int cnt=0;
        Node* temp=Head;
        while (temp!=nullptr) {
            temp=temp->next;
            cnt++;
    }
    return cnt;
    }
    Node* Deletehead(Node* Head){
        if(Head==NULL)return Head ;
        Node* temp=Head;
        Head=Head->next;
        delete(temp); // or delete (temp);
        return Head;
    }
    Node* Deletetail(Node* Headd){
        if(Headd == NULL || Headd->next == NULL) return Headd;
        
         else
         { 
             Node* temp=Headd;
         while(temp->next->next!=NULL){
            temp=temp->next;
         }
         delete (temp->next);
         temp->next=nullptr;
         return Headd;
}
    }
     Node* insertNodeatlast(Node* Head,int val){
         Node* Last = new Node(val, nullptr);
    if (Head == nullptr) {
        Head = Last;
    } else {
        Node* temp = Head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = Last;
    }
    return Head;
     }
int main() {
    vector<int> arr = {2, 6, 5, 8, 7};
    Node* Head = convertArr2LL(arr);
    Node* temp = Head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "length is " << lengthofLL(Head) << endl;
    // cout << "head after deleting first head is " << Deletehead(Head)->data << endl;
    Node* Headd=Deletehead(Head);
    cout << "tail of LL after deleting tail" <<endl;
    Deletetail(Headd);
    temp = Headd;
    while(temp != nullptr) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    //insert before head  
     Head=new Node(100,Headd);
    temp=Head;
     while(temp != nullptr) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    //insert at last
    cout<<endl;
    Head=insertNodeatlast(Head,101);
     temp=Head;
     while(temp != nullptr) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    return 0;
    
}
