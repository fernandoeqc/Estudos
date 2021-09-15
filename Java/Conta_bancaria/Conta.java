<<<<<<< HEAD
abstract class Conta{
    public Cliente titular = new Cliente();
=======
public class Conta {
    private String nomeCliente;
>>>>>>> 37d30b1a6256b2ce1e6fbc39839cbbf5fb17ba85
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
}
