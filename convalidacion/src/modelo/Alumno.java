/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.util.List;

public class Alumno {
    
   private String codigo;
    private String nombre;
    private String especialidad;
    private String curriculum;
    private List<Asignatura> asignaturas;

 
    public Alumno(String codigo, String nombre, String especialidad, String curriculum, List<Asignatura> asignaturas) {
        this.codigo = codigo;
        this.nombre = nombre;
        this.especialidad = especialidad;
        this.curriculum = curriculum;
        this.asignaturas = asignaturas;
    }
    
    public String getCodigo() { return codigo; }
    public String getNombre() { return nombre; }
    public String getEspecialidad() { return especialidad; }
    public String getCurriculum() { return curriculum; }
    public List<Asignatura> getAsignaturas() { return asignaturas; } 
    
}
