class Node {
    int data;
    Node down;
    Node next;
    public Node(int data) {
        this.data = data;
        this.down = null;
        this.next = null;
    }
}
class LinkedList {
    Node head;
    public LinkedList() {
        this.head = null;
    }
    
    public void addNode(int data) {
        Node newNode = new Node(data);
        Node temp;
        if(head == null) {
            head = newNode;
        } else {
            for(temp = head; temp.next != null; temp = temp.next);
            temp.next = newNode;
        }
    }
    
    public void printList() {
        Node temp;
        if(head == null) {
            Sytem.out.println("Empty list");
        } else {
            for(temp = head; temp != null; temp = temp.next) {
                System.out.println(temp.data);
            }
        }
    }
    Node flatten(Node root) {
        if(root == null || root.next == null) {
            return root;
        }
        root.next = flatten(root.next);
        root = merge(root, root.next);
        return root;
    }
    Node merge(Node a, Node b) {
        Node res;
        if(a == null) {
            return b;
        }
        if(b == null) {
            return a;
        }
        if(a.data < b.data) {
            res = a;
            res.down = merge(a.down, b);
        } else {
            res = b;
            res.down = merge(a, b.down);
        }
        return res;
    }
}
