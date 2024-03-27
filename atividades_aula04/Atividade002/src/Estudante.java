public class Estudante {
    // Atributos da classe Estudante
    private String nome;
    private int idade;
    private double nota;

    // Construtor da classe Estudante
    public Estudante(String nome, int idade, double nota) {
        this.nome = nome;
        this.idade = idade;
        this.nota = nota;
    }

    // Método para verificar se o estudante foi aprovado
    public boolean aprovado() {
        return nota >= 7.0;
    }
}
