using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _23_Mart_Tekrar3_Form_
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            char aranan,harf;
            string cumle;
            byte i,adet=0;

            aranan = Convert.ToChar(textBox2.Text);
            cumle = textBox1.Text;
            for (i = 0; i <= textBox1.Text.Length - 1; i++)
            {
                harf = Convert.ToChar(cumle[i]);

                if (aranan == harf)
                {
                    adet++;
                }
            }

            if (adet>0)
            {
                MessageBox.Show("Aradığınız karakter " + adet + " adet bulunuyor");
            }
            else
            {
                MessageBox.Show("Aradığınız karakter bulunmuyor");
            }
        }
    }
}
