#include<iostream>

using namespace std;

struct node
{
    int value;
    node* next;
    node* prev;
};

node* head = NULL;
node* tail = NULL;

bool isempty()
{
    if(tail==NULL) {
        return true;
    }
    return false;
}

void insert_data_at_the_end(int value)
{
    node* new_node = new node;
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(isempty()==true) {
        head = new_node;
        tail = new_node;
    }
    else {
        node *current_node = head;
        while(current_node->next!=NULL){
            current_node = current_node->next;
        }
        current_node->next = new_node;
        new_node->prev = current_node;
        tail = new_node;
    }
}

void insert_data_at_the_end2(int value)
{
    node* new_node = new node;
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(isempty()==true) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void print()
{
    if(isempty()==true) {
        cout<<"list is empty()\n";
    }
    else {
        node *current_node = head;
        while(current_node!=NULL){
            cout<<current_node->value<<endl;
            current_node = current_node->next;
        }
    }
}

void print_reverse()
{
    if(isempty()==true) {
        cout<<"list is empty()\n";
    }
    else {
        node *current_node = tail;
        while(current_node!=NULL){
            cout<<current_node->value<<endl;
            current_node = current_node->prev;
        }
    }
}

void delete_value(int value)
{
    if(isempty()==true) {
        cout<<"list is empty()\n";
    }
    else {
        if(head->value==value && head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else if(head->value==value) {
            node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
        else {
            node *current_node = head;
            while(current_node!=NULL){
                if(current_node->value==value) {
                    node* temp = current_node;
                    current_node->prev->next = current_node->next;

                    if(current_node==tail) {
                        tail = tail->prev;
                    }
                    else {
                        current_node->next->prev = current_node->prev;
                    }

                    delete temp;
                    break;
                }
                current_node = current_node->next;
            }
        }
    }
}

void search_value(int i)
{
    if(isempty()==true) {
        cout<<"list is empty()\n";
    }
    else {
        node *current_node = head;
        bool found = false;
        while(current_node!=NULL){
            if(i<current_node->value) {
                cout<<current_node->value<<endl;
                found = true;
            }
            current_node = current_node->next;
        }
        if(found==false) {
            cout<< "no larger value\n";
        }
    }
}

int main()
{
    insert_data_at_the_end(3);
    insert_data_at_the_end(4);
    insert_data_at_the_end(5);
    print();
    cout<<endl;
    delete_value(4);
    print();
}
