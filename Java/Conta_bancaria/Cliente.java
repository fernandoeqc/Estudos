public class Cliente {
<<<<<<< HEAD
    private String nome;
    private String sobrenome;
    private String cpf;

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    public String getCpf() {
        return cpf;
    }

    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }
    public String getSobrenome() {
        return sobrenome;
=======
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
>>>>>>> 37d30b1a6256b2ce1e6fbc39839cbbf5fb17ba85
    }
}
