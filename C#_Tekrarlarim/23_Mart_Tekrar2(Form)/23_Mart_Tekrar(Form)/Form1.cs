using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _23_Mart_Tekrar_Form_
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Convert.ToInt32(comboBox1.Items.Add(textBox1.Text));
        }

        private void button2_Click(object sender, EventArgs e)
        {
            bool mevcut = false;
            int i;

            for (i = 0; i <= comboBox1.Items.Count-1; i++)
            {
                if (Convert.ToInt32(textBox2.Text)  == Convert.ToInt32(comboBox1.Items[i]))
                {
                    mevcut=true;
                    break;
                }
            }
            if (mevcut)
            {
                
                MessageBox.Show("Aradığımız değer" + (i + 1) + ". sırada bulunuyor");
                
            }
            else
            {
                
                MessageBox.Show("Aradığımız değer bulunmuyor");
                
            }
        }
    }
}
