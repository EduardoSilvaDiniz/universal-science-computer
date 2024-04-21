public class Aluno {
    private String nome;
    private int idade;
    private String ra;
    private String curso;

    public Aluno(String nome, int idade, String ra, String curso){
        this.nome=nome;
        this.idade=idade;
        this.ra=ra;
        this.curso=curso;
    }
    public Aluno(String nome){
        this.nome=nome;
    }

    public boolean menorDeIdade(){
        return idade < 18;
    }

    public void alterarCurso(String curso){
        this.curso=curso;
    }

    public String exibirInformacoes(){
        return String.format("nome: %s%nidade: %s%nra: %s%ncurso: %s%n", nome, idade, ra, curso);
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getRa() {
        return ra;
    }

    public void setRa(String ra) {
        this.ra = ra;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
}
