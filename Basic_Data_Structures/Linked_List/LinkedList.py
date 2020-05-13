class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

def print_ll(head):
    temp = head
    while(temp):
        print(temp.data,end = " ")
        temp = temp.next

def take_input():
    data_take = list(map(int,input().split()))
    llist = LinkedList()
    tail = None
    for data in data_take:
        if data != -1:
            if(llist.head == None):
                llist.head = node(data)
                tail = llist.head
            else:
                tail.next = node(data)
                tail = tail.next
    return llist.head

def insert_node(head,pos,data):
    temp = head
    trail = LinkedList()
    trail.head = node(data)
    if pos==0:
        trail.head.next = head
        head = trail.head
        return head
    j = 0
    while(j in range(pos-1) and temp != None):
        temp = temp.next
        j+=1
    if(trail.head.next != None):
        trail.head.next = temp.next
        temp.next = trail.head
    else:
        temp.next = trail.head
    return head


if __name__ == "__main__":
    llist = LinkedList()
    llist.head = take_input()
    llist.head = insert_node(llist.head,0,45)
    print_ll(llist.head)