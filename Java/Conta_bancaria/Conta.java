abstract class Conta {
    private String nomeCliente;
    private double saldo;

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nome_cliente) {
        this.nomeCliente = nome_cliente;
    }

    public void setSaldoIncial(double saldo) {
        this.saldo = saldo;
    }

    public double getSaldo() {
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
