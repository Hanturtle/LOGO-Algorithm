// BOJ 1309번: 동물원
import java.io.*;
public class practice02 {
	static int[][] zoo;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		zoo = new int[n+1][3];
		
		zoo[0][1] = 1;
		zoo[1][1] = 1;
		zoo[2][1] = 1;
		
		for(int i = 2; i <= n; i++) {
			zoo[0][i] = (zoo[0][i-1] + zoo[1][i-1] + zoo[2][i-1]) % 9901;
			zoo[1][i] = (zoo[0][i-1] + zoo[2][i-1]) % 9901;
			zoo[2][i] = (zoo[0][i-1] + zoo[1][i-1]) % 9901;
		}
		System.out.println((zoo[0][n] + zoo[1][n] + zoo[2][n]) % 9901);
	}
}