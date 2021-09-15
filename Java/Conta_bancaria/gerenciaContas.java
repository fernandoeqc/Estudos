public class gerenciaContas {
    public static void main(String[] args) {

        Cliente jose = new Cliente("jose", "23049281243");
        Cliente maria = new Cliente("maria", "25676281233");
        Cliente joao = new Cliente("joao", "74349281343");

<<<<<<< HEAD
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
=======
        jose.imprimeCadastro();

        System.out.println(Cliente.getId());
>>>>>>> 37d30b1a6256b2ce1e6fbc39839cbbf5fb17ba85
    }
}
