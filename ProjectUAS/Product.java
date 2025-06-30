/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package ProjectUAS;

//import ProjectUAS.ProductDasar;

/**
 *
 * @author Dimas Surya W
 * Kelas Pemrograman Berorientasi Objek - 2B
 * email : dimaszuryaw@gmail.com
 */
public class Product extends ProductDasar {
    protected int harga;
    protected int stock;

    public Product(int kode, String nama, int harga, int stock) {
        super(kode, nama);
        this.harga = harga;
        this.stock = stock;
    }

    // Getter
    public int getHarga() {
        return harga;
    }

    public int getStock() {
        return stock;
    }


    // Override
    @Override
    public String getInfoProduk() {
        return super.getInfoProduk() + ", Harga: " + harga + ", Stok: " + stock;
    }
}
