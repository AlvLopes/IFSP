public class Main {
    public static void main(String[] args) {
        Retangulo retangulo = new Retangulo(4, 5);
        System.out.println("Área do Retângulo: " + retangulo.area());

        Circulo circulo = new Circulo(3);
        System.out.println("Área do Círculo: " + circulo.area());

        Triangulo triangulo = new Triangulo(6, 7);
        System.out.println("Área do Triângulo: " + triangulo.area());
    }
}
