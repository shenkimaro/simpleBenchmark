package performance;

import java.util.Date;

/**
 *
 * @author ibanez
 */
public class Performance {

    public int soma(int a, int b) {
        return a + b;
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Usando JAVA: ");
        double max = Math.pow(10, 9);
        long inicio, fim;
        int cont;

        inicio = new Date().getTime();
        cont = 0;
        for (int i = 0; i < max; i++) {
            cont = cont + 1;
        }
        fim = new Date().getTime();
        System.out.println("Laço direto: " + cont + " em " + (fim - inicio));
        
        inicio = new Date().getTime();
        cont = 0;
        for (int i = 0; i < max; i++) {
            cont = new Performance().soma(cont, 1);
        }
        fim = new Date().getTime();
        System.out.println("Chamando funcao: " + cont + " em " + (fim - inicio));

    }

}
