// BOJ 7795번: 먹을 것인가 먹힐 것인가
import java.io.*;
import java.util.*;
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		for(int i = 0; i < T; i++) {
			String[] s = br.readLine().split(" ");
			int[] a = new int[Integer.parseInt(s[0])];
			int[] b = new int[Integer.parseInt(s[1])];
			s = br.readLine().split(" ");
			for(int j = 0; j < a.length; j++) {
				a[j] = Integer.parseInt(s[j]);
			}
			s = br.readLine().split(" ");
			for(int j = 0; j < b.length; j++) {
				b[j] = Integer.parseInt(s[j]);
			}
			int result = combination(a, b);
			System.out.println(result);
		}
	}
	
	public static int combination(int[] a, int[] b) {
		Arrays.sort(a);
		Arrays.sort(b);
		int result = 0;
		for(int i = 0; i < a.length; i++) {
			int count = 0;
			while(count < b.length && a[i]>b[count])
				count++;
			result += count;
		}
		return result;
	}
}