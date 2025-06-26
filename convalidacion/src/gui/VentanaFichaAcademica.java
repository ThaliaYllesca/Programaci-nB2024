/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package gui;

import javax.swing.*;
import util.DatosAlum;

public class VentanaFichaAcademica {
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Ficha Académica del Alumno");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setSize(600, 650);
            frame.setLocationRelativeTo(null); 

            JDesktopPane desktopPane = new JDesktopPane();
            frame.setContentPane(desktopPane);

            DatosAlum ficha = new DatosAlum(); 
            desktopPane.add(ficha);
            ficha.setVisible(true);

            frame.setVisible(true);
        });
    }
    
}
