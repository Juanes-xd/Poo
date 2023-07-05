import java.util.Arrays;

public class PrincipalMain {


    public static int[][] Ordenar(int[][] lista) {

        
        /**
         *     int[] aux;
        int x = 0;
        boolean farg = true;
        while (farg) {
            for (int i = 0; i < lista.length; i++) {
                if (i + 1 != lista.length) {
                    if (lista[x][1] > lista[i][1]) {
                        aux = lista[x];
                        lista[x] = lista[i];
                        lista[i] = aux;
                    }
                }
            }
            if (x == lista.length - 1) {
                farg = false;
            } else {
                x++;
            }
        }

        return lista;
         */
        int aux;
        // string aux;
        for (int i = 0; i < lista.length; i++) {
            if( i + 1 !=  lista.length ){
              if (lista[i][1] < lista[i + 1][1]) {
                aux = lista[i][1];
                lista[i][1] = lista[i + 1][1];
                lista[i + 1][1] = aux;
              }
            }
          }

        return lista;

    }

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        int[][] lista = {{4,10,8}
                        ,{1,6,3},
                         {12,15,2}};
       int[][] listica = Ordenar(lista);        
       System.out.println("{");
       for( int k=listica.length-1;k>=0;k-- ){
         for( int h=listica.length-1;h>=0;h-- ){
           System.out.print(" "+listica[k][h]+", ");
         }
         System.out.println();
       }
       System.out.println("}");
        
        
    
          /** 
            int i;
           int aux;
        //string aux;
          for(i=0;i<lista.length;i++){
            for(int j=0;j<lista.length-1;j++){
                if(lista[j] > lista[j+1]){
                    aux = lista[j];
                    lista[j] = lista[j+1];
                    lista[j+1] = aux;
                }
            }
        }
         
        for(int k=lista.length-1;k>=0;k--){
            System.out.println(lista[k]);
        }
        */
        
    }

}