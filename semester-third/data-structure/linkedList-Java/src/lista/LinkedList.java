package lista;

public class LinkedList<index>
{
    private Node<index> HEAD;
    private Node<index> TAIL;
    private int size = 0;
    public void add(index element)
    {
        Node<index> node = new Node<index>(element);
        if (size == 0)
            this.HEAD = node;
        else
            this.TAIL.setNext(node);
        this.TAIL = node;
        this.size++;
    }
    public void add(index element, int position)
    {
        if (position < 0 && position > this.size) // testando
            throw new IllegalArgumentException("position invalide");
        if (this.size == 0) // esta vazio
            this.add(element);
        else if (position == this.size) // final
            this.add(element);
        else // meio
        {
            Node<index> afterNode = this.searchForNode(position);
            Node<index> nextNode = afterNode.getNext();
            Node<index> newNode = new Node<>(element, nextNode);
            afterNode.setNext(newNode);
            this.size++;
        }
    }
    private void changeHerd(index element)
    {
        if (this.size == 0)
        {
            Node<index> newNode = new Node<>(element);
            this.HEAD = newNode;
            this.TAIL = newNode;
        }
        else
        {
            Node<index> newNode = new Node<>(element, this.HEAD);
            this.HEAD = newNode;
        }

    }
    public int getSize()
    {
        return this.size;
    }

    public void clean()
    {
        for (Node<index> current = this.HEAD; current != null;)
        {
            Node<index> next = current.getNext();
            current.setElement(null);
            current.setNext(null);
            current = next;
        }
        this.HEAD = null;
        this.TAIL = null;
        this.size = 0;
    }


    private Node<index> searchForNode(int position)
    {
        if (!(position >= 0 && position <= this.size))
        {
            throw new IllegalArgumentException("position is not exist");
        }
        Node<index> currentNode = this.HEAD;
        for (int i = 0; i <position; i++)
        {
           currentNode = currentNode.getNext();
        }
        return currentNode;
    }

    public index searchForPosition(int position)
    {
        return this.searchForNode(position).getElement();
    }
    public int searchForElement(index element)
    {
        int position = 1;
        Node<index> nodeCurrent = this.HEAD;
        for (int i = 0; i < this.size; i++)
        {
            if (nodeCurrent.getElement().equals(element))
                return position;
            else
            {
                nodeCurrent = nodeCurrent.getNext();
                position++;
            }
        }
        return -1;
    }

    @Override
    public String toString()
    {
        if (this.size == 0)
            return "[]";
        else
        {
            StringBuilder stringBuilder = new StringBuilder("[");
            Node<index> head = this.HEAD;
            for (int i = 0; i < this.size -1; i++)
            {
                stringBuilder.append(head.getElement()).append(",");
                head = head.getNext();
            }
            stringBuilder.append(head.getElement()).append("]");
            return stringBuilder.toString();
        }
    }
}
