class Solution {
  public:
    // Function to check if the linked list has a loop.
    Node *cycle(Node *&head){
        if(head==NULL){
            return NULL;
        }
        Node *slow=head;
        Node *fast=head;
         while(slow!=NULL && fast!=NULL){
             fast=fast->next;
             if(fast!=NULL){
                 fast=fast->next;
             }
             slow=slow->next;
             if(slow==fast){
                 return slow;
             }
         }
         return NULL;
    }
    bool detectLoop(Node* head) {
        if(cycle(head)!=NULL){
            return true;
        }
        return false;
    }
};