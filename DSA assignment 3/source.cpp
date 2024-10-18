#include <iostream>

using namespace std;

typedef struct Node* Nodeptr;
struct Node
{
    int info;
    Nodeptr next;
    Nodeptr pre;
};

class LinkedList
{
private:
    Nodeptr List;
public:
    LinkedList();
    void traverse();
    Nodeptr find(int);
};

LinkedList::LinkedList()
{
    List = NULL;
}
void LinkedList::traverse()
{
    for (Nodeptr p = List; p != NULL; p = p->next)
    {
        cout << p->info << " ";
    }
    cout << endl;
}
Nodeptr LinkedList::find(int x)
{
    for (Nodeptr p = List; p != NULL; p = p->next)
    {
        if (p->info == x)
        {
            return p;
        }
    }
    return NULL;
}
int main()
{
    LinkedList list;
    cout << "The doubly linked list is: ";
    list.traverse();
    int value;
    cout << "Enter the value of the node to find: ";
    cin >> value;
    Nodeptr found = list.find(value);
    if (found != NULL)
        cout << "Node with value " << value << " found." << endl;
    else
        cout << "Node with value " << value << " not found." << endl;

    return 0;
}