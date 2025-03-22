function contentAc() 
{

    var panel = document.getElementById("escontent"); // Paneli seç
    var espresso = document.getElementById("espresso"); // Paneli seç
        
    if(panel.style.display == "none")
    {
        panel.style.display = "block";
    }
    else
    {
        panel.style.display = "none";
        espresso.style.borderRadius = "20px";
    }










    
    
}

function togglebutton()
 {
    var panel = document.getElementById("panel"); // Paneli seç
    panel.style.width = "100px";
    panel.style.height = "100px";

    panel.style.backgroundColor = "red";
}

