public class Main {
    public static void main(String[] args) {
        Livro livro = new Livro("java como programar", "Paul deitel", 2016);
        livro.exibirInformacoes();
        livro.emprestar();
        System.out.println(livro.exibirInformacoes());
        livro.devolver();
        System.out.println(livro.exibirInformacoes());

    }
}