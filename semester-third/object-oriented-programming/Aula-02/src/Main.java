public class Main {
    public static void main(String[] args) {
        Relogio relogio = new Relogio();
        relogio.setHora(0, 0);

        System.out.println(relogio.mostraHora());

        relogio.setHora(10, 59);
        relogio.incrementaMinuto();

        System.out.println(relogio.mostraHora());

    }
}