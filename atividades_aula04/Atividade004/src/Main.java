public class ContaBancaria {
    private int numeroDaConta;
    private double saldo;
    
    public ContaBancaria(int numeroDaConta, double saldoInicial) {
        this.numeroDaConta = numeroDaConta;
        this.saldo = saldoInicial;
    }
    
    public void depositar(double valor) {
        saldo += valor;
        System.out.printf("Depósito de R$" + valor + " realizado com sucesso.");
    }
    
    public void sacar(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            System.out.printf("Saque de R$" + valor + " realizado com sucesso.");
        } else {
            System.out.printf("Saldo insuficiente para realizar o saque.");
        }
    }
    
    public void verSaldo() {
        System.out.printf("Saldo atual: R$" + saldo);
    }
    
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria(123456, 1000.0);
        
        conta.verSaldo();
        conta.depositar(500.0);
        conta.verSaldo();
        conta.sacar(200.0);
        conta.verSaldo();
        conta.sacar(2000.0);
    }
}
