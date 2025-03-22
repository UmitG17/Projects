function contentAc() {
    var panel = document.getElementById("escontent"); // Paneli seç

    if (panel.style.display === "none" || panel.style.display === "") {
        panel.style.display = "block";
        setTimeout(() => {
            panel.style.width = "300px";
            panel.style.height = "150px";
        }, 100);
    } else {
        panel.style.width = "200px";
        panel.style.height = "200px";
        setTimeout(() => {
            panel.style.display = "none";
        }, 500);
    }
}

function togglebutton()
 {

    panel.style.width = "100px";
    panel.style.height = "100px";


/*
    window.alert("çalışıyo");

    var panel = document.getElementById("panel");

    panel.style.width = "100px";
    panel.style.height == "100px";

    if(panel.style.height == "100px") window.alert(panel.style.height);*/
    
}

