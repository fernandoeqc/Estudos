public class Cliente {
    static int id = 0;
    private String nome;
    private String cpf;

    Cliente(String nome, String cpf) {
        Cliente.id++;
        this.nome = nome;
        this.cpf = cpf;
    }

    public void imprimeCadastro() {
        System.out.println("nome, " + this.nome);        
        System.out.println("cpf, " + this.cpf);        
    } 

    static int getId() {
        return Cliente.id;
    }
}
