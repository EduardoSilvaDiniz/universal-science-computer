public class Carro {
    private String marca;
    private String modelo;
    private int ano;
    private String cor;
    private double velocidadeAtual;
    private int marcha;
    private double combustivel;

    public Carro(String marca, String modelo, int ano, String cor){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
        this.cor = cor;
        velocidadeAtual = 0;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void acelerar(double velocidade){
        this.velocidadeAtual += velocidade;
        trocaMarcha();
    }
    public void frear(double velocidade){
        this.velocidadeAtual -= velocidade;
        if (this.velocidadeAtual < 0)
            this.velocidadeAtual = 0;
        trocaMarcha();
    }

    public String exibirInformacoes(){
        return String.format(getMarca() + " " + getModelo() + " " + getAno() + " " + getCor() + " velocidade atual : %skm/h marcha: %s", velocidadeAtual, this.marcha);
    }

    private void trocaMarcha(){
        if(velocidadeAtual >= 20 && velocidadeAtual < 30){
            this.marcha=1;
        }
        else if(velocidadeAtual >= 30 && velocidadeAtual < 50) {
            this.marcha=2;
        }
        else if(velocidadeAtual >= 50 && velocidadeAtual < 90) {
            this.marcha=3;
        }
        else if(velocidadeAtual >= 90 && velocidadeAtual < 120) {
            this.marcha=4;
        }
    }

    public void abastecer(double combustivel){
        this.combustivel += combustivel;
    }

}
