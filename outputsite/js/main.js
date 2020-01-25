

loadinitialel("views/header.html").then((response) => response.text())
.then(function(html) {
    document.getElementById("header").innerHTML = html;
    var pageobj = window.localStorage.getItem('page');
if (pageobj == null){
    pageobj = "home";
    window.localStorage.setItem("page","home");
    navSwitch(pageobj);
}else{
    navSwitch(pageobj);
}

}).catch((error)=>{ console.log(error)});

console.log("You can just download the source here https://github.com/camccar/caleb.com");





