
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class DijMSTShort {

    public static void main(String[] args) {

        int totalVertices;
        int totalEdges;

        Scanner scr = new Scanner(System.in);

        System.out.println("How many Vertex You have? ");
        totalVertices = scr.nextInt();

        System.out.println("How many Edges You have ? ");
        totalEdges = scr.nextInt();
        totalEdges = totalEdges * 2;

        ArrayList<Edge> allEdges = new ArrayList<>();

        for (int i = 1; i <= totalEdges; i = i + 2) {
            System.out.println("Enter Source Dest Cost ");

            int src = scr.nextInt();
            int dest = scr.nextInt();
            int cost = scr.nextInt();

            Edge e = new Edge();
            e.src = src;
            e.dest = dest;
            e.cost = cost;

            allEdges.add(e);
            Edge e2 = new Edge();
            e2.src = dest;
            e2.dest = src;
            e2.cost = cost;
            allEdges.add(e2);

        }

        for(Edge e:allEdges){
            System.out.println(e.src+" : "+e.dest+" => "+e.cost);
        }

        HashMap<Integer,Integer> visitCost = new HashMap<>(); 
        ArrayList<Integer> visited = new ArrayList<>();//1  

        int startVertex = 0; 


        for(Edge e:allEdges){
            if(e.src == startVertex){
                visited.add(e.dest); 
                visitCost.put(e.dest,e.cost); 
            }
        }

        System.out.println(visited);
        System.out.println(visitCost);
        
    }
}

class Edge {

    int src;
    int dest;
    int cost;

}
