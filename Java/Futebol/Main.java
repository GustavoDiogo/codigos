
public class Main {

	public static void main(String[] args) {
	Jogador Ronaldo = new Jogador("Ronaldo dos Santos","Goleiro");
	Jogador Zina = new Jogador("Zina Brilha","Artilheiro");
	
	Jogador Takeo = new Jogador("Eduardo Takeo","Goleiro");
	Jogador Adriano = new Jogador("Adriano Imperador","Artilheiro");
		
	Time Corinthians = new Time("Esporte Clube Corinthians");
	Time Flamengo = new Time("Flamengo Futebol Clube");
	
	Corinthians.inserirJogador(Ronaldo);
	Corinthians.inserirJogador(Zina);
		
	Flamengo.inserirJogador(Takeo);
	Flamengo.inserirJogador(Adriano);	
	
	System.out.println("A escalação do Corinthians é " + Corinthians.getEscalacao());
	System.out.println("A escalação do Flamengo é " + Flamengo.getEscalacao());
	
	System.out.println("O time atual do Takeo é o" + Takeo.time);
	
	}

}
