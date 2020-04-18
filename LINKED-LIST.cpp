#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

node* take_input()
{
    int data;
    cin >> data;
    node* head = NULL;
    node* tail = NULL;
    while(data != -1)
    {
        node* n = new node(data);
        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail -> next = n;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}

void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int length(node* head)
{
    node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    return count;
}

void printIthnode(node* head, int i)
{
    int l = length(head);
    node* temp = head;
    if(i<=l)
    {
        for(int j=0;j<i;j++)
        {
            temp = temp->next;
        }
        cout << temp -> data << endl;
    }
    else
    {
        return;
    }
}

node* insert_node(node* head, int i, int data)
{
    node* temp = head;
    node* newnode= new node(data);

    if(i==0)
    {
        newnode -> next = head;
        head = newnode;
        return head;
    }
    for(int j=0;j<i-1 && temp != NULL;j++)
    {
        temp = temp -> next;
    }
    if(temp != NULL)
    {
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
    return head;
}

node* deletenode(node* head, int i)
{
    node* temp = head;
    int p = length(head);
    while(i<=p)
    {
       if(i==0)
        {
            node* a = head;
            head = temp -> next;
            delete a;
            return head;
        }
    for(int j=0;j<i-1;j++)
    {
        temp = temp -> next;
    }
    node* a = temp -> next;
    if(a == NULL)
    {
        return head;
    }
    node* b = a -> next;
    temp -> next = b;
    delete a;
    return head;
    }
    return head;
}

node* insertnodeRec(node* head, int i, int data)
{
    if(head == NULL)
    {
        return head;
    }
    if(i==1)
    {
        node* newnode = new node(data);
        node* a = head -> next;
        head -> next = newnode;
        newnode -> next = a;
        return head;
    }
    if(i==0)
    {
        node* newnode = new node(data);
        node* a = head;
        head = newnode;
        newnode -> next = a;
    }
    node* x = insertnodeRec(head -> next,i-1,data);
    head -> next = x ;
    return head;
}

node* deletenodeRec(node* head, int i)
{
    if(head == NULL)
    {
        return head;
    }
    if(i==0)
    {
        node* a = head;
        head = head -> next;
        delete a;
        return head;
    }
    node* x = deletenodeRec(head -> next,i-1);
    head -> next = x ;
    return head;
}

int indexOfNIter(node* head, int n)
{
    node* temp = head;
    int count=0;
    while(temp != NULL)
    {
       if(temp -> data != n)
       {
           count++;
           temp = temp -> next;
       }
       else
       {
           return count;
           temp = NULL;
       }
    }
    return -1;
}

node* append_LinkedList(node* head,int n)
{
    node* a = head;
    node* tail = head;
    while(tail -> next != NULL)
    {
        tail = tail -> next;
    }
    node* temp = head;
    int p = length(head);
    int q = p-n;
    for(int j=0;j<q-1;j++)
    {
        temp = temp -> next;
    }
    head = temp -> next;
    temp -> next = NULL;
    tail -> next = a;
    return head;
}

node* eliminate_duplicate(node* head)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    node* temp1 = head;
    node* temp2 = head -> next;
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 -> data == temp2 -> data)
        {
            node* a = temp2;
            temp2 = temp2 -> next;
            temp1 -> next = temp2;
            delete a;
        }
        else
        {
            temp1 = temp2;
            temp2 = temp2 -> next;
        }
    }
    return head;
}

void print_linkedlist_spl(node* head)
{
    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    node* t1 = head;
    node* t2 = head -> next;
    head = temp;
    t1 -> next = NULL;
    while(t1 != NULL and t2 != NULL)
    {
        node* a = t2 -> next;
        t2 -> next = t1;
        t1 = t2;
        t2 = a;
    }
    print(head);
}
void reverse(node* &head)
{
	node* result = nullptr;
	node* current = head;

	while (current != nullptr)
	{
		node* next = current->next;
		current->next = result;
		result = current;
		current = next;
	}
	head = result;
}

bool compare(node* a, node* b)
{
	if (a == nullptr && b == nullptr)
		return true;

	return a && b && (a->data == b->data) && compare(a->next, b->next);
}

node* findMiddle(node* head, bool &odd)
{
	node* prev = nullptr;
	node *slow = head, *fast = head;

	while (fast && fast->next)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}

	if (fast)
		odd = true;
	prev->next = nullptr;
	return slow;
}

bool checkPalindrome(node* head)
{
	if (head == nullptr)
		return true;
	bool odd = false;
	node* mid = findMiddle(head, odd);
	if (odd)
		mid = mid->next;
	reverse(mid);
	return compare(head, mid);
}

node* midpoint_linkedlist(node* head)
{
    node* slow = head;
    node* fast = head -> next;
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* mergeTwoLLs(node* head1, node* head2)
{
    node* final_head = NULL;
    node* final_tail = NULL;
    if(head1 -> data < head2 -> data)
    {
        final_head = head1;
        final_tail = head1;
        head1 = head1 -> next;
    }
    else
    {
        final_head = head2;
        final_tail = head2;
        head2 = head2 -> next;
    }
    while(head1 != NULL && head2 != NULL)
    {
        if(head1 -> data < head2 -> data)
        {
            final_tail -> next = head1;
            final_tail = final_tail -> next;
            head1 = head1 -> next;
        }
        else
        {
            final_tail -> next = head2;
            final_tail = final_tail -> next;
            head2 = head2 -> next;
        }
    }
    while(head1 != NULL)
    {
        final_tail -> next = head1;
        final_tail = final_tail -> next;
        head1 = head1 -> next;
    }
    while(head2 != NULL)
    {
        final_tail -> next = head2;
        final_tail = final_tail -> next;
        head2 = head2 -> next;
    }
    return final_head;
}

node* mergeSort(node* head)
{
    if(head -> next == NULL)
    {
        return head;
    }
    node* mid = midpoint_linkedlist(head);
    node* head1 = head;
    node* head2 = mid -> next;
    mid -> next = NULL;
    node* x = mergeSort(head1);
    node* y = mergeSort(head2);
    node* p = mergeTwoLLs(x,y);
    return p;
}

node* reverse_linked_list_rec(node* head)
{
    int p = length(head);
    if(p==1||p==0)
    {
        return head;
    }
    node* smallAns = reverse_linked_list_rec(head -> next);
    node* temp = smallAns;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = head;
    head -> next = NULL;
    head = smallAns;
    return head;
}

int helper(node* head, int n, int pos)
{
    if(head == NULL)
    {
        return -1;
    }
    if(head -> data == n)
    {
        return pos;
    }
    int p = helper(head -> next,n,pos+1);
    return p;
}

int indexOfNRecursive(node* head, int n)
{
    return helper(head,n,0);
}

node* arrange_LinkedList(node* head)
{
   node* temp = head;
   node* evenhead = NULL;
   node* oddhead = NULL;
   node* eventail = NULL;
   node* oddtail = NULL;
   while(temp != NULL)
   {
       if(temp -> data %2 ==0)
       {
           if(evenhead == NULL)
           {
               evenhead = temp;
               eventail = temp;
           }
           else
           {
               eventail -> next = temp;
               eventail = temp;
           }
       }
       else
       {
           if(oddhead == NULL)
           {
               oddhead = temp;
               oddtail = temp;
           }
           else
           {
               oddtail -> next = temp;
               oddtail = temp;
           }
       }
       temp = temp -> next;
   }
   oddtail -> next = evenhead;
   eventail -> next = NULL;
   return oddhead;
}

/*node* skipMdeleteN(node *head, int M, int N)
{
    node *curr = head, *t;
    int count;
    // The main loop that traverses
    // through the whole list
    while (curr)
    {
        // Skip M nodes
        for (count = 1; count < M &&
                curr!= NULL; count++)
            curr = curr->next;
        // If we reached end of list, then return
        if (curr == NULL)
            return;
        // Start from next node and delete N nodes
        t = curr->next;
        for (count = 1; count<=N && t!= NULL; count++)
        {
            node *temp = t;
            t = t->next;
            free(temp);
        }
        // Link the previous list with remaining nodes
        curr->next = t;
        // Set current pointer for next iteration
        curr = t;
    }
    return curr;
}*/

node* bubble_sort_LinkedList_itr(node* head)
{
    int l = length(head);
    for(int i=0; i<l; i++)
    {
        node* prev = NULL;
        node* current = head;
        node* after = head -> next;
        while(after != NULL)
        {
            if(prev == NULL && current -> data > current -> next -> data)
            {
                current -> next = after -> next;
                after -> next = current;
                head = after;
                after = current -> next;
                prev = head;
            }
            else if(prev != NULL && current -> data > current -> next -> data)
            {
                current -> next = after -> next;
                after -> next = prev -> next;
                prev -> next = after;
                prev = after;
                after = current -> next;
            }
            else
            {
                prev = current;
                current = current -> next;
                after = current -> next;}
            }
        }
    return head;
}

node* swap_nodes(node* head,int i,int j)
{
    if(i>j)
    {
        int temp = i;
        i = j;
        j = temp;
    }
    node* prev1 = head;
    node* prev2 = head;
    node* curr1 = head;
    node* curr2 = head;
    for(int p=0;p<i-1;p++)
    {
        prev1 = prev1 -> next;
    }
    for(int p=0;p<j-1;p++)
    {
        prev2 = prev2 -> next;
    }
    if((i==0 || j==0) && abs(i-j) != 1)
    {
        curr1 = prev1;
        curr2 = prev2 -> next;
        node* a = curr2 -> next;
        curr2 -> next = curr1 -> next;
        prev2 -> next = curr1;
        curr1 -> next = a;
        head = curr2;
    }
    else if((i!=0 && j!=0) && abs(i-j) == 1)
    {
        curr1 = prev1 -> next;
        curr2 = curr1 -> next;
        node* a = curr2 -> next;
        prev1 -> next = curr1 -> next;
        curr2 -> next = curr1;
        curr1 -> next = a;
    }
    else if((i==0 || j==0) && ((i-j) == 1 || (i-j) == -1))
    {
        curr1 = prev1;
        curr2 = curr1 -> next;
        node* a = curr2 -> next;
        curr2 -> next = head;
        curr1 -> next = a;
        head = curr2;
    }
    else
    {
        curr1 = prev1 -> next;
        curr2 = prev2 -> next;
        node* a = curr2 -> next;
        prev1 -> next = curr2;
        curr2 -> next = curr1 -> next;
        prev2 -> next = curr1;
        curr1 -> next = a;
    }
    return head;
}
node *reverse (node *head, int k)
{
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
    head->next = reverse(next, k);

    /* prev is new head of the input list */
    return prev;
}

node* arrange_LinkedList(node* head)
{
   node* temp = head;
   node* evenhead = NULL;
   node* oddhead = NULL;
   node* eventail = NULL;
   node* oddtail = NULL;
   while(temp != NULL)
   {
       if(temp -> data %2 ==0)
       {
           if(evenhead == NULL)
           {
               evenhead = temp;
               eventail = temp;
           }
           else
           {
               eventail -> next = temp;
               eventail = temp;
           }
       }
       else
       {
           if(oddhead == NULL)
           {
               oddhead = temp;
               oddtail = temp;
           }
           else
           {
               oddtail -> next = temp;
               oddtail = temp;
           }
       }
       temp = temp -> next;
   }
    if(eventail != NULL && oddtail != NULL)
    {
        oddtail -> next = evenhead;
        eventail -> next = NULL;
        return oddhead;
    }
    else
    {
        return head;
    }
}

int main()
{
    node* head1 = take_input();
    int i,j;
    cin >> i >> j;
    node* head = swap_nodes(head1,i,j);
    print(head);
    return 0;
}

// @ Abhijit Tripathy
