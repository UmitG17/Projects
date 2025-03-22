function contentAc() 
{

    var panel = document.getElementById("escontent"); // Paneli seç
    var espresso = document.getElementById("espresso"); // Paneli seç
    var americano = document.getElementById("americano"); // Paneli seç
    var amecontent = document.getElementById("amecontent"); // Paneli seç

 
    if (panel.style.display == "none")
    {
        panel.style.display = "block";
        


        espresso.style.borderBottomLeftRadius = "0px";
        espresso.style.borderBottomRightRadius = "0px";
        americano.style.top = "65%";
        amecontent.style.top = "69%";
        
    }

    else  
    {
        panel.style.display = "none";
        
        espresso.style.borderRadius = "20px";

        americano.style.top = espresso.style.top + "21%";
        amecontent.style.top = espresso.style.top + "25%";
    }


}

function togglebutton()
 {
    var panel = document.getElementById("panel"); // Paneli seç
    panel.style.width = "100px";
    panel.style.height = "100px";

    panel.style.backgroundColor = "red";
}

