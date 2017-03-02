/**
 * Created by gustavo on 3/2/17.
 */
public class Padovan {
    public static void main(String[] args){
        int n = 5;
        padovan(n);
    }

    public static int padovan(int n) {
        int primeiro = 1;
        int segundo = 1;
        int terceiro = 1;
        int proximo;
        int atual = 0;

        for (int i = 1; i <= n;) {
            proximo = segundo + primeiro;

            if(primo(proximo) == true && atual != proximo){
                System.out.print(proximo + " ");
                atual = proximo;
                i++;
            }
            primeiro = segundo;
            segundo = terceiro;
            terceiro = proximo;
        }
        return 1;
    }

    public static boolean primo(int n){
        if(n % 2 == 0 && n !=2 || n == 1){
            return false;
        }
        for(int i = n -1; i > 1; i--){
            if(n % i == 0) return false;
        }
        return true;
    }
}
