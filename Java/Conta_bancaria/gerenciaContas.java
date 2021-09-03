public class gerenciaContas {
    public static void main(String[] args) {

        Cliente jose = new Cliente("jose", "23049281243");
        Cliente maria = new Cliente("maria", "25676281233");
        Cliente joao = new Cliente("joao", "74349281343");

        jose.imprimeCadastro();

        System.out.println(Cliente.getId());
    }
}
