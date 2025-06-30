/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package ProjectUAS;

import javax.swing.*;

/**
 *
 * @author Dimas Surya W
 * Kelas Pemrograman Berorientasi Objek - 2B
 * email : dimaszuryaw@gmail.com
 */
public class ProductManager extends JFrame {
    

    public static void main(String[] args) {
        // Jalankan form utama (ProductForm) di thread GUI
        java.awt.EventQueue.invokeLater(() -> {
            new ProductForm().setVisible(true);
        });
    }
}