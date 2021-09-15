public class gerenciaContas {
    public static void main(String[] args) {

        Poupanca p1 = new Poupanca();
        ContaCorrente p2 = new ContaCorrente();

        p1.titular.setNome("Fernando");
        p1.setSaldoIncial(1000);
        p2.setNome("maria");
        p2.setSaldoIncial(500);

        p1.getSaldo();
        p2.getSaldo();
        System.out.println("\n=========================\n");

        p1.transferirPara(p2, 200);

        p1.getSaldo();
        p2.getSaldo();
        System.out.println("\n=========================\n");

        p2.transferirPara(p1, 100);

        p1.getSaldo();
        p2.getSaldo();
    }
}
