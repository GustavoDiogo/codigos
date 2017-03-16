import java.util.ArrayList;

public class Time {
	public String nome;
	public ArrayList<Jogador> jogadores = new ArrayList<Jogador>();
	public ArrayList<String> escalacao = new ArrayList<String>();
	
	public Time(String nome){
		this.nome = nome;
	}
	
	public void inserirJogador(Jogador jogador){		
		this.jogadores.add(jogador);
		jogador.time = this.nome;
		this.escalacao.add(jogador.nome + ": " + jogador.posicao);
	}
	
	public ArrayList<String> getEscalacao(){
		return this.escalacao;
	}
	
	

}
