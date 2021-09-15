abstract class Conta{
    public Cliente titular = new Cliente();
    private double saldo;

    public void setSaldoIncial(double saldo) {
        this.saldo = saldo;
    }

    public double getSaldo() {
        System.out.println(this.nome + " tem de saldo: " + saldo);
        return saldo;
    }

    public void saca(double sacar) {
        saldo -= sacar;
    }

    public void deposita(double depositar) {
        saldo += depositar;
    }

    abstract void imprimeExtrato();
}
