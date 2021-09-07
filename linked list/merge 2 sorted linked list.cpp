#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}


 
 
 /*merge 2 sorted linked list......*/
 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
     SinglyLinkedListNode* ll=NULL,*p=NULL;
     
     if(head1==NULL && head2==NULL)
     {
         return NULL;
     }
     else if(head1==NULL)
     {
         return head2;
     }
     else if(head2==NULL)
     {
         return head1;
     }
     
    if (head1->data < head2->data) {
         ll=head1;
          head1=head1->next;
    } 
      else {
          ll=head2;
         head2=head2->next;
    }
     
     
     
     
     
     p=ll;
     while(head1!=NULL && head2!=NULL)
     {  
         if(head1->data<=head2->data)
         {
             ll->next=head1;
             head1=head1->next;
             ll=ll->next;
         }
         else {
                ll->next=head2;
                head2=head2->next;
                ll=ll->next;
          
         }
     }
     while(head1!=NULL)
     {
            ll->next=head1;
             head1=head1->next;
             ll=ll->next;
     }
      while(head2!=NULL)
     {
            ll->next=head2;
             head2=head2->next;
             ll=ll->next;
     }
     
     
     
     return p;

}


