import java.util.Arrays;

class Main{
    public static <Stream> void main(String[] args) {
        Aluno alunos[] = new Aluno[10];
        int menorIdade = 0;
        alunos[0] = new Aluno("eduardo Silva", 12, "200096", "ciencia da computação");
        alunos[1] = new Aluno("jose", 21, "200092", "ciencia da computação");
        alunos[2] = new Aluno("james", 21, "200099", "ciencia da computação");
        alunos[3] = new Aluno("maria", 32, "200100", "ciencia da computação");
        alunos[4] = new Aluno("mary", 20, "200121", "ciencia da computação");
        alunos[5] = new Aluno("eddy", 19, "200132", "ciencia da computação");
        alunos[6] = new Aluno("job", 24, "200122", "ciencia da computação");
        alunos[7] = new Aluno("alessa", 23, "200231", "ciencia da computação");
        alunos[8] = new Aluno("andy", 18, "200321", "ciencia da computação");
        alunos[9] = new Aluno("lucas", 19, "200932", "ciencia da computação");

        for (int i = 0; i < 10; i++) {
            if (alunos[menorIdade].getIdade() > alunos[i].getIdade()){
                menorIdade=i;
            }
        }

        System.out.println("aluno com menor idade da array: " + alunos[menorIdade].getNome());
    }
}