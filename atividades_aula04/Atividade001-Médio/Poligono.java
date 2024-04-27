abstract class Poligono {
    abstract double area();
}

class Retangulo extends Poligono {
    private final double base;
    private final double altura;

    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    double area() {
        return base * altura;
    }
}

class Circulo extends Poligono {
    private final double raio;

    public Circulo(double raio) {
        this.raio = raio;
    }

    @Override
    double area() {
        return Math.PI * Math.pow(raio, 2);
    }
}

class Triangulo extends Poligono {
    private final double base;
    private final double altura;

    public Triangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    double area() {
        return (base * altura) / 2;
    }
}

