/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;


public class Asignatura {
   
     private String ciclo;
    private String codigo;
    private String nombre;
    private double nota;
    private int creditos;
    private int veces;

    public Asignatura(String ciclo, String codigo, String nombre, double nota, int creditos, int veces) {
        this.ciclo = ciclo;
        this.codigo = codigo;
        this.nombre = nombre;
        this.nota = nota;
        this.creditos = creditos;
        this.veces = veces;
    }

    
    public String getCiclo() { return ciclo; }
    public String getCodigo() { return codigo; }
    public String getNombre() { return nombre; }
    public double getNota() { return nota; }
    public int getCreditos() { return creditos; }
    public int getVeces() { return veces; }
    
}
