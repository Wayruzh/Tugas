/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package ProjectUAS;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author Dimas Surya W
 * Kelas Pemrograman Berorientasi Objek - 2B
 * email : dimaszuryaw@gmail.com
 */
public class KoneksiDB {
    
    private static final String URL = "jdbc:mysql://localhost:3306/db_toko"; // nama database 
    private static final String USER = "root"; // 
    private static final String PASSWORD = ""; // 

    public static Connection getConnection() {
        try {
            // Load driver JDBC
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Kembalikan koneksi
            return DriverManager.getConnection(URL, USER, PASSWORD);

        } catch (ClassNotFoundException | SQLException e) {
            System.out.println("Koneksi ke database gagal: " + e.getMessage());
            return null;
        }
    }
}

