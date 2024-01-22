package lista;

public class Node<index> {
    public Node(index element) {
        this.element = element;
        this.next = null;
    }

    public Node(index element, Node<index> next) {
        this.element = element;
        this.next = next;
    }
    private index element;
    private Node<index> next;

    public index getElement() {
        return element;
    }

    public void setElement(index element) {
        this.element = element;
    }

    public Node<index> getNext() {
        return next;
    }

    public void setNext(Node<index> next) {
        this.next = next;
    }


    @Override
    public String toString() {
        return "node{" +
                "element=" + element +
                ", next=" + next +
                '}';
    }
}
