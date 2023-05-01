import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;


public class Lista {
    public static void main(String[] args) {
        List<String> nomes = new ArrayList<String>();
        nomes.add("Josimar ");
        nomes.add("Angélica ");
/*         System.out.println("\nFor clássico:");
        for(int i=0; i<nomes.size();i++){
            System.out.print(nomes.get(i));
        }
        System.out.println("\nIterator:");
        Iterator i = nomes.iterator();
        while (i.hasNext()){
            System.out.print(i.next());
        }
        System.out.println("\nfor-each:");
        for(String nome: nomes){
            System.out.print(nome);
        } 
        System.out.println("\nforEach():");*/
        nomes.forEach(System.out::print);
    }
}
