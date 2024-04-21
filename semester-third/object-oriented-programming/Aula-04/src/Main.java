class Main{
    public static void main(String[] args) {
       Carro carro = new Carro("cavalo" ,"carlinhos", 2000, "preto");
       carro.acelerar(100);
        System.out.println(carro.exibirInformacoes());
        carro.acelerar(32);
        carro.frear(50);
        System.out.println(carro.exibirInformacoes());

    }
}