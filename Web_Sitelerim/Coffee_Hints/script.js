var espresso = document.getElementById("espresso")
var esbox = document.getElementById("esbox")
var esbutton_ = document.getElementById("esbutton")

var americano = document.getElementById("americano")
var amebox = document.getElementById("amebox")
var amebutton_ = document.getElementById("amebutton")


var latte = document.getElementById("latte")
var labox = document.getElementById("labox")
var labutton_ = document.getElementById("labutton")

var mocha = document.getElementById("mocha")
var mobox = document.getElementById("mobox")
var mobutton_ = document.getElementById("mobutton")

var macchiato = document.getElementById("macchiato")
var mabox = document.getElementById("mabox")
var mabutton_ = document.getElementById("mabutton")


var cappuccino = document.getElementById("cappuccino")
var cabox = document.getElementById("cabox")
var cabutton_ = document.getElementById("cabutton")


function esbutton()
{
   if( esbox.style.display != "none")
    {
    esbox.style.display = "none"
    espresso.style.borderRadius = "40px"
    esbutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
    esbox.style.display = "block"
    espresso.style.borderBottomLeftRadius = "0px"
    espresso.style.borderBottomRightRadius = "0px"
    esbutton_.style.transform = "rotate(0deg)"
   } 
}


function amebutton()
{
   if( amebox.style.display != "none")
    {
    amebox.style.display = "none"
    americano.style.borderRadius = "40px"
    amebutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
    amebox.style.display = "block"
    americano.style.borderBottomLeftRadius = "0px"
    americano.style.borderBottomRightRadius = "0px"
    amebutton_.style.transform = "rotate(0deg)"
   } 
}


function labutton()
{
   if( labox.style.display != "none")
    {
    labox.style.display = "none"
    latte.style.borderRadius = "40px"
    labutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
   labox.style.display = "block"
   latte.style.borderBottomLeftRadius = "0px"
   latte.style.borderBottomRightRadius = "0px"
   labutton_.style.transform = "rotate(0deg)"
   } 
}


function mobutton()
{
   if(mobox.style.display != "none")
    {
    mobox.style.display = "none"
    mocha.style.borderRadius = "40px"
    mobutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
   mobox.style.display = "block"
   mocha.style.borderBottomLeftRadius = "0px"
   mocha.style.borderBottomRightRadius = "0px"
   mobutton_.style.transform = "rotate(0deg)"
   } 
}


function mabutton()
{
   if( mabox.style.display != "none")
    {
    mabox.style.display = "none"
    macchiato.style.borderRadius = "40px"
    mabutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
   mabox.style.display = "block"
   macchiato.style.borderBottomLeftRadius = "0px"
   macchiato.style.borderBottomRightRadius = "0px"
   mabutton_.style.transform = "rotate(0deg)"
   } 
}


function cabutton()
{
   if( cabox.style.display != "none")
    {
    cabox.style.display = "none"
    cappuccino.style.borderRadius = "40px"
    cabutton_.style.transform = "rotate(180deg)"
    } 
   else
   {
   cabox.style.display = "block"
   cappuccino.style.borderBottomLeftRadius = "0px"
   cappuccino.style.borderBottomRightRadius = "0px"
   cabutton_.style.transform = "rotate(0deg)"
   } 
}