/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package ProjectUAS;

/**
 *
 * @author Dimas Surya W
 * Kelas Pemrograman Berorientasi Objek - 2B
 * email : dimaszuryaw@gmail.com
 */
public class ProductDasar {
    protected int kode;
    protected String nama;

    public ProductDasar(int kode, String nama) {
        this.kode = kode;
        this.nama = nama;
    }

    public int getKode() {
        return kode;
    }


    public String getNama() {
        return nama;
    }


    public String getInfoProduk() {
        return "Kode: " + kode + ", Nama: " + nama;
    }
}


