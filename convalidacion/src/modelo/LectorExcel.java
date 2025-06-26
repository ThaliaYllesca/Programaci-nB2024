/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import modelo.Alumno;
import modelo.Asignatura;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;
import org.apache.poi.ss.usermodel.*;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;
import java.io.IOException;
import javax.swing.JOptionPane; 

public class LectorExcel {
    
   public List<Object[]> leerAlumnoDesdeExcel(File archivo) {
    List<Object[]> listaCursos = new ArrayList<>();

    try (FileInputStream fis = new FileInputStream(archivo);
         Workbook workbook = new XSSFWorkbook(fis)) {

        Sheet hoja = workbook.getSheetAt(0);
        String cicloActual = "";
        int numero = 1;

        for (Row fila : hoja) {
            
            Cell celda0 = fila.getCell(0);
            if (celda0 != null && celda0.getCellType() == CellType.STRING) {
                String texto = celda0.getStringCellValue().trim();
                if (texto.startsWith("N°") && texto.contains("Semestre")) {
                    cicloActual = texto.substring(texto.indexOf(" ") + 1).trim();
                    continue;
                }
            }

         
            Cell celdaCodigo = fila.getCell(0);
            if (celdaCodigo != null && celdaCodigo.getCellType() == CellType.STRING) {
                String codigo = celdaCodigo.getStringCellValue().trim();
                if (codigo.matches("N\\d{4}")) {
                    String curso = obtenerTexto(fila.getCell(1));
                    String nota = obtenerTexto(fila.getCell(10));
                    String creditos = obtenerTexto(fila.getCell(11));
                    String veces = "1";

                    Object[] filaCurso = {
                        numero++, cicloActual, codigo, curso, nota, creditos, veces
                    };

                    listaCursos.add(filaCurso);
                }
            }
        }

    } catch (IOException e) {
    e.printStackTrace();
    JOptionPane.showMessageDialog(null, "Error al leer el archivo Excel.");
}
    return listaCursos;
}

private String obtenerTexto(Cell celda) {
    if (celda == null) return "";
    return switch (celda.getCellType()) {
        case STRING -> celda.getStringCellValue().trim();
        case NUMERIC -> String.valueOf((int) celda.getNumericCellValue());
             case BOOLEAN -> String.valueOf(celda.getBooleanCellValue());
        default -> "";
    };

    
}
}
