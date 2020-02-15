// Bismillahir Rahmanir Rahim
// UVA-10925

import  java.util.Scanner;
import java.math.BigInteger;

class  Main {  
    public static void main(String[]  args){
        Scanner input = new Scanner(System.in);
        int chk = 1;
        while(true){
            
        int N = input.nextInt(), F = input.nextInt();  // input 
       // breaking condition for input taking
  	    if(N == 0 && F == 0) { break;} 
        BigInteger sum = BigInteger.ZERO;   //  initialization of sum = 0
        
        for(int i = 0; i < N; ++i){
            BigInteger b = input.nextBigInteger();  // reading BigInteger from input
            sum = sum.add(b);  // addition operation
        }
        
        // // the line below is BigInteger division that divides the sum to F friends
        System.out.println("Bill #"+(chk++)+" costs "+sum+": each friend should pay "+sum.divide(BigInteger.valueOf(F)));
        System.out.println();
    }
    
}
}
