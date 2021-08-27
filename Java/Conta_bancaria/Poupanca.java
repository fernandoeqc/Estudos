public class Poupanca extends Conta implements Transferencia {

    @Override
    void imprimeExtrato() {
        System.out.println("extrato é esse");
    }

    @Override
    public void transferirPara(Conta conta, double valor) {
        saca(valor * 1.1);
        System.out.println("*** Taxa de transferência de 10% ***");
        conta.deposita(valor);
    }
}
