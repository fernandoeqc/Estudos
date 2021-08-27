public class ContaCorrente extends Conta implements Transferencia {

    @Override
    void imprimeExtrato() {
        System.out.println("extrato é esse mas diferente");
    }

    @Override
    public void transferirPara(Conta conta, double valor) {
        saca(valor * 1.05);
        System.out.println("*** Taxa de transferência de 5% ***");
        conta.deposita(valor);
    }
}
