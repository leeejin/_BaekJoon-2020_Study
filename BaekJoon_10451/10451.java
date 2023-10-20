import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.*;

public class n10451 {
    public static int cycle;
    public static boolean[] visited;
    public static int[] graph;

    public static void bfs(int start) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(start);
        // 현재 노드를 방문 처리
        visited[start] = true;

        while (!q.isEmpty()) {
            int x = q.poll();

            
                int y = graph[x];
                System.out.println(x + " : " + y);
                if (!visited[y]) {
                    q.offer(y);
                    visited[y] = true;
                } else {
                    cycle++;
                    break;
                }

        }

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // 테스트 개수

        int i, j, n;
        for (i = 0; i < t; i++) {
            n = sc.nextInt(); // 순열의 크기

            cycle = 0;
            graph = new int[n + 1]; // 순열의 크기만큼 graph 공간을 만든다.
            visited = new boolean[n + 1];

            for (j = 1; j <= n; j++) {

                int p = sc.nextInt(); // 순열을 받고
                graph[j] = p; // graph에다가 저장
                // System.out.println(j + " " + p);
            }
            for (j = 1; j <= n; j++) {
                if (!visited[j]) {
                    bfs(j);
                }

            }
            System.out.println(cycle); // 방문했다면 1++ 하고 cycle 개수 출력
        }

    }
}