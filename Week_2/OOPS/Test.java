package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        
        // a. Create an instance of Veena and call play() method
        Veena veenaObj = new Veena();
        veenaObj.play();

        // b. Create an instance of Saxophone and call play() method
        Saxophone saxObj = new Saxophone();
        saxObj.play();

        System.out.println("--- Demonstrating Polymorphism ---");

        // c. Place the above instances in a variable of type Playable and then call play()
        Playable playableRef;

        // Holding Veena instance
        playableRef = veenaObj;
        playableRef.play();

        // Holding Saxophone instance
        playableRef = saxObj;
        playableRef.play();
    }
}