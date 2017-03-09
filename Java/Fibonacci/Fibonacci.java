public class Fibonacci {
	public int calculaFibonacci(int n){
        if (n <= 2) return n;
        else return calculaFibonacci(n-1) + calculaFibonacci(n-2);
	}
}
