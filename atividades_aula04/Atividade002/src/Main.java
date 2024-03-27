public class Main {
    public static void main(String[] args) {
        // Criando um objeto da classe Estudante e atribuindo valores aos atributos
        Estudante estudante = new Estudante("João", 20, 8.5);

        // Verificando se o estudante foi aprovado
        if (estudante.aprovado()) {
            System.out.println(estudante.nome + " foi aprovado!");
        } else {
            System.out.println(estudante.nome + " foi reprovado.");
        }
    }
}
