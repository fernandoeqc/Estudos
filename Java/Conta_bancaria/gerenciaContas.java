public class gerenciaContas {
    public static void main(String[] args) {

        Poupanca p1 = new Poupanca();
        ContaCorrente p2 = new ContaCorrente();

        p1.setNomeCliente("João");
        p1.setSaldoIncial(1000);
        p2.setNomeCliente("maria");
        p2.setSaldoIncial(500);

        System.out.println(p1.getNomeCliente() + " tinha: " + p1.getSaldo());
        System.out.println(p2.getNomeCliente() + " tinha: " + p2.getSaldo());
        System.out.println("\n=========================\n");

        System.out.println(p1.getNomeCliente() + " transferiu 200 para " + p2.getNomeCliente() + "\n");
        p1.transferirPara(p2, 200);

        System.out.println(p1.getNomeCliente() + " agora tem: " + p1.getSaldo());
        System.out.println(p2.getNomeCliente() + " agora tem: " + p2.getSaldo());
        System.out.println("\n=========================\n");

        System.out.println(p2.getNomeCliente() + " transferiu 100 para " + p1.getNomeCliente() + "\n");
        p2.transferirPara(p1, 100);

        System.out.println(p1.getNomeCliente() + " agora tem: " + p1.getSaldo());
        System.out.println(p2.getNomeCliente() + " agora tem: " + p2.getSaldo());
    }
}
