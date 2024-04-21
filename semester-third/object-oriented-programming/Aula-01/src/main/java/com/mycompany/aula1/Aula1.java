/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.aula1;

/**
 *
 * @author eduardo_diniz
 */
public class Aula1 {
    public static void main(String[] args) {
	    Car onix = new Car();
	    onix.setAno(2005);
	    onix.setCor("preto");
	    onix.setMarca("chevrolet");
	    onix.setModelo("ltz");
	    
	    System.out.println(onix.exibirInformacoes());	    
	    
    }
}
