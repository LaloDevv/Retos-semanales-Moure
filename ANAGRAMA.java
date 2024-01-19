package RETOS2022;

import java.util.Scanner;

public class ANAGRAMA {

	public static void main(String[] args) {
		/*
		 * Escribe una función que reciba dos palabras (String) y retorne verdadero o
		 * falso (Bool) según sean o no anagramas. - Un Anagrama consiste en formar una
		 * palabra reordenando TODAS las letras de otra palabra inicial. - NO hace falta
		 * comprobar que ambas palabras existan. - Dos palabras exactamente iguales no
		 * son anagrama.
		 */

		Scanner entrada = new Scanner(System.in);
		String word = "";

		do {

			System.out.println("Dime una palabra: ");
			word = entrada.nextLine();
			System.out.println("Dime otra palabra: ");
			String word1 = entrada.nextLine();

			if (word.equals(word1)) {
				System.out.println("No es un anagrama");
			} else {
				int temp = word.length();
				int temp2 = word1.length();

				if (temp == temp2) {
					boolean[] boolString = new boolean[temp];

					for (int i = 0; i < temp; i++) {

						boolString[i] = false;

					}

					for (int i = 0; i < temp; i++) {

						for (int j = 0; j < temp; j++) {

							if (word.charAt(i) == word1.charAt(j) && boolString[i] == false) {
								boolString[i] = true;
							}
						}
					}

					int check = 0;

					for (int i = 0; i < temp; i++) {

						if (boolString[i] == false) {
							check++;
						}
					}

					if (check == 0) {
						System.out.println("Es un anagrama");
					} else {
						System.out.println("No es un anagrama");
					}

				} else {
					System.out.println("No es un anagrama");
				}

			}
		} while (!word.equals("0"));
	}

}
