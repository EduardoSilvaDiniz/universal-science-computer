/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.aula1;

/**
 *
 * @author eduardo_diniz
 */

public class Car {
	private String marca;
	private String modelo;
	private String cor;
	private int ano;


	public String getModelo() {
		return this.modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getCor() {
		return this.cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public int getAno() {
		return this.ano;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}
	
	public String exibirInformacoes(){
		return String.format("modelo: %s\nmarca: %s\ncor: %s\nano: %d", getModelo(), getMarca(), getCor(), getAno()); 
	}
	
}