package lista;

public class Test {
    public static void main(String[] args)
    {
        LinkedList<Integer> lista = new LinkedList<>();
        lista.add(1);
        lista.add(2);
        lista.add(92);
        lista.add(92);
        lista.add(92);
        lista.add(7);
        lista.add(92);
        lista.add(92);
        lista.add(92);
        lista.add(10, 0);

        System.out.println(lista.toString());

    }
}
